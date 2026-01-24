// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_comb__TOP__447(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__447\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__3334__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__3334__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__3334__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__3334__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__3334__payload;
    __Vfunc_extract_d2h_rsp_intg__3334__payload = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[4U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[4U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[4U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[4U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[4U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[4U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__accept_t_req 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_gnt_i));
    __Vfunc_extract_d2h_rsp_intg__3334__tl[0U] = (IData)(
                                                         (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_rdata_i)) 
                                                           << 0x00000010U) 
                                                          | (QData)((IData)(
                                                                            ((0x0000fffeU 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[0U]) 
                                                                             | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_gnt_i))))));
    __Vfunc_extract_d2h_rsp_intg__3334__tl[1U] = ((0xffff0000U 
                                                   & __Vfunc_extract_d2h_rsp_intg__3334__tl[1U]) 
                                                  | (IData)(
                                                            ((((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_rdata_i)) 
                                                               << 0x00000010U) 
                                                              | (QData)((IData)(
                                                                                ((0x0000fffeU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[0U]) 
                                                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_gnt_i))))) 
                                                             >> 0x00000020U)));
    __Vfunc_extract_d2h_rsp_intg__3334__tl[1U] = ((0x0000ffffU 
                                                   & __Vfunc_extract_d2h_rsp_intg__3334__tl[1U]) 
                                                  | (0xffff0000U 
                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[1U]));
    __Vfunc_extract_d2h_rsp_intg__3334__tl[2U] = (3U 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[2U]);
    __Vfunc_extract_d2h_rsp_intg__3334__payload = (
                                                   (0x00000038U 
                                                    & ((__Vfunc_extract_d2h_rsp_intg__3334__tl[2U] 
                                                        << 5U) 
                                                       | (0x00000018U 
                                                          & (__Vfunc_extract_d2h_rsp_intg__3334__tl[1U] 
                                                             >> 0x0000001bU)))) 
                                                   | ((6U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__3334__tl[1U] 
                                                          >> 0x00000018U)) 
                                                      | (1U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__3334__tl[0U] 
                                                            >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__3334__Vfuncout = __Vfunc_extract_d2h_rsp_intg__3334__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__3334__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[3U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [3U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[3U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [3U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i[3U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h
        [3U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_o[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_o[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_o[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_d2h[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_d2h[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_d2h[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_d2h[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_d2h[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_d2h[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_d2h[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_d2h[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_d2h[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_30__tl_h_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_d 
        = (7U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__accept_t_req)
                  ? ((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q))
                      ? 0U : ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q)))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x81fbdda769a46910ULL 
                                   & (0x5400000000000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[0U] 
                                                              >> 9U)))) 
                                          << 0x00000039U) 
                                         | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x41f7bb56d5525488ULL 
                                                   & (0x5400000000000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[0U] 
                                                                            >> 9U)))) 
                                                        << 0x00000039U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x21ef76cdb2c93244ULL 
                                             & (0x5400000000000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[0U] 
                                                                        >> 9U)))) 
                                                    << 0x00000039U) 
                                                   | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x11deee3b8e388e22ULL 
                                                             & (0x5400000000000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[0U] 
                                                                                >> 9U)))) 
                                                                  << 0x00000039U) 
                                                                 | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x09bde1f87e0781e1ULL 
                                                       & (0x5400000000000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[0U] 
                                                                                >> 9U)))) 
                                                            << 0x00000039U) 
                                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x057c1ff801ff801fULL 
                                                        & (0x5400000000000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[0U] 
                                                                                >> 9U)))) 
                                                             << 0x00000039U) 
                                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x0303fff800007fffULL 
                                                       & (0x5400000000000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[0U] 
                                                                                >> 9U)))) 
                                                            << 0x00000039U) 
                                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[3U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [3U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[3U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [3U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_i[3U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_27__tl_d_i
        [3U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__data_o 
        = (((QData)((IData)((((((((((0x7fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                    << 3U) | ((0x7cU 
                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                              << 2U)) 
                                  | (((0x7aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      << 1U) | (0x76U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                 << 9U) | (((0x6eU 
                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                            << 8U) 
                                           | (((0x5eU 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                               << 7U) 
                                              | ((0x3eU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                 << 6U)))) 
                               | ((((0x79U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                    << 5U) | (((0x75U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                               << 4U) 
                                              | ((0x6dU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                 << 3U))) 
                                  | (((0x5dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      << 2U) | (((0x3dU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                 << 1U) 
                                                | (0x73U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))))) 
                              << 0x0000000cU) | (((
                                                   (((0x6bU 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                     << 5U) 
                                                    | (((0x5bU 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 4U) 
                                                       | ((0x3bU 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 3U))) 
                                                   | (((0x67U 
                                                        == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                       << 2U) 
                                                      | (((0x57U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 1U) 
                                                         | (0x37U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o))))) 
                                                  << 6U) 
                                                 | ((((0x4fU 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                      << 5U) 
                                                     | (((0x2fU 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 4U) 
                                                        | ((0x1fU 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 3U))) 
                                                    | (((0x70U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 2U) 
                                                       | (((0x68U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 1U) 
                                                          | (0x58U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   ((((0x38U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                      << 3U) 
                                                     | ((0x64U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 2U)) 
                                                    | (((0x54U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 1U) 
                                                       | (0x34U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                   << 0x0000000cU) 
                                                  | (((((0x4cU 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 3U) 
                                                       | ((0x2cU 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 2U)) 
                                                      | (((0x1cU 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 1U) 
                                                         | (0x62U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                     << 8U)) 
                                                 | ((((((0x52U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 3U) 
                                                       | ((0x32U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 2U)) 
                                                      | (((0x4aU 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 1U) 
                                                         | (0x2aU 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                     << 4U) 
                                                    | ((((0x1aU 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 3U) 
                                                        | ((0x46U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 2U)) 
                                                       | (((0x26U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 1U) 
                                                          | (0x16U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))))) 
                                                << 0x00000010U) 
                                               | (((((((0x0eU 
                                                        == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                       << 3U) 
                                                      | ((0x61U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 2U)) 
                                                     | (((0x51U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 1U) 
                                                        | (0x31U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                    << 0x0000000cU) 
                                                   | (((((0x49U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 3U) 
                                                        | ((0x29U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 2U)) 
                                                       | (((0x19U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 1U) 
                                                          | (0x45U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                      << 8U)) 
                                                  | ((((((0x25U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 3U) 
                                                        | ((0x15U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 2U)) 
                                                       | (((IData)(
                                                                   (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                     >> 5U) 
                                                                    ^ 
                                                                    (0x0dU 
                                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                           << 1U) 
                                                          | (1U 
                                                             & ((0x43U 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                                ^ 
                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                 >> 4U))))) 
                                                      << 4U) 
                                                     | ((((2U 
                                                           & (((0x23U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                               ^ 
                                                               ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & ((0x13U 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                                ^ 
                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (((0x0bU 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                                ^ 
                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & ((7U 
                                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                                 ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__rsp)))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__err_o 
        = (IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_t_p[2U] 
                    >> 1U) & (((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o))) 
                              | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o))));
}

void Vsim___024root___nba_comb__TOP__448(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__448\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_no_scan_val_sync.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
}

void Vsim___024root___nba_comb__TOP__449(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__449\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_no_scan_val_sync.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_no_scan_val_sync.clk_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

void Vsim___024root___nba_comb__TOP__450(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__450\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_io_clk__DOT__u_no_scan_val_sync.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_osc_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
    }
}

void Vsim___024root___nba_comb__TOP__454(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__454\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_64;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_64 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_69;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_69 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_75;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_75 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_80;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_80 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_85;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_85 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_90;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_90 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_95;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_95 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_101;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_101 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_106;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_106 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_111;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_111 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_116;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_116 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_121;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_121 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_126;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_126 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_131;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_131 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_136;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_136 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_141;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_141 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_147;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_147 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_152;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_152 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_157;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_157 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_162;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_162 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_167;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_167 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_173;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_173 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_178;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_178 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_183;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_183 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_188;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_188 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_272;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_272 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_277;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_277 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_282;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_282 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_287;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_287 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_292;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_292 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_297;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_297 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_302;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_302 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_58;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<4>/*127:0*/ __Vtemp_66;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<4>/*127:0*/ __Vtemp_74;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<4>/*127:0*/ __Vtemp_78;
    VlWide<4>/*127:0*/ __Vtemp_80;
    VlWide<4>/*127:0*/ __Vtemp_82;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<4>/*127:0*/ __Vtemp_86;
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<4>/*127:0*/ __Vtemp_90;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<4>/*127:0*/ __Vtemp_94;
    // Body
    __Vtemp_2[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                           << 3U));
    __Vtemp_2[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                      >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                         << 3U));
    __Vtemp_2[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                      >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                         << 3U));
    __Vtemp_2[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_220 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_30__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000001eU)) : (__Vtemp_2[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_30__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_30__q)))));
    __Vtemp_4[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                           << 3U));
    __Vtemp_4[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                      >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                         << 3U));
    __Vtemp_4[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                      >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                         << 3U));
    __Vtemp_4[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_204 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_27__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000001bU)) : (__Vtemp_4[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_27__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_27__q)))));
    __Vtemp_6[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                           << 3U));
    __Vtemp_6[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                      >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                         << 3U));
    __Vtemp_6[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                      >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                         << 3U));
    __Vtemp_6[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_uart_tx_en_d2p_o 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_26__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000001aU)) : (__Vtemp_6[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_26__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_26__q)))));
    __Vtemp_8[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                           << 3U));
    __Vtemp_8[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                      >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                         << 3U));
    __Vtemp_8[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                      >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                         << 3U));
    __Vtemp_8[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_302 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_46__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000002eU)) : (__Vtemp_8[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_46__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_46__q)))));
    __Vtemp_10[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_10[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_10[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_10[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_297 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_45__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000002dU)) : (__Vtemp_10[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_45__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_45__q)))));
    __Vtemp_12[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_12[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_12[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_12[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_292 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_44__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000002cU)) : (__Vtemp_12[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_44__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_44__q)))));
    __Vtemp_14[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_14[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_14[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_14[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_287 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_43__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000002bU)) : (__Vtemp_14[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_43__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_43__q)))));
    __Vtemp_16[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_16[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_16[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_16[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_282 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_42__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000002aU)) : (__Vtemp_16[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_42__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_42__q)))));
    __Vtemp_18[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_18[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_18[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_18[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_277 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_41__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000029U)) : (__Vtemp_18[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_41__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_41__q)))));
    __Vtemp_20[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_20[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_20[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_20[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_272 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_40__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000028U)) : (__Vtemp_20[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_40__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_40__q)))));
    __Vtemp_22[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_22[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_22[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_22[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_267 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_39__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000027U)) : (__Vtemp_22[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_39__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_39__q)))));
    __Vtemp_24[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_24[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_24[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_24[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_261 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_38__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000026U)) : (__Vtemp_24[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_38__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_38__q)))));
    __Vtemp_26[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_26[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_26[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_26[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_256 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_37__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000025U)) : (__Vtemp_26[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_37__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_37__q)))));
    __Vtemp_28[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_28[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_28[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_28[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_251 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_36__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000024U)) : (__Vtemp_28[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_36__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_36__q)))));
    __Vtemp_30[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_30[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_30[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_30[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_246 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_35__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000023U)) : (__Vtemp_30[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_35__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_35__q)))));
    __Vtemp_32[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_32[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_32[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_32[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_241 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_34__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000022U)) : (__Vtemp_32[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_34__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_34__q)))));
    __Vtemp_34[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_34[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_34[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_34[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_235 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_33__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000021U)) : (__Vtemp_34[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_33__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_33__q)))));
    __Vtemp_36[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_36[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_36[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_36[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_230 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_1_en_32__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000020U)) : (__Vtemp_36[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_32__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_32__q)))));
    __Vtemp_38[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_38[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_38[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_38[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_225 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_31__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000001fU)) : (__Vtemp_38[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_31__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_31__q)))));
    __Vtemp_40[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_40[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_40[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_40[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_214 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_29__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000001dU)) : (__Vtemp_40[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_29__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_29__q)))));
    __Vtemp_42[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_42[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_42[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_42[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_209 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_28__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000001cU)) : (__Vtemp_42[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_28__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_28__q)))));
    __Vtemp_44[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_44[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_44[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_44[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_194 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_25__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000019U)) : (__Vtemp_44[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_25__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_25__q)))));
    __Vtemp_46[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_46[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_46[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_46[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_188 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_24__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000018U)) : (__Vtemp_46[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_24__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_24__q)))));
    __Vtemp_48[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_48[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_48[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_48[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_183 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_23__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000017U)) : (__Vtemp_48[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_23__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_23__q)))));
    __Vtemp_50[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_50[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_50[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_50[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_178 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_22__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000016U)) : (__Vtemp_50[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_22__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_22__q)))));
    __Vtemp_52[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_52[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_52[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_52[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_173 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_21__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000015U)) : (__Vtemp_52[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_21__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_21__q)))));
    __Vtemp_54[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_54[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_54[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_54[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_167 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_20__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000014U)) : (__Vtemp_54[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_20__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_20__q)))));
    __Vtemp_56[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_56[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_56[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_56[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_162 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_19__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000013U)) : (__Vtemp_56[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_19__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_19__q)))));
    __Vtemp_58[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_58[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_58[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_58[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_157 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_18__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000012U)) : (__Vtemp_58[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_18__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_18__q)))));
    __Vtemp_60[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_60[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_60[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_60[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_152 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_17__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000011U)) : (__Vtemp_60[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_17__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_17__q)))));
    __Vtemp_62[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_62[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_62[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_62[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_147 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_16__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x00000010U)) : (__Vtemp_62[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_16__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_16__q)))));
    __Vtemp_64[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_64[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_64[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_64[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_141 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_15__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000000fU)) : (__Vtemp_64[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_15__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_15__q)))));
    __Vtemp_66[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_66[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_66[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_66[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_136 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_14__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000000eU)) : (__Vtemp_66[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_14__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_14__q)))));
    __Vtemp_68[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_68[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_68[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_68[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_131 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_13__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000000dU)) : (__Vtemp_68[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_13__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_13__q)))));
    __Vtemp_70[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_70[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_70[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_70[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_126 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_12__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000000cU)) : (__Vtemp_70[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_12__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_12__q)))));
    __Vtemp_72[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_72[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_72[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_72[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_121 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_11__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000000bU)) : (__Vtemp_72[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_11__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_11__q)))));
    __Vtemp_74[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_74[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_74[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_74[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_116 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_10__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 0x0000000aU)) : (__Vtemp_74[
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_10__q) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_10__q)))));
    __Vtemp_76[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_76[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_76[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_76[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_111 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_9__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 9U)) : (__Vtemp_76[
                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_9__q) 
                                         >> 5U)] >> 
                                        (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_9__q)))));
    __Vtemp_78[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_78[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_78[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_78[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_106 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_8__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 8U)) : (__Vtemp_78[
                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_8__q) 
                                         >> 5U)] >> 
                                        (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_8__q)))));
    __Vtemp_80[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_80[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_80[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_80[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_101 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_7__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 7U)) : (__Vtemp_80[
                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_7__q) 
                                         >> 5U)] >> 
                                        (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_7__q)))));
    __Vtemp_82[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_82[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_82[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_82[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_95 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_6__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 6U)) : (__Vtemp_82[
                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_6__q) 
                                         >> 5U)] >> 
                                        (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_6__q)))));
    __Vtemp_84[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_84[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_84[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_84[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_90 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_5__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 5U)) : (__Vtemp_84[
                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_5__q) 
                                         >> 5U)] >> 
                                        (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_5__q)))));
    __Vtemp_86[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_86[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_86[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_86[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_85 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_4__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 4U)) : (__Vtemp_86[
                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_4__q) 
                                         >> 5U)] >> 
                                        (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_4__q)))));
    __Vtemp_88[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_88[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_88[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_88[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_80 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_3__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 3U)) : (__Vtemp_88[
                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_3__q) 
                                         >> 5U)] >> 
                                        (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_3__q)))));
    __Vtemp_90[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_90[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_90[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_90[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_75 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_2__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 2U)) : (__Vtemp_90[
                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_2__q) 
                                         >> 5U)] >> 
                                        (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_2__q)))));
    __Vtemp_92[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_92[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_92[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_92[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_69 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_1__q)
                  ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q 
                             >> 1U)) : (__Vtemp_92[
                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_1__q) 
                                         >> 5U)] >> 
                                        (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_1__q)))));
    __Vtemp_94[0U] = (3U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                            << 3U));
    __Vtemp_94[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[0U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                                          << 3U));
    __Vtemp_94[2U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[1U] 
                       >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__periph_to_mio_oe_i[2U] 
                                          << 3U));
    __Vtemp_94[3U] = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_64 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_status_0_en_0__q)
                  ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_q)
                  : (__Vtemp_94[((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_0__q) 
                                 >> 5U)] >> (0x0000001fU 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_outsel_0__q)))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_933 = ((
                                                   (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_173) 
                                                       << 5U) 
                                                      | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_167) 
                                                          << 4U) 
                                                         | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_162) 
                                                            << 3U))) 
                                                     | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_157) 
                                                         << 2U) 
                                                        | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_152) 
                                                            << 1U) 
                                                           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_147)))) 
                                                    << 0x00000010U) 
                                                   | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_141) 
                                                         << 4U) 
                                                        | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_136) 
                                                            << 3U) 
                                                           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_131) 
                                                              << 2U))) 
                                                       | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_126) 
                                                           << 1U) 
                                                          | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_121))) 
                                                      << 0x0000000bU)) 
                                                  | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_116) 
                                                         << 5U) 
                                                        | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_111) 
                                                            << 4U) 
                                                           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_106) 
                                                              << 3U))) 
                                                       | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_101) 
                                                           << 2U) 
                                                          | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_95) 
                                                              << 1U) 
                                                             | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_90)))) 
                                                      << 5U) 
                                                     | ((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_85) 
                                                          << 4U) 
                                                         | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_80) 
                                                             << 3U) 
                                                            | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_75) 
                                                               << 2U))) 
                                                        | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_69) 
                                                            << 1U) 
                                                           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_64)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe_retreg_d 
        = (((QData)((IData)(((((((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_46__q)) 
                                   | ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_46__q)) 
                                      | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_46__q)) 
                                         & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_302)))) 
                                  << 3U) | (((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_45__q)) 
                                             | ((1U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_45__q)) 
                                                | ((2U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_45__q)) 
                                                   & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_297)))) 
                                            << 2U)) 
                                | ((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_44__q)) 
                                     | ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_44__q)) 
                                        | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_44__q)) 
                                           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_292)))) 
                                    << 1U) | ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_43__q)) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_43__q)) 
                                                 | ((2U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_43__q)) 
                                                    & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_287)))))) 
                               << 0x0000000bU) | ((
                                                   ((((0U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_42__q)) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_42__q)) 
                                                         | ((2U 
                                                             != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_42__q)) 
                                                            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_282)))) 
                                                     << 3U) 
                                                    | (((0U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_41__q)) 
                                                        | ((1U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_41__q)) 
                                                           | ((2U 
                                                               != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_41__q)) 
                                                              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_277)))) 
                                                       << 2U)) 
                                                   | ((((0U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_40__q)) 
                                                        | ((1U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_40__q)) 
                                                           | ((2U 
                                                               != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_40__q)) 
                                                              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_272)))) 
                                                       << 1U) 
                                                      | ((0U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_39__q)) 
                                                         | ((1U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_39__q)) 
                                                            | ((2U 
                                                                != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_39__q)) 
                                                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_267)))))) 
                                                  << 7U)) 
                             | (((((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_38__q)) 
                                     | ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_38__q)) 
                                        | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_38__q)) 
                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_261)))) 
                                    << 3U) | (((0U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_37__q)) 
                                               | ((1U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_37__q)) 
                                                  | ((2U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_37__q)) 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_256)))) 
                                              << 2U)) 
                                  | ((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_36__q)) 
                                       | ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_36__q)) 
                                          | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_36__q)) 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_251)))) 
                                      << 1U) | ((0U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_35__q)) 
                                                | ((1U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_35__q)) 
                                                   | ((2U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_35__q)) 
                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_246)))))) 
                                 << 3U) | ((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_34__q)) 
                                             | ((1U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_34__q)) 
                                                | ((2U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_34__q)) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_241)))) 
                                            << 2U) 
                                           | ((((0U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_33__q)) 
                                                | ((1U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_33__q)) 
                                                   | ((2U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_33__q)) 
                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_235)))) 
                                               << 1U) 
                                              | ((0U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_32__q)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_32__q)) 
                                                    | ((2U 
                                                        != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_32__q)) 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_230)))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((((0U 
                                                        == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_31__q)) 
                                                       | ((1U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_31__q)) 
                                                          | ((2U 
                                                              != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_31__q)) 
                                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_225)))) 
                                                      << 3U) 
                                                     | (((0U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_30__q)) 
                                                         | ((1U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_30__q)) 
                                                            | ((2U 
                                                                != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_30__q)) 
                                                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_220)))) 
                                                        << 2U)) 
                                                    | ((((0U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_29__q)) 
                                                         | ((1U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_29__q)) 
                                                            | ((2U 
                                                                != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_29__q)) 
                                                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_214)))) 
                                                        << 1U) 
                                                       | ((0U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_28__q)) 
                                                          | ((1U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_28__q)) 
                                                             | ((2U 
                                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_28__q)) 
                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_209)))))) 
                                                   << 0x0000000cU) 
                                                  | ((((((0U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_27__q)) 
                                                         | ((1U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_27__q)) 
                                                            | ((2U 
                                                                != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_27__q)) 
                                                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_204)))) 
                                                        << 3U) 
                                                       | (((0U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_26__q)) 
                                                           | ((1U 
                                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_26__q)) 
                                                              | ((2U 
                                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_26__q)) 
                                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_uart_tx_en_d2p_o)))) 
                                                          << 2U)) 
                                                      | ((((0U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_25__q)) 
                                                           | ((1U 
                                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_25__q)) 
                                                              | ((2U 
                                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_25__q)) 
                                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_194)))) 
                                                          << 1U) 
                                                         | ((0U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_24__q)) 
                                                            | ((1U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_24__q)) 
                                                               | ((2U 
                                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_24__q)) 
                                                                  & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_188)))))) 
                                                     << 8U)) 
                                                 | (((((((0U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_23__q)) 
                                                         | ((1U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_23__q)) 
                                                            | ((2U 
                                                                != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_23__q)) 
                                                               & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_183)))) 
                                                        << 3U) 
                                                       | (((0U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_22__q)) 
                                                           | ((1U 
                                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_22__q)) 
                                                              | ((2U 
                                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_22__q)) 
                                                                 & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_178)))) 
                                                          << 2U)) 
                                                      | ((((0U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_21__q)) 
                                                           | ((1U 
                                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_21__q)) 
                                                              | ((2U 
                                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_21__q)) 
                                                                 & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_173)))) 
                                                          << 1U) 
                                                         | ((0U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_20__q)) 
                                                            | ((1U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_20__q)) 
                                                               | ((2U 
                                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_20__q)) 
                                                                  & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_167)))))) 
                                                     << 4U) 
                                                    | (((((0U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_19__q)) 
                                                          | ((1U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_19__q)) 
                                                             | ((2U 
                                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_19__q)) 
                                                                & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_162)))) 
                                                         << 3U) 
                                                        | (((0U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_18__q)) 
                                                            | ((1U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_18__q)) 
                                                               | ((2U 
                                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_18__q)) 
                                                                  & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_157)))) 
                                                           << 2U)) 
                                                       | ((((0U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_17__q)) 
                                                            | ((1U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_17__q)) 
                                                               | ((2U 
                                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_17__q)) 
                                                                  & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_152)))) 
                                                           << 1U) 
                                                          | ((0U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_16__q)) 
                                                             | ((1U 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_16__q)) 
                                                                | ((2U 
                                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_16__q)) 
                                                                   & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_147)))))))) 
                                                << 0x00000010U) 
                                               | ((((((((0U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_15__q)) 
                                                        | ((1U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_15__q)) 
                                                           | ((2U 
                                                               != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_15__q)) 
                                                              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_141)))) 
                                                       << 3U) 
                                                      | (((0U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_14__q)) 
                                                          | ((1U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_14__q)) 
                                                             | ((2U 
                                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_14__q)) 
                                                                & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_136)))) 
                                                         << 2U)) 
                                                     | ((((0U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_13__q)) 
                                                          | ((1U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_13__q)) 
                                                             | ((2U 
                                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_13__q)) 
                                                                & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_131)))) 
                                                         << 1U) 
                                                        | ((0U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_12__q)) 
                                                           | ((1U 
                                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_12__q)) 
                                                              | ((2U 
                                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_12__q)) 
                                                                 & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_126)))))) 
                                                    << 0x0000000cU) 
                                                   | ((((((0U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_11__q)) 
                                                          | ((1U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_11__q)) 
                                                             | ((2U 
                                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_11__q)) 
                                                                & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_121)))) 
                                                         << 3U) 
                                                        | (((0U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_10__q)) 
                                                            | ((1U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_10__q)) 
                                                               | ((2U 
                                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_10__q)) 
                                                                  & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_116)))) 
                                                           << 2U)) 
                                                       | ((((0U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_9__q)) 
                                                            | ((1U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_9__q)) 
                                                               | ((2U 
                                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_9__q)) 
                                                                  & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_111)))) 
                                                           << 1U) 
                                                          | ((0U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_8__q)) 
                                                             | ((1U 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_8__q)) 
                                                                | ((2U 
                                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_8__q)) 
                                                                   & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_106)))))) 
                                                      << 8U)) 
                                                  | (((((((0U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_7__q)) 
                                                          | ((1U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_7__q)) 
                                                             | ((2U 
                                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_7__q)) 
                                                                & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_101)))) 
                                                         << 3U) 
                                                        | (((0U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_6__q)) 
                                                            | ((1U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_6__q)) 
                                                               | ((2U 
                                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_6__q)) 
                                                                  & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_95)))) 
                                                           << 2U)) 
                                                       | ((((0U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_5__q)) 
                                                            | ((1U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_5__q)) 
                                                               | ((2U 
                                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_5__q)) 
                                                                  & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_90)))) 
                                                           << 1U) 
                                                          | ((0U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_4__q)) 
                                                             | ((1U 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_4__q)) 
                                                                | ((2U 
                                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_4__q)) 
                                                                   & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_85)))))) 
                                                      << 4U) 
                                                     | (((((0U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_3__q)) 
                                                           | ((1U 
                                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_3__q)) 
                                                              | ((2U 
                                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_3__q)) 
                                                                 & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_80)))) 
                                                          << 3U) 
                                                         | (((0U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_2__q)) 
                                                             | ((1U 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_2__q)) 
                                                                | ((2U 
                                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_2__q)) 
                                                                   & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_75)))) 
                                                            << 2U)) 
                                                        | ((((0U 
                                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_1__q)) 
                                                             | ((1U 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_1__q)) 
                                                                | ((2U 
                                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_1__q)) 
                                                                   & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_69)))) 
                                                            << 1U) 
                                                           | ((0U 
                                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_0__q)) 
                                                              | ((1U 
                                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_0__q)) 
                                                                 | ((2U 
                                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_pad_sleep_mode_0__q)) 
                                                                    & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_64))))))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_934 = (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_188) 
                                                   << 0x00000018U) 
                                                  | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_183) 
                                                      << 0x00000017U) 
                                                     | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_178) 
                                                         << 0x00000016U) 
                                                        | vlSelfRef.__VdfgRegularize_he50b618e_0_933)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_oe 
        = (((QData)((IData)((((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_302) 
                                  << 3U) | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_297) 
                                            << 2U)) 
                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_292) 
                                    << 1U) | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_287))) 
                               << 0x0000000bU) | ((
                                                   (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_282) 
                                                     << 3U) 
                                                    | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_277) 
                                                       << 2U)) 
                                                   | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_272) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_267))) 
                                                  << 7U)) 
                             | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_261) 
                                    << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_256) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_251) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_246))) 
                                 << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_241) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_235) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_230))))))) 
            << 0x00000020U) | (QData)((IData)(((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_225) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_220) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_214) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_209))) 
                                                << 0x0000001cU) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_204) 
                                                   << 0x0000001bU) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_uart_tx_en_d2p_o) 
                                                      << 0x0000001aU) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_194) 
                                                         << 0x00000019U) 
                                                        | vlSelfRef.__VdfgRegularize_he50b618e_0_934)))))));
}

