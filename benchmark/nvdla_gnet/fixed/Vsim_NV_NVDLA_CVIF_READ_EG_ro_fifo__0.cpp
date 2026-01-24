// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h3dd8fb2c_0;

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_wr_adr = vlSelfRef.__PVT__ro_wr_adr;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__ro_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__ro_wr_adr)));
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__ro_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_rd_count_p = vlSelfRef.__PVT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__ro_wr_adr = 0U;
        vlSelfRef.__PVT__ro_rd_adr = 0U;
        vlSelfRef.__PVT__ro_wr_count = 0U;
        vlSelfRef.__PVT__ro_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__3(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                     | ((IData)(vlSelfRef.__PVT__ro_rd_prdy_d) 
                        & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int))) 
                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)))));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__4(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
    }
    if ((((IData)(vlSelfRef.__PVT__ro_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__wr_popping))) {
        vlSelfRef.__PVT__ro_rd_pd_o[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
        vlSelfRef.__PVT__ro_rd_pd_o[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
        vlSelfRef.__PVT__ro_rd_pd_o[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
        vlSelfRef.__PVT__ro_rd_pd_o[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
        vlSelfRef.__PVT__ro_rd_pd_o[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
        vlSelfRef.__PVT__ro_rd_pd_o[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
        vlSelfRef.__PVT__ro_rd_pd_o[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
        vlSelfRef.__PVT__ro_rd_pd_o[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
        vlSelfRef.__PVT__ro_rd_pd_o[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
    } else if ((((IData)(vlSelfRef.__PVT__ro_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__wr_popping))) {
        vlSelfRef.__PVT__ro_rd_pd_o[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.__PVT__ro_rd_pd_o[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.__PVT__ro_rd_pd_o[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.__PVT__ro_rd_pd_o[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.__PVT__ro_rd_pd_o[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.__PVT__ro_rd_pd_o[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.__PVT__ro_rd_pd_o[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.__PVT__ro_rd_pd_o[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.__PVT__ro_rd_pd_o[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__6(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_wr_adr = vlSelfRef.__Vdly__ro_wr_adr;
    vlSelfRef.__PVT__ro_rd_pvld_int_o = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                         && (IData)(vlSelfRef.__PVT__rd_req_next_o));
    vlSelfRef.__PVT__ro_wr_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                        & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1.__PVT__ro_wr_busy_int)) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__4(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff0[8U] = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff3[8U] = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff1[8U] = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
        vlSelfRef.__PVT__ram__DOT__ram_ff2[8U] = 0U;
    }
    if ((((IData)(vlSelfRef.__PVT__ro_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__wr_popping))) {
        vlSelfRef.__PVT__ro_rd_pd_o[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
        vlSelfRef.__PVT__ro_rd_pd_o[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
        vlSelfRef.__PVT__ro_rd_pd_o[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
        vlSelfRef.__PVT__ro_rd_pd_o[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
        vlSelfRef.__PVT__ro_rd_pd_o[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
        vlSelfRef.__PVT__ro_rd_pd_o[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
        vlSelfRef.__PVT__ro_rd_pd_o[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
        vlSelfRef.__PVT__ro_rd_pd_o[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
        vlSelfRef.__PVT__ro_rd_pd_o[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
    } else if ((((IData)(vlSelfRef.__PVT__ro_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__wr_popping))) {
        vlSelfRef.__PVT__ro_rd_pd_o[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.__PVT__ro_rd_pd_o[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.__PVT__ro_rd_pd_o[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.__PVT__ro_rd_pd_o[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.__PVT__ro_rd_pd_o[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.__PVT__ro_rd_pd_o[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.__PVT__ro_rd_pd_o[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.__PVT__ro_rd_pd_o[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.__PVT__ro_rd_pd_o[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                        & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0.__PVT__ro_wr_busy_int)) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 1U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 1U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 2U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 2U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 3U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 3U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 4U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 4U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 5U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 5U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 6U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 6U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 7U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 7U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 8U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 8U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd0_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd0_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd0_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd0_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_pd0[8U];
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 9U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rd_req_next) & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                                                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd1_prdy)))) {
        if (vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_o[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_o[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_o[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_o[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_o[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_o[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_o[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_o[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_o[8U];
        } else {
            vlSelfRef.ro_rd_pd[0U] = vlSelfRef.__PVT__ro_rd_pd_p[0U];
            vlSelfRef.ro_rd_pd[1U] = vlSelfRef.__PVT__ro_rd_pd_p[1U];
            vlSelfRef.ro_rd_pd[2U] = vlSelfRef.__PVT__ro_rd_pd_p[2U];
            vlSelfRef.ro_rd_pd[3U] = vlSelfRef.__PVT__ro_rd_pd_p[3U];
            vlSelfRef.ro_rd_pd[4U] = vlSelfRef.__PVT__ro_rd_pd_p[4U];
            vlSelfRef.ro_rd_pd[5U] = vlSelfRef.__PVT__ro_rd_pd_p[5U];
            vlSelfRef.ro_rd_pd[6U] = vlSelfRef.__PVT__ro_rd_pd_p[6U];
            vlSelfRef.ro_rd_pd[7U] = vlSelfRef.__PVT__ro_rd_pd_p[7U];
            vlSelfRef.ro_rd_pd[8U] = vlSelfRef.__PVT__ro_rd_pd_p[8U];
        }
    } else if (((IData)(vlSelfRef.__PVT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd1_prdy)))) {
        vlSelfRef.ro_rd_pd[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
        vlSelfRef.ro_rd_pd[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
        vlSelfRef.ro_rd_pd[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
        vlSelfRef.ro_rd_pd[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
        vlSelfRef.ro_rd_pd[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
        vlSelfRef.ro_rd_pd[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
        vlSelfRef.ro_rd_pd[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
        vlSelfRef.ro_rd_pd[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
        vlSelfRef.ro_rd_pd[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__1(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = vlSelfRef.__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd1_prdy)))) {
            vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__ro_rd_pvld_int_d = vlSelfRef.__PVT__ro_rd_pvld_int;
    } else {
        vlSelfRef.__Vdly__ro_rd_pvld_int = 0U;
        vlSelfRef.__PVT__ro_rd_pvld_int_d = 0U;
    }
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__5(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ro_rd_pvld_int = vlSelfRef.__Vdly__ro_rd_pvld_int;
    vlSelfRef.__PVT__ro_rd_prdy_d = ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                     || (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_rd1_prdy));
}

void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__2(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = Vsim__ConstPool__CONST_h3dd8fb2c_0[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff3[8U];
        } else {
            vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[0U];
            vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[1U];
            vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[2U];
            vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[3U];
            vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[4U];
            vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[5U];
            vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[6U];
            vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[7U];
            vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff2[8U];
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__ram__DOT__ra))) {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff1[8U];
    } else {
        vlSelfRef.__PVT__ro_rd_pd_p[0U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__ro_rd_pd_p[1U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__ro_rd_pd_p[2U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__ro_rd_pd_p[3U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__ro_rd_pd_p[4U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__ro_rd_pd_p[5U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__ro_rd_pd_p[6U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__ro_rd_pd_p[7U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[7U];
        vlSelfRef.__PVT__ro_rd_pd_p[8U] = vlSelfRef.__PVT__ram__DOT__ram_ff0[8U];
    }
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 9U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
}
