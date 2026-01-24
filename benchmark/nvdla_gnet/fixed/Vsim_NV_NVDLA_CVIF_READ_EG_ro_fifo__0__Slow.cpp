// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h3dd8fb2c_0;

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                        & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1.__PVT__ro_wr_busy_int)) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                        & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0.__PVT__ro_wr_busy_int)) 
                                           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 1U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 1U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 2U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 2U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 3U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 3U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 4U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 4U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 5U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 5U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 6U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 6U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 7U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 7U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro7_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 8U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 8U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro8_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 9U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__0(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 9U) & (
                                                   (~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ro9_fifo0.__PVT__ro_wr_busy_int)) 
                                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled))));
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
    vlSelfRef.__VdfgRegularize_h62ceda3a_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h62ceda3a_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
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

VL_ATTR_COLD void Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___ctor_var_reset(Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CVIF_READ_EG_ro_fifo___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->ro_wr_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 113956936966481529ull);
    vlSelf->ro_wr_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1511550089545366251ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->ro_wr_pd, __VscopeHash, 11964846147573291178ull);
    vlSelf->ro_rd_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6534146891860353326ull);
    vlSelf->ro_rd_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10109807518041460616ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->ro_rd_pd, __VscopeHash, 140657786782917395ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13372107809610179032ull);
    vlSelf->__PVT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15396406962418085527ull);
    vlSelf->__PVT__ro_wr_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6011878278370908660ull);
    vlSelf->__PVT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10594169566903493383ull);
    vlSelf->__PVT__ro_wr_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15623279218856520134ull);
    vlSelf->__PVT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1092260555415418571ull);
    vlSelf->__PVT__wr_count_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16232479525645034119ull);
    vlSelf->__PVT__wr_count_next_is_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17913943959397019591ull);
    vlSelf->__PVT__ro_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4947779675746378556ull);
    vlSelf->__PVT__ro_rd_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9534989170140012339ull);
    vlSelf->__PVT__ram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2261664746123919997ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->__PVT__ro_rd_pd_p, __VscopeHash, 7379106846714573244ull);
    vlSelf->__PVT__rd_adr_next_popping = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7662985730422787274ull);
    vlSelf->__PVT__ro_rd_prdy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18232656374979808643ull);
    vlSelf->__PVT__ro_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15074309994693941570ull);
    vlSelf->__PVT__ro_rd_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14418389717454047008ull);
    vlSelf->__PVT__ro_rd_pvld_int_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5856777433231199936ull);
    vlSelf->__PVT__ro_rd_count_p = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6774017885722551731ull);
    vlSelf->__PVT__rd_count_p_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15498433554150867821ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->__PVT__ro_rd_pd_o, __VscopeHash, 51855150468788629ull);
    vlSelf->__PVT__rd_req_next_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14086154724425223955ull);
    vlSelf->__PVT__ro_rd_pvld_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7249172466755970103ull);
    vlSelf->__PVT__rd_req_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 23710331760855056ull);
    vlSelf->__PVT__prand_inst2__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7725021603313232302ull);
    vlSelf->__PVT__prand_inst3__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10299478299604090411ull);
    vlSelf->__VdfgRegularize_h62ceda3a_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16560229643753930061ull);
    vlSelf->__VdfgRegularize_h62ceda3a_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 592414544114349908ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1252783748678362569ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6936104093281249428ull);
    vlSelf->__PVT__ram__DOT__ra = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8628701510884171806ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->__PVT__ram__DOT__ram_ff0, __VscopeHash, 13817646663075227817ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->__PVT__ram__DOT__ram_ff1, __VscopeHash, 17286021883830260450ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->__PVT__ram__DOT__ram_ff2, __VscopeHash, 17625787806896053489ull);
    VL_SCOPED_RAND_RESET_W(257, vlSelf->__PVT__ram__DOT__ram_ff3, __VscopeHash, 11257720828612717871ull);
    vlSelf->__Vdly__ro_wr_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17074543009585827167ull);
    vlSelf->__Vdly__ro_rd_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1826168774875608017ull);
}