void Vsim___024root___nba_comb__TOP__455(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__455\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__req_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__6__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__req_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__6__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__6__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__21__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__22__KET__))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__22__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__21__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__6__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__21__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__22__KET__))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__22__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__21__KET__));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__912__03a830__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__912__03a830__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__912__03a830__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[2U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__912__03a830__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1825__03a1743__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__912__03a830__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1825__03a1743__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__912__03a830__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1825__03a1743__KET__[2U];
    }
}

void Vsim___024root___nba_comb__TOP__456(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__456\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__791__03a720__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__791__03a720__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__791__03a720__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[2U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__791__03a720__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1583__03a1512__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__791__03a720__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1583__03a1512__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__791__03a720__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1583__03a1512__KET__[2U];
    }
}

void Vsim___024root___nba_comb__TOP__459(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__459\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__req_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__req_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__23__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__24__KET__))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__24__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__23__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__23__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__24__KET__))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__24__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__23__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__req_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__req_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__863__03a792__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1799__03a1728__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__863__03a792__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1799__03a1728__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__863__03a792__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1799__03a1728__KET__[2U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__863__03a792__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1727__03a1656__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__863__03a792__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1727__03a1656__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__863__03a792__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1727__03a1656__KET__[2U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__req_tree__BRA__11__KET__)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__11__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__12__KET__))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__12__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__11__KET__));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__995__03a913__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2074__03a1992__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__995__03a913__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2074__03a1992__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__995__03a913__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2074__03a1992__KET__[2U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__995__03a913__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1991__03a1909__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__995__03a913__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1991__03a1909__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__995__03a913__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1991__03a1909__KET__[2U];
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__idx_tree__BRA__23__03a20__KET__ = 0x0bU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__431__03a360__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__431__03a360__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__431__03a360__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[2U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__idx_tree__BRA__23__03a20__KET__ 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel)
                ? 9U : 8U);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__431__03a360__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__863__03a792__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__431__03a360__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__863__03a792__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__431__03a360__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__863__03a792__KET__[2U];
    }
}

void Vsim___024root___nba_comb__TOP__467(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__467\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
        [0x18U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
        [0x18U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
        [0x18U][2U];
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0U][2U];
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [1U][2U];
    }
    if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [2U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [2U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [2U][2U];
    }
    if ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [3U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [3U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [3U][2U];
    }
    if ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [4U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [4U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [4U][2U];
    }
    if ((5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [5U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [5U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [5U][2U];
    }
    if ((6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [6U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [6U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [6U][2U];
    }
    if ((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [7U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [7U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [7U][2U];
    }
    if ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [8U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [8U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [8U][2U];
    }
    if ((9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [9U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [9U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [9U][2U];
    }
    if ((0x0aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0aU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0aU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0aU][2U];
    }
    if ((0x0bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0bU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0bU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0bU][2U];
    }
    if ((0x0cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0cU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0cU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0cU][2U];
    }
    if ((0x0dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0dU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0dU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0dU][2U];
    }
    if ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0eU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0eU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0eU][2U];
    }
    if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0fU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0fU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0fU][2U];
    }
    if ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x10U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x10U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x10U][2U];
    }
    if ((0x11U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x11U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x11U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x11U][2U];
    }
    if ((0x12U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x12U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x12U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x12U][2U];
    }
    if ((0x13U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x13U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x13U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x13U][2U];
    }
    if ((0x14U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x14U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x14U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x14U][2U];
    }
    if ((0x15U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x15U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x15U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x15U][2U];
    }
    if ((0x16U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x16U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x16U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x16U][2U];
    }
    if ((0x17U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x17U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x17U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x17U][2U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
        = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
           [0x18U][0U]);
    if ((0U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0U][0U]);
    }
    if ((1U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [1U][0U]);
    }
    if ((2U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [2U][0U]);
    }
    if ((3U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [3U][0U]);
    }
    if ((4U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [4U][0U]);
    }
    if ((5U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [5U][0U]);
    }
    if ((6U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [6U][0U]);
    }
    if ((7U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [7U][0U]);
    }
    if ((8U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [8U][0U]);
    }
    if ((9U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [9U][0U]);
    }
    if ((0x0aU == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x0aU][0U]);
    }
    if ((0x0bU == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x0bU][0U]);
    }
    if ((0x0cU == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x0cU][0U]);
    }
    if ((0x0dU == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x0dU][0U]);
    }
    if ((0x0eU == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x0eU][0U]);
    }
    if ((0x0fU == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x0fU][0U]);
    }
    if ((0x10U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x10U][0U]);
    }
    if ((0x11U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x11U][0U]);
    }
    if ((0x12U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x12U][0U]);
    }
    if ((0x13U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x13U][0U]);
    }
    if ((0x14U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x14U][0U]);
    }
    if ((0x15U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x15U][0U]);
    }
    if ((0x16U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x16U][0U]);
    }
    if ((0x17U == (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rdata_o[0U]))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
               [0x17U][0U]);
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hold_all_requests) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
        = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
           [0x18U][0U]);
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0U][0U]);
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [1U][0U]);
    }
    if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [2U][0U]);
    }
    if ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [3U][0U]);
    }
    if ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [4U][0U]);
    }
    if ((5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [5U][0U]);
    }
    if ((6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [6U][0U]);
    }
    if ((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [7U][0U]);
    }
    if ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [8U][0U]);
    }
    if ((9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [9U][0U]);
    }
    if ((0x0aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x0aU][0U]);
    }
    if ((0x0bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x0bU][0U]);
    }
    if ((0x0cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x0cU][0U]);
    }
    if ((0x0dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x0dU][0U]);
    }
    if ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x0eU][0U]);
    }
    if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x0fU][0U]);
    }
    if ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x10U][0U]);
    }
    if ((0x11U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x11U][0U]);
    }
    if ((0x12U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x12U][0U]);
    }
    if ((0x13U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x13U][0U]);
    }
    if ((0x14U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x14U][0U]);
    }
    if ((0x15U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x15U][0U]);
    }
    if ((0x16U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x16U][0U]);
    }
    if ((0x17U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_32))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready 
            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
               [0x17U][0U]);
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hold_all_requests) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__hfifo_reqready = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
        [0x18U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
        [0x18U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
        [0x18U][2U];
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0U][2U];
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [1U][2U];
    }
    if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [2U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [2U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [2U][2U];
    }
    if ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [3U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [3U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [3U][2U];
    }
    if ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [4U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [4U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [4U][2U];
    }
    if ((5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [5U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [5U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [5U][2U];
    }
    if ((6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [6U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [6U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [6U][2U];
    }
    if ((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [7U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [7U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [7U][2U];
    }
    if ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [8U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [8U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [8U][2U];
    }
    if ((9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [9U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [9U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [9U][2U];
    }
    if ((0x0aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0aU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0aU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0aU][2U];
    }
    if ((0x0bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0bU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0bU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0bU][2U];
    }
    if ((0x0cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0cU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0cU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0cU][2U];
    }
    if ((0x0dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0dU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0dU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0dU][2U];
    }
    if ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0eU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0eU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0eU][2U];
    }
    if ((0x0fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0fU][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0fU][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0fU][2U];
    }
    if ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x10U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x10U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x10U][2U];
    }
    if ((0x11U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x11U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x11U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x11U][2U];
    }
    if ((0x12U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x12U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x12U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x12U][2U];
    }
    if ((0x13U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x13U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x13U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x13U][2U];
    }
    if ((0x14U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x14U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x14U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x14U][2U];
    }
    if ((0x15U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x15U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x15U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x15U][2U];
    }
    if ((0x16U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x16U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x16U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x16U][2U];
    }
    if ((0x17U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__dev_select_outstanding))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x17U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x17U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x17U][2U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[3U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [3U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[3U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [3U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[3U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [3U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[4U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [4U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[4U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [4U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[4U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [4U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[5U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [5U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[5U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [5U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[5U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [5U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[6U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [6U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[6U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [6U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[6U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [6U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[7U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [7U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[7U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [7U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[7U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [7U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[8U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [8U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[8U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [8U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[8U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [8U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[9U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [9U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[9U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [9U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[9U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [9U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000aU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000aU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000aU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000aU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000aU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000aU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000bU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000bU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000bU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000bU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000bU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000bU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000cU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000cU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000cU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000cU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000cU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000cU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000dU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000dU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000dU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000dU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000dU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000dU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000eU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000eU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000eU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000eU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000eU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000eU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000fU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000fU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000fU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000fU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x0000000fU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x0000000fU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000010U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000010U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000010U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000010U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000010U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000010U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000011U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000011U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000011U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000011U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000011U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000011U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000012U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000012U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000012U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000012U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000012U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000012U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000013U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000013U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000013U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000013U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000013U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000013U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000014U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000014U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000014U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000014U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000014U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000014U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000015U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000015U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000015U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000015U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000015U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000015U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000016U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000016U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000016U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000016U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000016U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000016U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000017U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000017U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000017U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000017U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i[0x00000017U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h
        [0x00000017U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[3U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [3U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[3U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [3U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[3U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [3U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[4U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [4U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[4U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [4U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[4U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [4U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[5U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [5U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[5U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [5U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[5U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [5U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[6U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [6U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[6U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [6U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[6U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [6U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[7U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [7U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[7U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [7U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[7U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [7U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[8U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [8U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[8U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [8U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[8U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [8U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[9U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [9U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[9U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [9U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[9U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [9U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000aU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000aU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000aU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000aU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000aU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000aU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000bU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000bU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000bU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000bU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000bU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000bU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000cU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000cU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000cU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000cU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000cU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000cU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000dU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000dU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000dU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000dU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000dU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000dU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000eU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000eU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000eU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000eU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000eU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000eU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000fU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000fU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000fU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000fU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x0000000fU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x0000000fU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000010U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000010U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000010U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000010U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000010U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000010U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000011U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000011U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000011U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000011U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000011U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000011U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000012U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000012U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000012U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000012U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000012U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000012U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000013U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000013U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000013U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000013U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000013U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000013U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000014U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000014U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000014U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000014U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000014U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000014U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000015U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000015U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000015U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000015U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000015U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000015U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000016U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000016U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000016U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000016U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000016U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000016U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000017U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000017U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000017U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000017U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i[0x00000017U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h
        [0x00000017U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__accept_t_rsp 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_t_p[2U] 
              >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__hfifo_reqready));
    if ((1U == (7U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
                       << 2U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
                                 >> 0x0000001eU))))) {
        vlSelfRef.__VdfgRegularize_he50b618e_0_847 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U] 
                << 0x00000010U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
                                   >> 0x00000010U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__data_rdata_i 
            = vlSelfRef.__VdfgRegularize_he50b618e_0_847;
    } else {
        vlSelfRef.__VdfgRegularize_he50b618e_0_847 = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__data_rdata_i = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[3U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [3U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[3U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [3U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[3U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [3U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[4U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [4U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[4U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [4U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[4U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [4U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[5U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [5U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[5U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [5U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[5U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [5U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[6U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [6U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[6U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [6U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[6U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [6U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[7U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [7U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[7U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [7U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[7U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [7U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[8U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [8U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[8U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [8U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[8U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [8U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[9U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [9U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[9U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [9U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[9U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [9U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000aU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000aU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000aU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000aU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000aU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000aU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000bU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000bU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000bU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000bU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000bU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000bU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000cU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000cU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000cU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000cU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000cU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000cU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000dU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000dU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000dU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000dU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000dU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000dU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000eU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000eU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000eU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000eU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000eU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000eU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000fU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000fU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000fU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000fU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x0000000fU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x0000000fU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000010U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000010U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000010U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000010U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000010U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000010U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000011U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000011U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000011U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000011U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000011U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000011U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000012U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000012U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000012U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000012U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000012U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000012U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000013U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000013U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000013U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000013U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000013U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000013U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000014U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000014U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000014U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000014U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000014U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000014U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000015U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000015U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000015U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000015U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000015U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000015U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000016U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000016U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000016U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000016U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000016U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000016U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000017U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000017U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000017U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000017U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_d_i[0x00000017U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_57__tl_d_i
        [0x00000017U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[3U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [3U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[3U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [3U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[3U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [3U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[4U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [4U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[4U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [4U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[4U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [4U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[5U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [5U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[5U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [5U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[5U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [5U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[6U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [6U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[6U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [6U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[6U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [6U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[7U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [7U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[7U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [7U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[7U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [7U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[8U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [8U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[8U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [8U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[8U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [8U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[9U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [9U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[9U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [9U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[9U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [9U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000aU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000aU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000aU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000aU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000aU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000aU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000bU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000bU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000bU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000bU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000bU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000bU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000cU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000cU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000cU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000cU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000cU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000cU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000dU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000dU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000dU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000dU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000dU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000dU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000eU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000eU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000eU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000eU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000eU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000eU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000fU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000fU][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000fU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000fU][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x0000000fU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x0000000fU][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000010U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000010U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000010U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000010U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000010U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000010U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000011U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000011U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000011U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000011U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000011U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000011U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000012U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000012U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000012U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000012U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000012U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000012U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000013U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000013U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000013U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000013U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000013U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000013U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000014U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000014U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000014U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000014U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000014U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000014U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000015U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000015U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000015U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000015U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000015U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000015U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000016U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000016U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000016U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000016U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000016U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000016U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000017U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000017U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000017U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000017U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_d_i[0x00000017U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_s1n_32__tl_d_i
        [0x00000017U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__accept_t_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__rready_i));
}

void Vsim___024root___nba_comb__TOP__468(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__468\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__3336__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__3336__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__3336__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__3336__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__3336__payload;
    __Vfunc_extract_d2h_rsp_intg__3336__payload = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__accept_t_req 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.data_req_o) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_gnt_i));
    __Vfunc_extract_d2h_rsp_intg__3336__tl[0U] = (IData)(
                                                         (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__data_rdata_i)) 
                                                           << 0x00000010U) 
                                                          | (QData)((IData)(
                                                                            ((0x0000fffeU 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U]) 
                                                                             | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_gnt_i))))));
    __Vfunc_extract_d2h_rsp_intg__3336__tl[1U] = ((0xffff0000U 
                                                   & __Vfunc_extract_d2h_rsp_intg__3336__tl[1U]) 
                                                  | (IData)(
                                                            ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__data_rdata_i)) 
                                                               << 0x00000010U) 
                                                              | (QData)((IData)(
                                                                                ((0x0000fffeU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U]) 
                                                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_gnt_i))))) 
                                                             >> 0x00000020U)));
    __Vfunc_extract_d2h_rsp_intg__3336__tl[1U] = ((0x0000ffffU 
                                                   & __Vfunc_extract_d2h_rsp_intg__3336__tl[1U]) 
                                                  | (0xffff0000U 
                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[1U]));
    __Vfunc_extract_d2h_rsp_intg__3336__tl[2U] = (3U 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U]);
    __Vfunc_extract_d2h_rsp_intg__3336__payload = (
                                                   (0x00000038U 
                                                    & ((__Vfunc_extract_d2h_rsp_intg__3336__tl[2U] 
                                                        << 5U) 
                                                       | (0x00000018U 
                                                          & (__Vfunc_extract_d2h_rsp_intg__3336__tl[1U] 
                                                             >> 0x0000001bU)))) 
                                                   | ((6U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__3336__tl[1U] 
                                                          >> 0x00000018U)) 
                                                      | (1U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__3336__tl[0U] 
                                                            >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__3336__Vfuncout = __Vfunc_extract_d2h_rsp_intg__3336__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__3336__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__g_multiple_reqs__DOT__source_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__accept_t_req)
                  ? ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__g_multiple_reqs__DOT__source_q)) 
                     & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__g_multiple_reqs__DOT__source_q)))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__g_multiple_reqs__DOT__source_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x81fbdda769a46910ULL 
                                   & (0x5400000000000000ULL 
                                      ^ (((QData)((IData)(
                                                          (0x0000007fU 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
                                                              >> 9U)))) 
                                          << 0x00000039U) 
                                         | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x41f7bb56d5525488ULL 
                                                   & (0x5400000000000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        (0x0000007fU 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
                                                                            >> 9U)))) 
                                                        << 0x00000039U) 
                                                       | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x21ef76cdb2c93244ULL 
                                             & (0x5400000000000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    (0x0000007fU 
                                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
                                                                        >> 9U)))) 
                                                    << 0x00000039U) 
                                                   | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x11deee3b8e388e22ULL 
                                                             & (0x5400000000000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                (0x0000007fU 
                                                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
                                                                                >> 9U)))) 
                                                                  << 0x00000039U) 
                                                                 | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x09bde1f87e0781e1ULL 
                                                       & (0x5400000000000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
                                                                                >> 9U)))) 
                                                            << 0x00000039U) 
                                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x057c1ff801ff801fULL 
                                                        & (0x5400000000000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             (0x0000007fU 
                                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
                                                                                >> 9U)))) 
                                                             << 0x00000039U) 
                                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x0303fff800007fffULL 
                                                       & (0x5400000000000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            (0x0000007fU 
                                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[0U] 
                                                                                >> 9U)))) 
                                                            << 0x00000039U) 
                                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__data_o 
        = (((QData)((IData)((((((((((0x7fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                    << 3U) | ((0x7cU 
                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                              << 2U)) 
                                  | (((0x7aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      << 1U) | (0x76U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                 << 9U) | (((0x6eU 
                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                            << 8U) 
                                           | (((0x5eU 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                               << 7U) 
                                              | ((0x3eU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                 << 6U)))) 
                               | ((((0x79U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                    << 5U) | (((0x75U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                               << 4U) 
                                              | ((0x6dU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                 << 3U))) 
                                  | (((0x5dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      << 2U) | (((0x3dU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                 << 1U) 
                                                | (0x73U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))))) 
                              << 0x0000000cU) | (((
                                                   (((0x6bU 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                     << 5U) 
                                                    | (((0x5bU 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 4U) 
                                                       | ((0x3bU 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 3U))) 
                                                   | (((0x67U 
                                                        == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                       << 2U) 
                                                      | (((0x57U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 1U) 
                                                         | (0x37U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o))))) 
                                                  << 6U) 
                                                 | ((((0x4fU 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                      << 5U) 
                                                     | (((0x2fU 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 4U) 
                                                        | ((0x1fU 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 3U))) 
                                                    | (((0x70U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 2U) 
                                                       | (((0x68U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 1U) 
                                                          | (0x58U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   ((((0x38U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                      << 3U) 
                                                     | ((0x64U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 2U)) 
                                                    | (((0x54U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 1U) 
                                                       | (0x34U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                   << 0x0000000cU) 
                                                  | (((((0x4cU 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 3U) 
                                                       | ((0x2cU 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 2U)) 
                                                      | (((0x1cU 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 1U) 
                                                         | (0x62U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                     << 8U)) 
                                                 | ((((((0x52U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                        << 3U) 
                                                       | ((0x32U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 2U)) 
                                                      | (((0x4aU 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                          << 1U) 
                                                         | (0x2aU 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                     << 4U) 
                                                    | ((((0x1aU 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 3U) 
                                                        | ((0x46U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 2U)) 
                                                       | (((0x26U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 1U) 
                                                          | (0x16U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))))) 
                                                << 0x00000010U) 
                                               | (((((((0x0eU 
                                                        == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                       << 3U) 
                                                      | ((0x61U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 2U)) 
                                                     | (((0x51U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 1U) 
                                                        | (0x31U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                    << 0x0000000cU) 
                                                   | (((((0x49U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 3U) 
                                                        | ((0x29U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 2U)) 
                                                       | (((0x19U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 1U) 
                                                          | (0x45U 
                                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                      << 8U)) 
                                                  | ((((((0x25U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                         << 3U) 
                                                        | ((0x15U 
                                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                           << 2U)) 
                                                       | (((IData)(
                                                                   (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                     >> 5U) 
                                                                    ^ 
                                                                    (0x0dU 
                                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)))) 
                                                           << 1U) 
                                                          | (1U 
                                                             & ((0x43U 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                                ^ 
                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                 >> 4U))))) 
                                                      << 4U) 
                                                     | ((((2U 
                                                           & (((0x23U 
                                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                               ^ 
                                                               ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & ((0x13U 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                                ^ 
                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (((0x0bU 
                                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                                ^ 
                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp) 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & ((7U 
                                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                                 ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__rsp)))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__err_o 
        = (IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_t_p[2U] 
                    >> 1U) & (((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o)) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o))) 
                              | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_d_ibex__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o))));
}

void Vsim___024root___nba_comb__TOP__469(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__469\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__62__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__62__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__61__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__61__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__60__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__60__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__ = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__61__KET__ 
        = ((0x1eU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__62__KET__ 
        = ((0x1fU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__ 
        = ((0x1cU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__60__KET__ 
        = ((0x1dU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__ 
        = ((0x1aU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__ 
        = ((0x1bU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__ 
        = ((0x18U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__ 
        = ((0x19U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__ 
        = ((0x16U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__ 
        = ((0x17U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__ 
        = ((0x14U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__ 
        = ((0x15U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__ 
        = ((0x12U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__ 
        = ((0x13U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__ 
        = ((0x10U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__ 
        = ((0x11U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__ 
        = ((0x0eU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__ 
        = ((0x0fU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__ 
        = ((0x0cU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__ 
        = ((0x0dU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ 
        = ((0x0aU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__ 
        = ((0x0bU == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__ 
        = ((8U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__ 
        = ((9U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__ 
        = ((6U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__ 
        = ((7U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ 
        = ((4U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ 
        = ((5U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__ 
        = ((2U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ 
        = ((3U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__ 
        = ((0U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ 
        = ((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
           & (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__30__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__61__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__62__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__30__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__61__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__62__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__30__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__61__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__62__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__29__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__60__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__29__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__60__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__29__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__60__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__28__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__28__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__27__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__27__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__26__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__25__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__24__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__23__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__22__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__21__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__20__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__19__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__18__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__17__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__16__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__62__KET__) 
                  << 3U) | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__61__KET__) 
                            << 2U)) | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__60__KET__) 
                                        << 1U) | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__59__KET__))) 
               << 0x0000000cU) | (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__58__KET__) 
                                     << 3U) | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__57__KET__) 
                                               << 2U)) 
                                   | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__56__KET__) 
                                       << 1U) | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__55__KET__))) 
                                  << 8U)) | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__) 
                                                 << 3U) 
                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
                                                   << 2U)) 
                                               | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__) 
                                                   << 1U) 
                                                  | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__))) 
                                              << 4U) 
                                             | ((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__) 
                                                  << 3U) 
                                                 | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
                                                    << 2U)) 
                                                | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__) 
                                                    << 1U) 
                                                   | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__))))) 
            << 0x00000010U) | (((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__) 
                                    << 3U) | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
                                              << 2U)) 
                                  | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__) 
                                      << 1U) | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__))) 
                                 << 0x0000000cU) | 
                                (((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__) 
                                    << 3U) | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
                                              << 2U)) 
                                  | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__) 
                                      << 1U) | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__))) 
                                 << 8U)) | ((((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__) 
                                                << 3U) 
                                               | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
                                                  << 2U)) 
                                              | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__) 
                                                  << 1U) 
                                                 | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__))) 
                                             << 4U) 
                                            | ((((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__) 
                                                 << 3U) 
                                                | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
                                                   << 2U)) 
                                               | (((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__) 
                                                   << 1U) 
                                                  | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__15__KET__ 
        = (((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
            & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__)) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
              & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__14__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__29__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__30__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__29__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__30__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__29__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__30__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__29__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__30__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__13__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__27__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__28__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__13__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__27__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__28__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__28__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__12__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__25__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__26__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__11__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__23__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__24__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__10__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__21__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__22__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__9__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__19__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__20__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__8__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__17__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__18__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__7__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 1U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__15__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__16__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__6__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 2U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__13__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__14__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__6__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__13__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__14__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__5__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 2U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__11__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__12__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__4__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 2U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__9__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__10__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__3__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 2U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__7__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__8__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__2__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 3U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__5__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 3U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__6__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__6__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__1__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 3U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__3__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 3U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__4__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__0__KET__ 
        = (((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                >> 4U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__1__KET__)) 
           | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
               >> 4U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__BRA__2__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__oh0_err 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__)));
}

extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h4d851b67_0;
extern const VlUnpacked<SData/*8:0*/, 512> Vsim__ConstPool__TABLE_h9c001f2d_0;

void Vsim___024root___nba_comb__TOP__470(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__470\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_hw_sel__DOT____Vlvbound_hcddc3f3f__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_hw_sel__DOT____Vlvbound_hcddc3f3f__0 = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__829__Vfuncout;
    __Vfunc_mubi4_and_hi__829__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__829__a;
    __Vfunc_mubi4_and_hi__829__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__829__b;
    __Vfunc_mubi4_and_hi__829__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__830__Vfuncout;
    __Vfunc_mubi4_and__830__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__830__a;
    __Vfunc_mubi4_and__830__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__830__b;
    __Vfunc_mubi4_and__830__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__830__a_in;
    __Vfunc_mubi4_and__830__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__830__b_in;
    __Vfunc_mubi4_and__830__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__831__Vfuncout;
    __Vfunc_mubi4_and_hi__831__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__831__a;
    __Vfunc_mubi4_and_hi__831__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__831__b;
    __Vfunc_mubi4_and_hi__831__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__832__Vfuncout;
    __Vfunc_mubi4_and__832__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__832__a;
    __Vfunc_mubi4_and__832__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__832__b;
    __Vfunc_mubi4_and__832__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__832__a_in;
    __Vfunc_mubi4_and__832__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__832__b_in;
    __Vfunc_mubi4_and__832__b_in = 0;
    SData/*8:0*/ __Vtableidx118;
    __Vtableidx118 = 0;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<18>/*575:0*/ __Vtemp_12;
    VlWide<53>/*1695:0*/ __Vtemp_25;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__wvalid_i 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__prog_cnt_en)
            : ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
               & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__req_o) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_op_valid))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (3U == (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__rvalid_o) 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__cnt_hit));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_intr_state_prog_empty__DOT__d 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__rvalid_o)) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_intr_prog_empty__DOT__g_intr_status__DOT__test_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_flash_req 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__st_q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__err_q)) 
              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1714) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__rvalid_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__txn_done 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[2U] 
             >> 0x0000001bU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__txn_err)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_flash_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_prog_last 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_flash_req) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__cnt_hit));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req 
        = ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                         >> 1U))) ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_flash_req)
            : ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                             >> 1U))) ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_flash_req)
                : (IData)(((4U == (6U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)) 
                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_flash_req)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_fifo_ren = 0U;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__st_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__st_d 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__st_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_fifo_ren 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__rvalid_o;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__st_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__err_q) 
               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1714)
                   ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__txn_done)
                       ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__cnt_hit)
                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__st_q)
                           : (0U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)))
                       : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__st_q))
                   : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54) 
                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__st_q))));
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__err_q)))) {
            if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_op_valid) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__prog_type_avail)) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__pgm_res_err)))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__txn_done) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_fifo_ren = 1U;
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__bk_erase_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_bk_erase_en) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_bk_erase_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_hw_sel__DOT__region_end[0U] = 0x0200U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_hw_sel__DOT____Vlvbound_hcddc3f3f__0 
        = ((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                             >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_hw_sel__DOT__region_end
             [0U]) & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__phase))) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
              & (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_hw_sel__DOT__region_match 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_hw_sel__DOT____Vlvbound_hcddc3f3f__0;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i 
        = ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__addr_invalid 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
           & (((0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) > ((0x00000020U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)
                                           ? ((2U >= 
                                               (3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                   >> 6U)))
                                               ? vlSymsp->TOP__flash_ctrl_pkg.InfoPartitionEndAddr
                                              [(3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                   >> 6U))]
                                               : 0U)
                                           : 0xffU)) 
              | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__int_addr 
                  | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__int_addr) 
                 >> 0x00000012U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg_pre = 0U;
    if (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req))) {
        if (((IData)(((0x00000200U == (0x0003fe00U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr)) 
                      & (0U == (0x000000c0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)))) 
             & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__phase)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg_pre = 0x06699666U;
        }
        if (((IData)(((0x00000400U == (0x0003fe00U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr)) 
                      & (0U == (0x000000c0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)))) 
             & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__phase)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg_pre = 0x06699666U;
        }
        if (((IData)(((0x00000200U == (0x0003fe00U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr)) 
                      & (0U == (0x000000c0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)))) 
             & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__phase)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg_pre = 0x06666666U;
        }
        if (((IData)(((0x00000400U == (0x0003fe00U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr)) 
                      & (0U == (0x000000c0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)))) 
             & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__phase)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg_pre = 0x06666666U;
        }
        if (((IData)(((0x00000600U == (0x0003fe00U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr)) 
                      & (0U == (0x000000c0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)))) 
             & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__phase)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg_pre = 0x06666666U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg_pre;
    __Vfunc_mubi4_and_hi__829__b = (0x0000000fU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_hw_info_cfg_override_scramble_dis__q)));
    __Vfunc_mubi4_and_hi__829__a = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg_pre 
                                                   >> 8U));
    __Vfunc_mubi4_and__830__b = __Vfunc_mubi4_and_hi__829__b;
    __Vfunc_mubi4_and__830__a = __Vfunc_mubi4_and_hi__829__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__830__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13641333137732194183ull);
    __Vfunc_mubi4_and__830__a_in = __Vfunc_mubi4_and__830__a;
    __Vfunc_mubi4_and__830__b_in = __Vfunc_mubi4_and__830__b;
    vlSelfRef.__Vfunc_mubi4_and__830__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__830__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__830__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__830__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__830__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__830__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__830__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__830__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__830__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__830__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__830__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__830__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__830__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__830__out;
    __Vfunc_mubi4_and_hi__829__Vfuncout = __Vfunc_mubi4_and__830__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg 
        = ((0x0ffff0ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg) 
           | ((IData)(__Vfunc_mubi4_and_hi__829__Vfuncout) 
              << 8U));
    __Vfunc_mubi4_and_hi__831__b = (0x0000000fU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_hw_info_cfg_override_ecc_dis__q)));
    __Vfunc_mubi4_and_hi__831__a = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg_pre 
                                                   >> 4U));
    __Vfunc_mubi4_and__832__b = __Vfunc_mubi4_and_hi__831__b;
    __Vfunc_mubi4_and__832__a = __Vfunc_mubi4_and_hi__831__a;
    vlSelf->__Vfunc_mubi4_and__832__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6163167147080481466ull);
    __Vfunc_mubi4_and__832__a_in = __Vfunc_mubi4_and__832__a;
    __Vfunc_mubi4_and__832__b_in = __Vfunc_mubi4_and__832__b;
    vlSelfRef.__Vfunc_mubi4_and__832__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__832__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__832__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__832__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__832__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__832__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__832__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__832__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__832__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__832__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__832__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__832__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__832__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__832__out;
    __Vfunc_mubi4_and_hi__831__Vfuncout = __Vfunc_mubi4_and__832__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg 
        = ((0x0fffff0fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg) 
           | ((IData)(__Vfunc_mubi4_and_hi__831__Vfuncout) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_fifo_ren)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_fifo_ren)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_fifo_ren)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [0U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                    [0U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end[0U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                      [0U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end
                 [0U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                [0U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [0U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match 
        = ((0x01feU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match)) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [1U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                    [1U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end[1U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                      [1U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end
                 [1U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                [1U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [1U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match 
        = ((0x01fdU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0) 
              << 1U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [2U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                    [2U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end[2U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                      [2U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end
                 [2U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                [2U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [2U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match 
        = ((0x01fbU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0) 
              << 2U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [3U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                    [3U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end[3U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                      [3U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end
                 [3U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                [3U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [3U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match 
        = ((0x01f7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0) 
              << 3U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [4U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                    [4U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end[4U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                      [4U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end
                 [4U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                [4U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [4U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match 
        = ((0x01efU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0) 
              << 4U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [5U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                    [5U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end[5U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                      [5U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end
                 [5U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                [5U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [5U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match 
        = ((0x01dfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0) 
              << 5U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [6U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                    [6U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end[6U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                      [6U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end
                 [6U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                [6U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [6U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match 
        = ((0x01bfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0) 
              << 6U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [7U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                    [7U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end[7U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                      [7U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end
                 [7U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                [7U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [7U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match 
        = ((0x017fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0) 
              << 7U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [8U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                    [8U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end[8U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                      [8U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_end
                 [8U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                [8U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
                                                  [8U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__841__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____Vcellinp__u_sw_sel__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match 
        = ((0x00ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT____Vlvbound_h63a115ac__0) 
              << 8U));
    __Vtemp_7[0U] = (((IData)((((QData)((IData)((((
                                                   (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_en_1__q) 
                                                     << 0x0000000cU) 
                                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_rd_en_1__q) 
                                                       << 8U)) 
                                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_prog_en_1__q) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_erase_en_1__q))) 
                                                  << 0x00000010U) 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_scramble_en_1__q) 
                                                      << 0x0000000cU) 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_ecc_en_1__q) 
                                                        << 8U)) 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_he_en_1__q) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_en_0__q)))))) 
                                << 0x00000010U) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_rd_en_0__q) 
                                                                     << 0x0000000cU) 
                                                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_prog_en_0__q) 
                                                                       << 8U)) 
                                                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_erase_en_0__q) 
                                                                       << 4U) 
                                                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_scramble_en_0__q))))))) 
                      << 8U) | ((0x000000f0U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_ecc_en_0__q) 
                                                << 4U)) 
                                | ((0x000000ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_he_en_0__q)) 
                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_1[0x0000002bU] 
                                      >> 0x00000018U))));
    __Vtemp_7[1U] = (((IData)(((((QData)((IData)(((
                                                   ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_en_1__q) 
                                                      << 0x0000000cU) 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_rd_en_1__q) 
                                                        << 8U)) 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_prog_en_1__q) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_erase_en_1__q))) 
                                                   << 0x00000010U) 
                                                  | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_scramble_en_1__q) 
                                                       << 0x0000000cU) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_ecc_en_1__q) 
                                                         << 8U)) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_he_en_1__q) 
                                                         << 4U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_en_0__q)))))) 
                                 << 0x00000010U) | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_rd_en_0__q) 
                                                                      << 0x0000000cU) 
                                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_prog_en_0__q) 
                                                                        << 8U)) 
                                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_erase_en_0__q) 
                                                                        << 4U) 
                                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_scramble_en_0__q)))))) 
                               >> 0x00000020U)) << 8U) 
                     | ((IData)((((QData)((IData)((
                                                   (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_en_1__q) 
                                                       << 0x0000000cU) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_rd_en_1__q) 
                                                         << 8U)) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_prog_en_1__q) 
                                                         << 4U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_erase_en_1__q))) 
                                                    << 0x00000010U) 
                                                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_scramble_en_1__q) 
                                                        << 0x0000000cU) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_ecc_en_1__q) 
                                                          << 8U)) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_he_en_1__q) 
                                                          << 4U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_en_0__q)))))) 
                                  << 0x00000010U) | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_rd_en_0__q) 
                                                                       << 0x0000000cU) 
                                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_prog_en_0__q) 
                                                                         << 8U)) 
                                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_erase_en_0__q) 
                                                                         << 4U) 
                                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_scramble_en_0__q))))))) 
                        >> 0x00000018U));
    __Vtemp_12[0x0000000aU] = ((__Vtemp_7[1U] >> 8U) 
                               | (0xff000000U & (IData)(
                                                        ((((QData)((IData)(
                                                                           ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_en_1__q) 
                                                                                << 0x0000000cU) 
                                                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_rd_en_1__q) 
                                                                                << 8U)) 
                                                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_prog_en_1__q) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_erase_en_1__q))) 
                                                                             << 0x00000010U) 
                                                                            | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_scramble_en_1__q) 
                                                                                << 0x0000000cU) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_ecc_en_1__q) 
                                                                                << 8U)) 
                                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_he_en_1__q) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_en_0__q)))))) 
                                                           << 0x00000010U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_rd_en_0__q) 
                                                                               << 0x0000000cU) 
                                                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_prog_en_0__q) 
                                                                                << 8U)) 
                                                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_erase_en_0__q) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_scramble_en_0__q)))))) 
                                                         >> 0x00000020U))));
    __Vtemp_25[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[0U];
    __Vtemp_25[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[1U];
    __Vtemp_25[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[2U];
    __Vtemp_25[3U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[3U];
    __Vtemp_25[4U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[4U];
    __Vtemp_25[5U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[5U];
    __Vtemp_25[6U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[6U];
    __Vtemp_25[7U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[7U];
    __Vtemp_25[8U] = (((IData)((0x00ffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[0x0000000aU])) 
                                    << 0x00000028U) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[9U])) 
                                       << 8U) | ((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[8U])) 
                                                 >> 0x00000018U))))) 
                       << 0x00000018U) | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[8U]);
    __Vtemp_25[9U] = (((IData)((0x00ffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[0x0000000aU])) 
                                    << 0x00000028U) 
                                   | (((QData)((IData)(
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[9U])) 
                                       << 8U) | ((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[8U])) 
                                                 >> 0x00000018U))))) 
                       >> 8U) | ((IData)(((0x00ffffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[0x0000000aU])) 
                                               << 0x00000028U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[9U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[8U])) 
                                                    >> 0x00000018U)))) 
                                          >> 0x00000020U)) 
                                 << 0x00000018U));
    __Vtemp_25[0x0000000aU] = (0x99990000U | ((IData)(
                                                      ((0x00ffffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[0x0000000aU])) 
                                                            << 0x00000028U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[9U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_3[8U])) 
                                                                 >> 0x00000018U)))) 
                                                       >> 0x00000020U)) 
                                              >> 8U));
    __Vtemp_25[0x0000000bU] = 0x99999999U;
    __Vtemp_25[0x0000000cU] = 0x99999999U;
    __Vtemp_25[0x0000000dU] = 0x99999999U;
    __Vtemp_25[0x0000000eU] = 0x99999999U;
    __Vtemp_25[0x0000000fU] = 0x99999999U;
    __Vtemp_25[0x00000010U] = 0x99999999U;
    __Vtemp_25[0x00000011U] = (0x00009999U | (0xffff0000U 
                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_2[0x00000011U]));
    __Vtemp_25[0x00000012U] = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_2[0x00000012U]) 
                               | (0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_2[0x00000012U]));
    __Vtemp_25[0x00000013U] = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_2[0x00000013U]) 
                               | (0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_2[0x00000013U]));
    __Vtemp_25[0x00000014U] = (0x99999990U | (0x0000000fU 
                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_2[0x00000014U]));
    __Vtemp_25[0x00000015U] = 0x99999999U;
    __Vtemp_25[0x00000016U] = 0x99999999U;
    __Vtemp_25[0x00000017U] = 0x99999999U;
    __Vtemp_25[0x00000018U] = 0x99999999U;
    __Vtemp_25[0x00000019U] = 0x99999999U;
    __Vtemp_25[0x0000001aU] = (0x00000099U | ((0x0000ff00U 
                                               & ((Vsim__ConstPool__CONST_h4d851b67_0[0U] 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001bU] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001aU] 
                                                         >> 8U))) 
                                                  << 8U)) 
                                              | (0xffff0000U 
                                                 & ((Vsim__ConstPool__CONST_h4d851b67_0[0U] 
                                                     & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001bU] 
                                                         << 0x00000018U) 
                                                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001aU] 
                                                           >> 8U))) 
                                                    << 8U))));
    __Vtemp_25[0x0000001bU] = ((((Vsim__ConstPool__CONST_h4d851b67_0[0U] 
                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001bU] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001aU] 
                                        >> 8U))) >> 0x00000018U) 
                                | (0x0000ff00U & ((
                                                   Vsim__ConstPool__CONST_h4d851b67_0[1U] 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001cU] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001bU] 
                                                         >> 8U))) 
                                                  << 8U))) 
                               | (0xffff0000U & ((Vsim__ConstPool__CONST_h4d851b67_0[1U] 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001cU] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001bU] 
                                                        >> 8U))) 
                                                 << 8U)));
    __Vtemp_25[0x0000001cU] = ((((Vsim__ConstPool__CONST_h4d851b67_0[1U] 
                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001cU] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001bU] 
                                        >> 8U))) >> 0x00000018U) 
                                | (0x0000ff00U & ((
                                                   Vsim__ConstPool__CONST_h4d851b67_0[2U] 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001dU] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001cU] 
                                                         >> 8U))) 
                                                  << 8U))) 
                               | (0xffff0000U & ((Vsim__ConstPool__CONST_h4d851b67_0[2U] 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001dU] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001cU] 
                                                        >> 8U))) 
                                                 << 8U)));
    __Vtemp_25[0x0000001dU] = ((((Vsim__ConstPool__CONST_h4d851b67_0[2U] 
                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001dU] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001cU] 
                                        >> 8U))) >> 0x00000018U) 
                                | (0x0000ff00U & ((
                                                   Vsim__ConstPool__CONST_h4d851b67_0[3U] 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001eU] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001dU] 
                                                         >> 8U))) 
                                                  << 8U))) 
                               | (0xffff0000U & ((Vsim__ConstPool__CONST_h4d851b67_0[3U] 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001eU] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001dU] 
                                                        >> 8U))) 
                                                 << 8U)));
    __Vtemp_25[0x0000001eU] = ((((Vsim__ConstPool__CONST_h4d851b67_0[3U] 
                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001eU] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001dU] 
                                        >> 8U))) >> 0x00000018U) 
                                | (0x0000ff00U & ((
                                                   Vsim__ConstPool__CONST_h4d851b67_0[4U] 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001fU] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001eU] 
                                                         >> 8U))) 
                                                  << 8U))) 
                               | (0xffff0000U & ((Vsim__ConstPool__CONST_h4d851b67_0[4U] 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001fU] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001eU] 
                                                        >> 8U))) 
                                                 << 8U)));
    __Vtemp_25[0x0000001fU] = ((((Vsim__ConstPool__CONST_h4d851b67_0[4U] 
                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001fU] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001eU] 
                                        >> 8U))) >> 0x00000018U) 
                                | (0x0000ff00U & ((
                                                   Vsim__ConstPool__CONST_h4d851b67_0[5U] 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000020U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001fU] 
                                                         >> 8U))) 
                                                  << 8U))) 
                               | (0xffff0000U & ((Vsim__ConstPool__CONST_h4d851b67_0[5U] 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000020U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001fU] 
                                                        >> 8U))) 
                                                 << 8U)));
    __Vtemp_25[0x00000020U] = ((((Vsim__ConstPool__CONST_h4d851b67_0[5U] 
                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000020U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x0000001fU] 
                                        >> 8U))) >> 0x00000018U) 
                                | (0x0000ff00U & ((
                                                   Vsim__ConstPool__CONST_h4d851b67_0[6U] 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000021U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000020U] 
                                                         >> 8U))) 
                                                  << 8U))) 
                               | (0xffff0000U & ((Vsim__ConstPool__CONST_h4d851b67_0[6U] 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000021U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000020U] 
                                                        >> 8U))) 
                                                 << 8U)));
    __Vtemp_25[0x00000021U] = ((((Vsim__ConstPool__CONST_h4d851b67_0[6U] 
                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000021U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000020U] 
                                        >> 8U))) >> 0x00000018U) 
                                | (0x0000ff00U & ((
                                                   Vsim__ConstPool__CONST_h4d851b67_0[7U] 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000022U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000021U] 
                                                         >> 8U))) 
                                                  << 8U))) 
                               | (0xffff0000U & ((Vsim__ConstPool__CONST_h4d851b67_0[7U] 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000022U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000021U] 
                                                        >> 8U))) 
                                                 << 8U)));
    __Vtemp_25[0x00000022U] = ((((Vsim__ConstPool__CONST_h4d851b67_0[7U] 
                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000022U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000021U] 
                                        >> 8U))) >> 0x00000018U) 
                                | (0x0000ff00U & ((
                                                   Vsim__ConstPool__CONST_h4d851b67_0[8U] 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000022U] 
                                                      >> 8U)) 
                                                  << 8U))) 
                               | (0xffff0000U & ((Vsim__ConstPool__CONST_h4d851b67_0[8U] 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000022U] 
                                                     >> 8U)) 
                                                 << 8U)));
    __Vtemp_25[0x00000023U] = (((0x0000ffffU & (IData)(
                                                       (0x00ffffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_1[0x00000024U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_1[0x00000023U])))))) 
                                | ((Vsim__ConstPool__CONST_h4d851b67_0[8U] 
                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_0[0x00000022U] 
                                       >> 8U)) >> 0x00000018U)) 
                               | (0xffff0000U & (IData)(
                                                        (0x00ffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_1[0x00000024U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_1[0x00000023U])))))));
    __Vtemp_25[0x00000024U] = (0x99000000U | ((0x0000ffffU 
                                               & (IData)(
                                                         ((0x00ffffffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_1[0x00000024U])) 
                                                               << 0x00000020U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_1[0x00000023U])))) 
                                                          >> 0x00000020U))) 
                                              | (0xffff0000U 
                                                 & (IData)(
                                                           ((0x00ffffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_1[0x00000024U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____VdfgRegularize_h14ee62bc_0_1[0x00000023U])))) 
                                                            >> 0x00000020U)))));
    __Vtemp_25[0x00000025U] = 0x99999999U;
    __Vtemp_25[0x00000026U] = 0x99999999U;
    __Vtemp_25[0x00000027U] = 0x99999999U;
    __Vtemp_25[0x00000028U] = 0x99999999U;
    __Vtemp_25[0x00000029U] = 0x99999999U;
    __Vtemp_25[0x0000002aU] = 0x99999999U;
    __Vtemp_25[0x0000002bU] = (0x00999999U | (((0x0000ff00U 
                                                & (__Vtemp_7[0U] 
                                                   << 8U)) 
                                               | (0xffff0000U 
                                                  & (__Vtemp_7[0U] 
                                                     << 8U))) 
                                              << 0x00000010U));
    __Vtemp_25[0x0000002cU] = ((((0x0000ff00U & (__Vtemp_7[0U] 
                                                 << 8U)) 
                                 | (0xffff0000U & (
                                                   __Vtemp_7[0U] 
                                                   << 8U))) 
                                >> 0x00000010U) | (
                                                   (((__Vtemp_7[0U] 
                                                      >> 0x00000018U) 
                                                     | (0x0000ff00U 
                                                        & (__Vtemp_7[1U] 
                                                           << 8U))) 
                                                    | (__Vtemp_12[0x0000000aU] 
                                                       << 0x00000010U)) 
                                                   << 0x00000010U));
    __Vtemp_25[0x0000002dU] = (((((__Vtemp_7[0U] >> 0x00000018U) 
                                  | (0x0000ff00U & 
                                     (__Vtemp_7[1U] 
                                      << 8U))) | (__Vtemp_12[0x0000000aU] 
                                                  << 0x00000010U)) 
                                >> 0x00000010U) | (0xffff0000U 
                                                   & __Vtemp_12[0x0000000aU]));
    __Vtemp_25[0x0000002eU] = 0x99999000U;
    __Vtemp_25[0x0000002fU] = 0x99999999U;
    __Vtemp_25[0x00000030U] = 0x99999999U;
    __Vtemp_25[0x00000031U] = 0x99999999U;
    __Vtemp_25[0x00000032U] = 0x99999999U;
    __Vtemp_25[0x00000033U] = 0x99999999U;
    __Vtemp_25[0x00000034U] = 0x00009999U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (3U == (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    __Vtableidx118 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_match;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel 
        = Vsim__ConstPool__TABLE_h9c001f2d_0[__Vtableidx118];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__page_cfg 
        = (0x0fffffffU & ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__hw_page_cfg
                           : ((0x068fU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____VdfgRegularize_h7b88c983_0_0))
                               ? (((0U == (0x0000001fU 
                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____VdfgRegularize_h7b88c983_0_0)))
                                    ? 0U : (__Vtemp_25[
                                            (((IData)(0x0000001bU) 
                                              + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____VdfgRegularize_h7b88c983_0_0)) 
                                             >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____VdfgRegularize_h7b88c983_0_0))))) 
                                  | (__Vtemp_25[((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____VdfgRegularize_h7b88c983_0_0) 
                                                 >> 5U)] 
                                     >> (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____VdfgRegularize_h7b88c983_0_0))))
                               : 0U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_en 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
             >> 5U) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__addr_invalid))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__833__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__page_cfg 
                                      >> 0x00000018U));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__833__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__833__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__833__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg = 0ULL;
    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
               [0U]);
    }
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
               [1U]);
    }
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
               [2U]);
    }
    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
               [3U]);
    }
    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
               [4U]);
    }
    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
               [5U]);
    }
    if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
               [6U]);
    }
    if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
               [7U]);
    }
    if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_sw_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_data_attrs
               [8U]);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_he_en 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_en) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__839__val 
                    = (0x0000000fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__page_cfg);
                vlSelfRef.__Vfunc_mubi4_test_true_strict__839__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__839__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__839__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_rd_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_en) 
            & (0U == (6U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__834__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__page_cfg 
                                      >> 0x00000014U));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__834__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__834__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__834__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_prog_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_en) 
            & (2U == (6U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__835__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__page_cfg 
                                      >> 0x00000010U));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__835__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__835__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__835__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_ecc_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_en) 
            & ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                             >> 1U))) | (1U == (3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                   >> 1U))))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__838__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__page_cfg 
                                      >> 4U));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__838__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__838__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__838__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_scramble_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_en) 
            & ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                             >> 1U))) | (1U == (3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                   >> 1U))))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__837__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__page_cfg 
                                      >> 8U));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__837__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__837__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__837__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_pg_erase_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_en) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_flash_mp__pg_erase_i)) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__836__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__page_cfg 
                                      >> 0x0000000cU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__836__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__836__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__836__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_region_cfg 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__u_hw_sel__DOT__region_match)
                ? 0x0000333333300200ULL : 0ULL) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__sw_sel_cfg);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_en 
        = (((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                >> 5U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__addr_invalid))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__822__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_region_cfg 
                                              >> 0x0000002bU)));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__822__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__822__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__822__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_he_en 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_en) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__828__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_region_cfg 
                                              >> 0x00000013U)));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__828__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__828__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__828__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_rd_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_en) 
            & (0U == (6U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__823__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_region_cfg 
                                              >> 0x00000027U)));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__823__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__823__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__823__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_prog_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_en) 
            & (2U == (6U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__824__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_region_cfg 
                                              >> 0x00000023U)));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__824__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__824__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__824__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_ecc_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_en) 
            & ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                             >> 1U))) | (1U == (3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                   >> 1U))))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__827__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_region_cfg 
                                              >> 0x00000017U)));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__827__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__827__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__827__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_scramble_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_en) 
            & ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                             >> 1U))) | (1U == (3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                   >> 1U))))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__826__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_region_cfg 
                                              >> 0x0000001bU)));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__826__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__826__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__826__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_pg_erase_en 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_en) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_flash_mp__pg_erase_i)) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__825__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_region_cfg 
                                              >> 0x0000001fU)));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__825__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__825__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__825__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__rd_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_rd_en) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_rd_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__prog_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_prog_en) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_prog_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__ecc_en_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_ecc_en) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_ecc_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__scramble_en_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_scramble_en) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_scramble_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__pg_erase_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_req) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_pg_erase_en) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_pg_erase_en)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_286 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__bk_erase_o) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__pg_erase_o));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1681 = (
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__bk_erase_o) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__pg_erase_o) 
                                                      << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_valid 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__pg_erase_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__bk_erase_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_valid) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_erase_suspend__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__req_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__rd_o) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__prog_o) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_valid)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_erase_suspend__DOT__de 
        = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_valid)) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_erase_suspend__q)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__erase_suspend_o) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_erase_done)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__ctrl_req 
        = ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
               >> 0x00000011U)) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__ctrl_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__req_o) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
              >> 0x00000011U));
}

void Vsim___024root___nba_comb__TOP__472(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__472\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__ctrl_ack 
        = (1U & ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                               >> 1U))) ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_done)
                  : ((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                   >> 1U))) ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_done)
                      : ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 1U))) ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_done)
                          : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__fifo_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__arb_fsm_err = 0U;
    if ((0x00d6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[1U] 
                      >> 0x00000011U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__state_d = 0x03eeU;
        }
    } else if ((0x03eeU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel = 2U;
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__hw_req)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__state_d = 0x0202U;
        }
    } else if ((0x0202U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel = 1U;
        if (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__799__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__799__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__799__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__799__Vfuncout))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__state_d = 0x0115U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__hw_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__fifo_clr = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__state_d = 0x03eeU;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_control_start__q) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__state_d = 0x0329U;
        }
    } else if ((0x0329U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel = 1U;
        if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_done) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_done)) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_done))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__state_d = 0x0202U;
        }
    } else if ((0x0115U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__state_d = 0x0115U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__arb_fsm_err = 1U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0115U 
                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x0329U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x0202U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x03eeU 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x00d6U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0115U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x0329U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x0202U 
                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x03eeU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x00d6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_ctrl_arb.sv:132: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_ctrl_arb: unique case, but multiple matches found for '10'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),10,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_ctrl_arb.sv", 132, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__hw_done 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__ctrl_ack));
    if ((1U & (~ VL_ONEHOT_I((((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
                               << 1U) | (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))))))) {
        if ((0U != (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
                     << 1U) | (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_ctrl_arb.sv:206: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_ctrl_arb: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_ctrl_arb.sv", 206, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__sw_ctrl_done = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__sw_ctrl_err = 0U;
    if ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))) {
        if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__sw_ctrl_done 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__ctrl_ack;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__sw_ctrl_err 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__ctrl_err;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__wvalid_i 
        = ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__incr_en_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_ctrl_regwen__DOT__d 
        = (1U & ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
                 | (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_fifo__clr_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fifo_rst__q) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__fifo_clr) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__sw_ctrl_done)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_addr__DOT__de 
        = (IData)((0U != (0x1cU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__sw_ctrl_err))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                ? ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_corr_err__q) 
                        << 5U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_op_done__q) 
                                  << 4U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_rd_lvl__q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_rd_full__q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_prog_lvl__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_prog_empty__q)))))
                : ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                    ? ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_enable_corr_err__q) 
                            << 5U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_enable_op_done__q) 
                                      << 4U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_enable_rd_lvl__q) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_enable_rd_full__q) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_enable_prog_lvl__q) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_enable_prog_empty__q)))))
                    : ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                        ? (0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next)
                        : ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                            ? (0xffffffe0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next)
                            : ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                ? ((0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_dis__q))
                                : ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_exec__q
                                    : ((0xfffffffeU 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                       | ((0x00000040U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_init__q)
                                           : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_ctrl_regwen__DOT__d)))))))));
    } else if ((IData)((0U != (0x0000ff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])))) {
        if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_control_start__q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffffe0fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_control_partition_sel__q) 
                       << 8U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_control_erase_sel__q) 
                                  << 7U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_control_prog_sel__q) 
                                             << 6U) 
                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_control_op__q) 
                                               << 4U)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffff9ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_control_info_sel__q) 
                      << 9U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xf000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_control_num__q) 
                      << 0x00000010U));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                    ? ((0xfff00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_addr__q)
                    : ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                        ? ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_prog_type_en_repair__q) 
                               << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_prog_type_en_normal__q)))
                        : ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_erase_suspend__q)
                               : ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                   ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_region_cfg_regwen_0__DOT__q)
                                   : ((0x00002000U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_region_cfg_regwen_1__DOT__q)
                                       : ((0x00004000U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_region_cfg_regwen_2__DOT__q)
                                           : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_region_cfg_regwen_3__DOT__q))))))));
        }
    } else if ((IData)((0U != (0x00ff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_region_cfg_regwen_4__DOT__q))
                : ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                    ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_region_cfg_regwen_5__DOT__q))
                    : ((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                        ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_region_cfg_regwen_6__DOT__q))
                        : ((0x00080000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                            ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_region_cfg_regwen_7__DOT__q))
                            : ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | ((0x00100000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                   ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_0_he_en_0__q) 
                                        << 0x00000018U) 
                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_0_ecc_en_0__q) 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_0_scramble_en_0__q) 
                                             << 0x00000010U))) 
                                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_0_erase_en_0__q) 
                                           << 0x0000000cU) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_0_prog_en_0__q) 
                                             << 8U)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_0_rd_en_0__q) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_0_en_0__q))))
                                   : ((0x00200000U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                       ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_1_he_en_1__q) 
                                            << 0x00000018U) 
                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_1_ecc_en_1__q) 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_1_scramble_en_1__q) 
                                                 << 0x00000010U))) 
                                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_1_erase_en_1__q) 
                                               << 0x0000000cU) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_1_prog_en_1__q) 
                                                 << 8U)) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_1_rd_en_1__q) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_1_en_1__q))))
                                       : ((0x00400000U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                           ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_2_he_en_2__q) 
                                                << 0x00000018U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_2_ecc_en_2__q) 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_2_scramble_en_2__q) 
                                                     << 0x00000010U))) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_2_erase_en_2__q) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_2_prog_en_2__q) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_2_rd_en_2__q) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_2_en_2__q))))
                                           : ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_3_he_en_3__q) 
                                                << 0x00000018U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_3_ecc_en_3__q) 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_3_scramble_en_3__q) 
                                                     << 0x00000010U))) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_3_erase_en_3__q) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_3_prog_en_3__q) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_3_rd_en_3__q) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_3_en_3__q))))))))))));
    } else if ((IData)((0U != (0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0x01000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_4_he_en_4__q) 
                        << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_4_ecc_en_4__q) 
                                            << 0x00000014U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_4_scramble_en_4__q) 
                                              << 0x00000010U))) 
                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_4_erase_en_4__q) 
                           << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_4_prog_en_4__q) 
                                              << 8U)) 
                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_4_rd_en_4__q) 
                             << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_4_en_4__q)))))
                : ((0x02000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                    ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_5_he_en_5__q) 
                            << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_5_ecc_en_5__q) 
                                                << 0x00000014U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_5_scramble_en_5__q) 
                                                  << 0x00000010U))) 
                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_5_erase_en_5__q) 
                               << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_5_prog_en_5__q) 
                                                  << 8U)) 
                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_5_rd_en_5__q) 
                                 << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_5_en_5__q)))))
                    : ((0x04000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                        ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_6_he_en_6__q) 
                                << 0x00000018U) | (
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_6_ecc_en_6__q) 
                                                    << 0x00000014U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_6_scramble_en_6__q) 
                                                      << 0x00000010U))) 
                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_6_erase_en_6__q) 
                                   << 0x0000000cU) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_6_prog_en_6__q) 
                                     << 8U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_6_rd_en_6__q) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_6_en_6__q)))))
                        : ((0x08000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                            ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_7_he_en_7__q) 
                                    << 0x00000018U) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_7_ecc_en_7__q) 
                                       << 0x00000014U) 
                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_7_scramble_en_7__q) 
                                         << 0x00000010U))) 
                                  | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_7_erase_en_7__q) 
                                       << 0x0000000cU) 
                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_7_prog_en_7__q) 
                                         << 8U)) | 
                                     (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_7_rd_en_7__q) 
                                       << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_cfg_7_en_7__q)))))
                            : ((0xfff80000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | ((0x10000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                   ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_0_size_0__q) 
                                       << 9U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_0_base_0__q))
                                   : ((0x20000000U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                       ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_1_size_1__q) 
                                           << 9U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_1_base_1__q))
                                       : ((0x40000000U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[0U])
                                           ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_2_size_2__q) 
                                               << 9U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_2_base_2__q))
                                           : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_3_size_3__q) 
                                               << 9U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_3_base_3__q))))))))));
    } else if ((IData)((0U != (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                ? ((0xfff80000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_4_size_4__q) 
                       << 9U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_4_base_4__q)))
                : ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                    ? ((0xfff80000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_5_size_5__q) 
                           << 9U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_5_base_5__q)))
                    : ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                        ? ((0xfff80000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_6_size_6__q) 
                               << 9U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_6_base_6__q)))
                        : ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                            ? ((0xfff80000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_7_size_7__q) 
                                   << 9U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_mp_region_7_base_7__q)))
                            : ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                ? ((0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_default_region_he_en__q) 
                                        << 0x00000014U) 
                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_default_region_ecc_en__q) 
                                          << 0x00000010U)) 
                                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_default_region_scramble_en__q) 
                                           << 0x0000000cU) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_default_region_erase_en__q) 
                                             << 8U)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_default_region_prog_en__q) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_default_region_rd_en__q)))))
                                : ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | ((0x00000020U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_0__DOT__q)
                                       : ((0x00000040U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_1__DOT__q)
                                           : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_2__DOT__q)))))))));
    } else if ((IData)((0U != (0x0000ff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_3__DOT__q))
                : ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                    ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_4__DOT__q))
                    : ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                        ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_5__DOT__q))
                        : ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                            ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_6__DOT__q))
                            : ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_7__DOT__q))
                                : ((0x00002000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                    ? ((0xfffffffeU 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_8__DOT__q))
                                    : ((0x00004000U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                        ? ((0xfffffffeU 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info0_regwen_9__DOT__q))
                                        : ((0xf0000000U 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_0_he_en_0__q) 
                                                << 0x00000018U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_0_ecc_en_0__q) 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_0_scramble_en_0__q) 
                                                     << 0x00000010U))) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_0_erase_en_0__q) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_0_prog_en_0__q) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_0_rd_en_0__q) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_0_en_0__q))))))))))));
    } else if ((IData)((0U != (0x00ff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
               | ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                   ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_1_he_en_1__q) 
                        << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_1_ecc_en_1__q) 
                                            << 0x00000014U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_1_scramble_en_1__q) 
                                              << 0x00000010U))) 
                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_1_erase_en_1__q) 
                           << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_1_prog_en_1__q) 
                                              << 8U)) 
                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_1_rd_en_1__q) 
                             << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_1_en_1__q))))
                   : ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                       ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_2_he_en_2__q) 
                            << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_2_ecc_en_2__q) 
                                                << 0x00000014U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_2_scramble_en_2__q) 
                                                  << 0x00000010U))) 
                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_2_erase_en_2__q) 
                               << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_2_prog_en_2__q) 
                                                  << 8U)) 
                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_2_rd_en_2__q) 
                                 << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_2_en_2__q))))
                       : ((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                           ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_3_he_en_3__q) 
                                << 0x00000018U) | (
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_3_ecc_en_3__q) 
                                                    << 0x00000014U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_3_scramble_en_3__q) 
                                                      << 0x00000010U))) 
                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_3_erase_en_3__q) 
                                   << 0x0000000cU) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_3_prog_en_3__q) 
                                     << 8U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_3_rd_en_3__q) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_3_en_3__q))))
                           : ((0x00080000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                               ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_4_he_en_4__q) 
                                    << 0x00000018U) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_4_ecc_en_4__q) 
                                       << 0x00000014U) 
                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_4_scramble_en_4__q) 
                                         << 0x00000010U))) 
                                  | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_4_erase_en_4__q) 
                                       << 0x0000000cU) 
                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_4_prog_en_4__q) 
                                         << 8U)) | 
                                     (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_4_rd_en_4__q) 
                                       << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_4_en_4__q))))
                               : ((0x00100000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                   ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_5_he_en_5__q) 
                                        << 0x00000018U) 
                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_5_ecc_en_5__q) 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_5_scramble_en_5__q) 
                                             << 0x00000010U))) 
                                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_5_erase_en_5__q) 
                                           << 0x0000000cU) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_5_prog_en_5__q) 
                                             << 8U)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_5_rd_en_5__q) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_5_en_5__q))))
                                   : ((0x00200000U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                       ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_6_he_en_6__q) 
                                            << 0x00000018U) 
                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_6_ecc_en_6__q) 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_6_scramble_en_6__q) 
                                                 << 0x00000010U))) 
                                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_6_erase_en_6__q) 
                                               << 0x0000000cU) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_6_prog_en_6__q) 
                                                 << 8U)) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_6_rd_en_6__q) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_6_en_6__q))))
                                       : ((0x00400000U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                           ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_7_he_en_7__q) 
                                                << 0x00000018U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_7_ecc_en_7__q) 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_7_scramble_en_7__q) 
                                                     << 0x00000010U))) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_7_erase_en_7__q) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_7_prog_en_7__q) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_7_rd_en_7__q) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_7_en_7__q))))
                                           : ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_8_he_en_8__q) 
                                                << 0x00000018U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_8_ecc_en_8__q) 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_8_scramble_en_8__q) 
                                                     << 0x00000010U))) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_8_erase_en_8__q) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_8_prog_en_8__q) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_8_rd_en_8__q) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_8_en_8__q))))))))))));
    } else if ((IData)((0U != (0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0x01000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_9_he_en_9__q) 
                        << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_9_ecc_en_9__q) 
                                            << 0x00000014U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_9_scramble_en_9__q) 
                                              << 0x00000010U))) 
                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_9_erase_en_9__q) 
                           << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_9_prog_en_9__q) 
                                              << 8U)) 
                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_9_rd_en_9__q) 
                             << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info0_page_cfg_9_en_9__q)))))
                : ((0x02000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                    ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info1_regwen__DOT__q))
                    : ((0x04000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                        ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info1_page_cfg_he_en_0__q) 
                                << 0x00000018U) | (
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info1_page_cfg_ecc_en_0__q) 
                                                    << 0x00000014U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info1_page_cfg_scramble_en_0__q) 
                                                      << 0x00000010U))) 
                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info1_page_cfg_erase_en_0__q) 
                                   << 0x0000000cU) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info1_page_cfg_prog_en_0__q) 
                                     << 8U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info1_page_cfg_rd_en_0__q) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info1_page_cfg_en_0__q)))))
                        : ((0x08000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                            ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info2_regwen_0__DOT__q))
                            : ((0x10000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank0_info2_regwen_1__DOT__q))
                                : ((0x20000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                    ? ((0xf0000000U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                       | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_0_he_en_0__q) 
                                            << 0x00000018U) 
                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_0_ecc_en_0__q) 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_0_scramble_en_0__q) 
                                                 << 0x00000010U))) 
                                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_0_erase_en_0__q) 
                                               << 0x0000000cU) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_0_prog_en_0__q) 
                                                 << 8U)) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_0_rd_en_0__q) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_0_en_0__q)))))
                                    : ((0x40000000U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[1U])
                                        ? ((0xf0000000U 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_1_he_en_1__q) 
                                                << 0x00000018U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_1_ecc_en_1__q) 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_1_scramble_en_1__q) 
                                                     << 0x00000010U))) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_1_erase_en_1__q) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_1_prog_en_1__q) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_1_rd_en_1__q) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank0_info2_page_cfg_1_en_1__q)))))
                                        : ((0xfffffffeU 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_0__DOT__q)))))))));
    } else if ((IData)((0U != (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
               | ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                   ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_1__DOT__q)
                   : ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_2__DOT__q)
                       : ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_3__DOT__q)
                           : ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_4__DOT__q)
                               : ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                   ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_5__DOT__q)
                                   : ((0x00000020U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_6__DOT__q)
                                       : ((0x00000040U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_7__DOT__q)
                                           : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_8__DOT__q)))))))));
    } else if ((IData)((0U != (0x0000ff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info0_regwen_9__DOT__q))
                : ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                       ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_0_he_en_0__q) 
                            << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_0_ecc_en_0__q) 
                                                << 0x00000014U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_0_scramble_en_0__q) 
                                                  << 0x00000010U))) 
                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_0_erase_en_0__q) 
                               << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_0_prog_en_0__q) 
                                                  << 8U)) 
                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_0_rd_en_0__q) 
                                 << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_0_en_0__q))))
                       : ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                           ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_1_he_en_1__q) 
                                << 0x00000018U) | (
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_1_ecc_en_1__q) 
                                                    << 0x00000014U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_1_scramble_en_1__q) 
                                                      << 0x00000010U))) 
                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_1_erase_en_1__q) 
                                   << 0x0000000cU) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_1_prog_en_1__q) 
                                     << 8U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_1_rd_en_1__q) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_1_en_1__q))))
                           : ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                               ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_2_he_en_2__q) 
                                    << 0x00000018U) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_2_ecc_en_2__q) 
                                       << 0x00000014U) 
                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_2_scramble_en_2__q) 
                                         << 0x00000010U))) 
                                  | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_2_erase_en_2__q) 
                                       << 0x0000000cU) 
                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_2_prog_en_2__q) 
                                         << 8U)) | 
                                     (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_2_rd_en_2__q) 
                                       << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_2_en_2__q))))
                               : ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                   ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_3_he_en_3__q) 
                                        << 0x00000018U) 
                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_3_ecc_en_3__q) 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_3_scramble_en_3__q) 
                                             << 0x00000010U))) 
                                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_3_erase_en_3__q) 
                                           << 0x0000000cU) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_3_prog_en_3__q) 
                                             << 8U)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_3_rd_en_3__q) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_3_en_3__q))))
                                   : ((0x00002000U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                       ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_4_he_en_4__q) 
                                            << 0x00000018U) 
                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_4_ecc_en_4__q) 
                                               << 0x00000014U) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_4_scramble_en_4__q) 
                                                 << 0x00000010U))) 
                                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_4_erase_en_4__q) 
                                               << 0x0000000cU) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_4_prog_en_4__q) 
                                                 << 8U)) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_4_rd_en_4__q) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_4_en_4__q))))
                                       : ((0x00004000U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                           ? ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_5_he_en_5__q) 
                                                << 0x00000018U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_5_ecc_en_5__q) 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_5_scramble_en_5__q) 
                                                     << 0x00000010U))) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_5_erase_en_5__q) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_5_prog_en_5__q) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_5_rd_en_5__q) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_5_en_5__q))))
                                           : ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_6_he_en_6__q) 
                                                << 0x00000018U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_6_ecc_en_6__q) 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_6_scramble_en_6__q) 
                                                     << 0x00000010U))) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_6_erase_en_6__q) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_6_prog_en_6__q) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_6_rd_en_6__q) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_6_en_6__q))))))))))));
    } else if ((IData)((0U != (0x00ff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0x00010000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_7_he_en_7__q) 
                        << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_7_ecc_en_7__q) 
                                            << 0x00000014U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_7_scramble_en_7__q) 
                                              << 0x00000010U))) 
                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_7_erase_en_7__q) 
                           << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_7_prog_en_7__q) 
                                              << 8U)) 
                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_7_rd_en_7__q) 
                             << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_7_en_7__q)))))
                : ((0x00020000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                    ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_8_he_en_8__q) 
                            << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_8_ecc_en_8__q) 
                                                << 0x00000014U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_8_scramble_en_8__q) 
                                                  << 0x00000010U))) 
                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_8_erase_en_8__q) 
                               << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_8_prog_en_8__q) 
                                                  << 8U)) 
                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_8_rd_en_8__q) 
                                 << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_8_en_8__q)))))
                    : ((0x00040000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                        ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_9_he_en_9__q) 
                                << 0x00000018U) | (
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_9_ecc_en_9__q) 
                                                    << 0x00000014U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_9_scramble_en_9__q) 
                                                      << 0x00000010U))) 
                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_9_erase_en_9__q) 
                                   << 0x0000000cU) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_9_prog_en_9__q) 
                                     << 8U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_9_rd_en_9__q) 
                                                 << 4U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info0_page_cfg_9_en_9__q)))))
                        : ((0x00080000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                            ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info1_regwen__DOT__q))
                            : ((0x00100000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info1_page_cfg_he_en_0__q) 
                                        << 0x00000018U) 
                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info1_page_cfg_ecc_en_0__q) 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info1_page_cfg_scramble_en_0__q) 
                                             << 0x00000010U))) 
                                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info1_page_cfg_erase_en_0__q) 
                                           << 0x0000000cU) 
                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info1_page_cfg_prog_en_0__q) 
                                             << 8U)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info1_page_cfg_rd_en_0__q) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info1_page_cfg_en_0__q)))))
                                : ((0x00200000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                    ? ((0xfffffffeU 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info2_regwen_0__DOT__q))
                                    : ((0x00400000U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                        ? ((0xfffffffeU 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank1_info2_regwen_1__DOT__q))
                                        : ((0xf0000000U 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_he_en_0__q) 
                                                << 0x00000018U) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_ecc_en_0__q) 
                                                   << 0x00000014U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_scramble_en_0__q) 
                                                     << 0x00000010U))) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_erase_en_0__q) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_prog_en_0__q) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_rd_en_0__q) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_0_en_0__q))))))))))));
    } else if ((IData)((0U != (0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0x01000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                ? ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_he_en_1__q) 
                        << 0x00000018U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_ecc_en_1__q) 
                                            << 0x00000014U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_scramble_en_1__q) 
                                              << 0x00000010U))) 
                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_erase_en_1__q) 
                           << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_prog_en_1__q) 
                                              << 8U)) 
                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_rd_en_1__q) 
                             << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_bank1_info2_page_cfg_1_en_1__q)))))
                : ((0x02000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                    ? ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_hw_info_cfg_override_ecc_dis__q) 
                           << 4U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_hw_info_cfg_override_scramble_dis__q)))
                    : ((0x04000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                        ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank_cfg_regwen__DOT__q))
                        : ((0x08000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                            ? ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_1.__PVT__committed_q) 
                                   << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__committed_q)))
                            : ((0x10000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                ? ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_op_status_err__DOT__q) 
                                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_op_status_done__DOT__q)))
                                : ((0x20000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                    ? ((0xffffffc0U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                       | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_status_initialized__DOT__q) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_status_init_wip__DOT__q) 
                                              << 4U)) 
                                          | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_status_prog_empty__DOT__q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_status_prog_full__DOT__q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_status_rd_empty__DOT__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_status_rd_full__DOT__q)))))
                                    : ((0x40000000U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[2U])
                                        ? ((0xfffff800U 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_state_regs__DOT__state_raw))
                                        : ((0xffffff00U 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_macro_err__DOT__q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_update_err__DOT__q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_prog_type_err__DOT__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_prog_win_err__DOT__q))) 
                                               << 4U) 
                                              | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_prog_err__DOT__q) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_rd_err__DOT__q) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_mp_err__DOT__q) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_op_err__DOT__q))))))))))));
    } else if ((IData)((0U != (0x00ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])))) {
        if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_std_fault_status_ctrl_cnt_err__q) 
                          << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_std_fault_status_phy_fsm_err__q) 
                                    << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_std_fault_status_storage_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_std_fault_status_arb_fsm_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_std_fault_status_lcmgr_intg_err__q) 
                                   << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_std_fault_status_lcmgr_err__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_std_fault_status_prog_intg_err__q) 
                                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_std_fault_status_reg_intg_err__q)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_std_fault_status_fifo_err__q) 
                      << 8U));
        } else if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_phy_relbl_err__q) 
                          << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_seed_err__q) 
                                    << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_prog_type_err__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_prog_win_err__q))) 
                       << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_prog_err__q) 
                                   << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_rd_err__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_mp_err__q) 
                                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_op_err__q)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffff0ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_host_gnt_err__q) 
                         << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_arb_err__q) 
                                   << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_spurious_ack__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fault_status_phy_storage_err__q))) 
                      << 8U));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])
                    ? ((0xfff00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                       | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_addr__DOT__q)
                    : ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])
                        ? ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_ecc_single_err_cnt_ecc_single_err_cnt_1__q) 
                               << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_ecc_single_err_cnt_ecc_single_err_cnt_0__q)))
                        : ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])
                            ? ((0xfff00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_ecc_single_err_addr_0__DOT__q)
                            : ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])
                                ? ((0xfff00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_ecc_single_err_addr_1__DOT__q)
                                : ((0x00000040U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])
                                    ? ((0xfffffffcU 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_phy_alert_cfg_alert_trig__q) 
                                           << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_phy_alert_cfg_alert_ack__q)))
                                    : ((0xfffffff8U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_phy_status_prog_repair_avail__DOT__q) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_phy_status_prog_normal_avail__DOT__q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_phy_status_init_wip__DOT__q)))))))));
        }
    } else if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_scratch__q;
    } else if ((0x00000200U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0xffffffe0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fifo_lvl_prog__q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0xffffe0ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fifo_lvl_rd__q) 
                  << 8U));
    } else if ((0x00000400U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_fifo_rst__q));
    } else if ((0x00000800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__addr_hit[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0xffffffe0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_fifo__DOT__depth_o));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((0xffffe0ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_curr_fifo_lvl_rd__DOT__d) 
                  << 8U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.__VdfgRegularize_he50b618e_0_1055[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_1054);
    vlSelfRef.__VdfgRegularize_he50b618e_0_1055[1U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_ecc_single_err_cnt_ecc_single_err_cnt_0__DOT__d) 
            << 0x0000001bU) | (IData)((vlSelfRef.__VdfgRegularize_he50b618e_0_1054 
                                       >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1055[2U] 
        = ((0xffff8000U & vlSelfRef.__VdfgRegularize_he50b618e_0_1055[2U]) 
           | ((0xfffffff0U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_addr__DOT__de) 
                               << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_ecc_single_err_cnt_ecc_single_err_cnt_1__DOT__d) 
                                                  << 4U))) 
              | ((8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[1U] 
                        >> 0x0000000cU)) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_ecc_single_err_cnt_ecc_single_err_cnt_0__DOT__d) 
                                            >> 5U))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1055[2U] 
        = ((0x00007fffU & vlSelfRef.__VdfgRegularize_he50b618e_0_1055[2U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr 
              << 0x0000000fU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1055[3U] 
        = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr 
                 >> 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x0fU == (0x0000000fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__rdata_tlword 
        = ((0U != (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_sramreqfifo__DOT__rdata_o) 
                                  >> 1U))) ? ((0x26U 
                                               >= (0x0000003fU 
                                                   & ((IData)(0x00000027U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_sramreqfifo__DOT__rdata_o)))))
                                               ? (0x0000007fffffffffULL 
                                                  & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__empty)
                                                       ? 0ULL
                                                       : 
                                                      (0x0000007fffffffffULL 
                                                       & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__wvalid_i))
                                                           ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_data_intg_chk__DOT__u_data_chk__DOT__data_i
                                                           : 
                                                          ((0x026fU 
                                                            >= 
                                                            (0x000003ffU 
                                                             & ((IData)(0x00000027U) 
                                                                * 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                             (((IData)(0x00000026U) 
                                                                               + 
                                                                               (0x000003ffU 
                                                                                & ((IData)(0x00000027U) 
                                                                                * 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((0U 
                                                               == 
                                                               (0x0000001fU 
                                                                & ((IData)(0x00000027U) 
                                                                   * 
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                               ? 0x00000020U
                                                               : 
                                                              ((IData)(0x00000040U) 
                                                               - 
                                                               (0x0000001fU 
                                                                & ((IData)(0x00000027U) 
                                                                   * 
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                            | (((0U 
                                                                 == 
                                                                 (0x0000001fU 
                                                                  & ((IData)(0x00000027U) 
                                                                     * 
                                                                     (0x0000000fU 
                                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                                 ? 0ULL
                                                                 : 
                                                                ((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                                (((IData)(0x0000001fU) 
                                                                                + 
                                                                                (0x000003ffU 
                                                                                & ((IData)(0x00000027U) 
                                                                                * 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))) 
                                                                                >> 5U)])) 
                                                                 << 
                                                                 ((IData)(0x00000020U) 
                                                                  - 
                                                                  (0x0000001fU 
                                                                   & ((IData)(0x00000027U) 
                                                                      * 
                                                                      (0x0000000fU 
                                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                                (0x0000001fU 
                                                                                & (((IData)(0x00000027U) 
                                                                                * 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                                                                >> 5U))])) 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & ((IData)(0x00000027U) 
                                                                      * 
                                                                      (0x0000000fU 
                                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))))
                                                            : 0ULL)))) 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ((IData)(0x00000027U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_sramreqfifo__DOT__rdata_o))))))
                                               : 0ULL)
            : 0x0000002a00000000ULL);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_rspfifo__DOT__wdata_i 
        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__rdata_tlword)) 
            << 8U) | (QData)((IData)(((0x000000feU 
                                       & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__rdata_tlword 
                                                   >> 0x00000020U)) 
                                          << 1U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_no_op_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__adapter_rvalid)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_rspfifo__DOT__rvalid_o)
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q)
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__storage
                : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_rspfifo__DOT__wdata_i)
            : 0ULL);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x0fU == (0x0000000fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_sw_rd_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__d_error 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           & ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_reqfifo__DOT__rdata_o 
                            >> 0x0000000fU))) ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_rspfifo__DOT__rdata_o) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_reqfifo__DOT__rdata_o 
                                                    >> 0x0000000eU))
               : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_rd_fifo__DOT__u_reqfifo__DOT__rdata_o 
                  >> 0x0000000eU)));
}
