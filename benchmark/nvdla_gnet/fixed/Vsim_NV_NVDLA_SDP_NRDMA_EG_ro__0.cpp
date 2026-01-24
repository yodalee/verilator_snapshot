// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
    vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
    vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
    vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_gate__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[0U] 
        = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
    vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[1U] 
        = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
    vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[2U] 
        = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
    vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[3U] 
        = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
    vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[4U] 
        = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
    vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[5U] 
        = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
    vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[6U] 
        = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
    vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[7U] 
        = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
    vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[8U] 
        = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
    if (((IData)(vlSelfRef.__PVT__out_rdy) & (IData)(vlSelfRef.__PVT__out_vld))) {
        if ((2U & (IData)(vlSelfRef.__PVT__rod_sel))) {
            if ((1U & (IData)(vlSelfRef.__PVT__rod_sel))) {
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[0U] 
                    = vlSelfRef.__PVT__rod3_rd_pd[0U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[1U] 
                    = vlSelfRef.__PVT__rod3_rd_pd[1U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[2U] 
                    = vlSelfRef.__PVT__rod3_rd_pd[2U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[3U] 
                    = vlSelfRef.__PVT__rod3_rd_pd[3U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[4U] 
                    = vlSelfRef.__PVT__rod3_rd_pd[4U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[5U] 
                    = vlSelfRef.__PVT__rod3_rd_pd[5U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[6U] 
                    = vlSelfRef.__PVT__rod3_rd_pd[6U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[7U] 
                    = vlSelfRef.__PVT__rod3_rd_pd[7U];
            } else {
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[0U] 
                    = vlSelfRef.__PVT__rod2_rd_pd[0U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[1U] 
                    = vlSelfRef.__PVT__rod2_rd_pd[1U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[2U] 
                    = vlSelfRef.__PVT__rod2_rd_pd[2U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[3U] 
                    = vlSelfRef.__PVT__rod2_rd_pd[3U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[4U] 
                    = vlSelfRef.__PVT__rod2_rd_pd[4U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[5U] 
                    = vlSelfRef.__PVT__rod2_rd_pd[5U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[6U] 
                    = vlSelfRef.__PVT__rod2_rd_pd[6U];
                vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[7U] 
                    = vlSelfRef.__PVT__rod2_rd_pd[7U];
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__rod_sel))) {
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[0U] 
                = vlSelfRef.__PVT__rod1_rd_pd[0U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[1U] 
                = vlSelfRef.__PVT__rod1_rd_pd[1U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[2U] 
                = vlSelfRef.__PVT__rod1_rd_pd[2U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[3U] 
                = vlSelfRef.__PVT__rod1_rd_pd[3U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[4U] 
                = vlSelfRef.__PVT__rod1_rd_pd[4U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[5U] 
                = vlSelfRef.__PVT__rod1_rd_pd[5U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[6U] 
                = vlSelfRef.__PVT__rod1_rd_pd[6U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[7U] 
                = vlSelfRef.__PVT__rod1_rd_pd[7U];
        } else {
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[0U] 
                = vlSelfRef.__PVT__rod0_rd_pd[0U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[1U] 
                = vlSelfRef.__PVT__rod0_rd_pd[1U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[2U] 
                = vlSelfRef.__PVT__rod0_rd_pd[2U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[3U] 
                = vlSelfRef.__PVT__rod0_rd_pd[3U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[4U] 
                = vlSelfRef.__PVT__rod0_rd_pd[4U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[5U] 
                = vlSelfRef.__PVT__rod0_rd_pd[5U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[6U] 
                = vlSelfRef.__PVT__rod0_rd_pd[6U];
            vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[7U] 
                = vlSelfRef.__PVT__rod0_rd_pd[7U];
        }
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[8U] 
            = vlSelfRef.__PVT__is_cube_end;
    } else {
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U];
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[1U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U];
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[2U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U];
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[3U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U];
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[4U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U];
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[5U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U];
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[6U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U];
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[7U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U];
        vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[8U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U];
    }
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__rod3_rd_prdy)))) {
        if (vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_1) {
            vlSelfRef.__PVT__rod3_rd_pd[0U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[0U];
            vlSelfRef.__PVT__rod3_rd_pd[1U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[1U];
            vlSelfRef.__PVT__rod3_rd_pd[2U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[2U];
            vlSelfRef.__PVT__rod3_rd_pd[3U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[3U];
            vlSelfRef.__PVT__rod3_rd_pd[4U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[4U];
            vlSelfRef.__PVT__rod3_rd_pd[5U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[5U];
            vlSelfRef.__PVT__rod3_rd_pd[6U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[6U];
            vlSelfRef.__PVT__rod3_rd_pd[7U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__rod3_rd_pd[0U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U];
            vlSelfRef.__PVT__rod3_rd_pd[1U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U];
            vlSelfRef.__PVT__rod3_rd_pd[2U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U];
            vlSelfRef.__PVT__rod3_rd_pd[3U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U];
            vlSelfRef.__PVT__rod3_rd_pd[4U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U];
            vlSelfRef.__PVT__rod3_rd_pd[5U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U];
            vlSelfRef.__PVT__rod3_rd_pd[6U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U];
            vlSelfRef.__PVT__rod3_rd_pd[7U] = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod3_rd_prdy)))) {
        vlSelfRef.__PVT__rod3_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__rod3_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__rod3_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__rod3_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__rod3_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__rod3_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__rod3_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__rod3_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__rod2_rd_prdy)))) {
        if (vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_1) {
            vlSelfRef.__PVT__rod2_rd_pd[0U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[0U];
            vlSelfRef.__PVT__rod2_rd_pd[1U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[1U];
            vlSelfRef.__PVT__rod2_rd_pd[2U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[2U];
            vlSelfRef.__PVT__rod2_rd_pd[3U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[3U];
            vlSelfRef.__PVT__rod2_rd_pd[4U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[4U];
            vlSelfRef.__PVT__rod2_rd_pd[5U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[5U];
            vlSelfRef.__PVT__rod2_rd_pd[6U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[6U];
            vlSelfRef.__PVT__rod2_rd_pd[7U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__rod2_rd_pd[0U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U];
            vlSelfRef.__PVT__rod2_rd_pd[1U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U];
            vlSelfRef.__PVT__rod2_rd_pd[2U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U];
            vlSelfRef.__PVT__rod2_rd_pd[3U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U];
            vlSelfRef.__PVT__rod2_rd_pd[4U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U];
            vlSelfRef.__PVT__rod2_rd_pd[5U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U];
            vlSelfRef.__PVT__rod2_rd_pd[6U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U];
            vlSelfRef.__PVT__rod2_rd_pd[7U] = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod2_rd_prdy)))) {
        vlSelfRef.__PVT__rod2_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__rod2_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__rod2_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__rod2_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__rod2_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__rod2_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__rod2_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__rod2_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__rod1_rd_prdy)))) {
        if (vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_1) {
            vlSelfRef.__PVT__rod1_rd_pd[0U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[0U];
            vlSelfRef.__PVT__rod1_rd_pd[1U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[1U];
            vlSelfRef.__PVT__rod1_rd_pd[2U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[2U];
            vlSelfRef.__PVT__rod1_rd_pd[3U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[3U];
            vlSelfRef.__PVT__rod1_rd_pd[4U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[4U];
            vlSelfRef.__PVT__rod1_rd_pd[5U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[5U];
            vlSelfRef.__PVT__rod1_rd_pd[6U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[6U];
            vlSelfRef.__PVT__rod1_rd_pd[7U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__rod1_rd_pd[0U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U];
            vlSelfRef.__PVT__rod1_rd_pd[1U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U];
            vlSelfRef.__PVT__rod1_rd_pd[2U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U];
            vlSelfRef.__PVT__rod1_rd_pd[3U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U];
            vlSelfRef.__PVT__rod1_rd_pd[4U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U];
            vlSelfRef.__PVT__rod1_rd_pd[5U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U];
            vlSelfRef.__PVT__rod1_rd_pd[6U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U];
            vlSelfRef.__PVT__rod1_rd_pd[7U] = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod1_rd_prdy)))) {
        vlSelfRef.__PVT__rod1_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__rod1_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__rod1_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__rod1_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__rod1_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__rod1_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__rod1_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__rod1_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__rod0_rd_prdy)))) {
        if (vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_1) {
            vlSelfRef.__PVT__rod0_rd_pd[0U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[0U];
            vlSelfRef.__PVT__rod0_rd_pd[1U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[1U];
            vlSelfRef.__PVT__rod0_rd_pd[2U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[2U];
            vlSelfRef.__PVT__rod0_rd_pd[3U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[3U];
            vlSelfRef.__PVT__rod0_rd_pd[4U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[4U];
            vlSelfRef.__PVT__rod0_rd_pd[5U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[5U];
            vlSelfRef.__PVT__rod0_rd_pd[6U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[6U];
            vlSelfRef.__PVT__rod0_rd_pd[7U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[7U];
        } else {
            vlSelfRef.__PVT__rod0_rd_pd[0U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U];
            vlSelfRef.__PVT__rod0_rd_pd[1U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U];
            vlSelfRef.__PVT__rod0_rd_pd[2U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U];
            vlSelfRef.__PVT__rod0_rd_pd[3U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U];
            vlSelfRef.__PVT__rod0_rd_pd[4U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U];
            vlSelfRef.__PVT__rod0_rd_pd[5U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U];
            vlSelfRef.__PVT__rod0_rd_pd[6U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U];
            vlSelfRef.__PVT__rod0_rd_pd[7U] = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U];
        }
    } else if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod0_rd_prdy)))) {
        vlSelfRef.__PVT__rod0_rd_pd[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__rod0_rd_pd[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__rod0_rd_pd[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__rod0_rd_pd[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__rod0_rd_pd[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__rod0_rd_pd[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__rod0_rd_pd[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__rod0_rd_pd[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__1(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ __Vdly__count_w;
    __Vdly__count_w = 0;
    SData/*12:0*/ __Vdly__count_h;
    __Vdly__count_h = 0;
    SData/*8:0*/ __Vdly__count_c;
    __Vdly__count_c = 0;
    CData/*1:0*/ __Vdly__beat_cnt;
    __Vdly__beat_cnt = 0;
    // Body
    __Vdly__count_c = vlSelfRef.__PVT__count_c;
    vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int 
        = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int;
    vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int 
        = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int;
    vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int 
        = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int;
    vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int 
        = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int;
    __Vdly__count_h = vlSelfRef.__PVT__count_h;
    __Vdly__count_w = vlSelfRef.__PVT__count_w;
    __Vdly__beat_cnt = vlSelfRef.__PVT__beat_cnt;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__out_accept) {
            if (vlSelfRef.__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_c = (0x000001ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__count_c)));
            }
            vlSelfRef.__PVT__count_e = ((1U & (~ (IData)(vlSelfRef.__PVT__is_elem_end))) 
                                        && (1U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__count_e))));
            if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelfRef.__PVT__is_line_end) {
                __Vdly__count_h = (0x00001fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__count_h)));
            }
            if ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))) {
                if (vlSelfRef.__PVT__is_batch_end) {
                    if (vlSelfRef.__PVT__is_line_end) {
                        __Vdly__count_w = 0U;
                    } else if (((IData)(vlSelfRef.__PVT__is_half_step) 
                                | (IData)(vlSelfRef.__PVT__is_last_step))) {
                        __Vdly__count_w = (0x00001fffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__count_w)));
                    }
                }
                if (vlSelfRef.cfg_mode_per_element) {
                    if (vlSelfRef.__PVT__is_elem_end) {
                        __Vdly__beat_cnt = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                    + 
                                                    (0U 
                                                     == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision))))));
                    }
                } else if (vlSelfRef.__PVT__is_surf_end) {
                    __Vdly__beat_cnt = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                         ? 0U : (3U 
                                                 & ((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step) 
                                                      >> 1U)))));
                }
            } else {
                if (vlSelfRef.__PVT__is_line_end) {
                    __Vdly__count_w = 0U;
                } else if (vlSelfRef.__PVT__is_elem_end) {
                    __Vdly__count_w = (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__count_w)));
                }
                if (vlSelfRef.cfg_mode_per_element) {
                    if (vlSelfRef.__PVT__is_elem_end) {
                        __Vdly__beat_cnt = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                    + 
                                                    (0U 
                                                     == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision))))));
                    }
                } else if (vlSelfRef.__PVT__is_surf_end) {
                    __Vdly__beat_cnt = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                         ? 0U : (3U 
                                                 & ((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                     + 
                                                     (0U 
                                                      == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision))))));
                }
            }
        }
        if ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))) {
            if (vlSelfRef.__PVT__out_accept) {
                if (vlSelfRef.__PVT__is_last_step) {
                    vlSelfRef.__PVT__count_step = 0U;
                    vlSelfRef.__PVT__count_b = ((IData)(vlSelfRef.__PVT__is_batch_end)
                                                 ? 0U
                                                 : 
                                                (0x0000001fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_b))));
                } else {
                    vlSelfRef.__PVT__count_step = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_step)));
                }
            }
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int 
                = vlSelfRef.__PVT__u_rod0__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__rod0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int 
                = vlSelfRef.__PVT__u_rod1__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__rod1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod2_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int 
                = vlSelfRef.__PVT__u_rod2__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__rod2_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod3_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int 
                = vlSelfRef.__PVT__u_rod3__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__rod3_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int;
    } else {
        __Vdly__count_c = 0U;
        vlSelfRef.__PVT__count_e = 0U;
        __Vdly__count_h = 0U;
        vlSelfRef.__PVT__count_step = 0U;
        vlSelfRef.__PVT__count_b = 0U;
        __Vdly__count_w = 0U;
        __Vdly__beat_cnt = 0U;
        vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_d = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__out_rdy)) 
                   | (IData)(vlSelfRef.__PVT__out_vld))));
    vlSelfRef.__PVT__count_c = __Vdly__count_c;
    vlSelfRef.__PVT__count_h = __Vdly__count_h;
    vlSelfRef.__PVT__count_w = __Vdly__count_w;
    vlSelfRef.__PVT__beat_cnt = __Vdly__beat_cnt;
    vlSelfRef.__PVT__rod_sel = (3U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                      + (IData)(vlSelfRef.__PVT__count_e)));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__2(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__u_roc__DOT__roc_wr_adr = vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__Vdly__u_roc__DOT__roc_wr_adr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr)));
        }
        if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
            vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr 
                = vlSelfRef.__PVT__u_roc__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p 
                = vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__u_roc__DOT__roc_wr_adr = 0U;
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr = 0U;
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_d = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                                  && (IData)(vlSelfRef.__PVT__roc_rd_pvld));
    vlSelfRef.__PVT__u_roc__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr)));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__3(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_is_1)) 
                     | ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_prdy_d) 
                        & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int))) 
                    | ((~ (IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_1)) 
                       & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o)))));
    vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_is_1)) 
                     | ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_prdy_d) 
                        & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int))) 
                    | ((~ (IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_1)) 
                       & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o)))));
    vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_is_1)) 
                     | ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_prdy_d) 
                        & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int))) 
                    | ((~ (IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_1)) 
                       & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o)))));
    vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_is_1)) 
                     | ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_prdy_d) 
                        & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int))) 
                    | ((~ (IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_1)) 
                       & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o)))));
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_is_4)) 
                     | ((IData)(vlSelfRef.__PVT__roc_rd_pvld) 
                        & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_prdy_d))) 
                    | ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_1)) 
                       & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)))));
}

extern const VlUnpacked<CData/*3:0*/, 128> Vsim__ConstPool__TABLE_hb792a52d_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vsim__ConstPool__TABLE_h866e1f58_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vsim__ConstPool__TABLE_h4b57420d_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vsim__ConstPool__TABLE_hdc798a42_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vsim__ConstPool__TABLE_had96a720_0;

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__4(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p;
    }
    __Vtableidx1 = (((IData)(vlSelfRef.roc_wr_pd) << 3U) 
                    | (((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr) 
                        << 1U) | ((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                                  & ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
                                     | (0U < (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))))));
    if ((1U & Vsim__ConstPool__TABLE_hb792a52d_0[__Vtableidx1])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0 
            = Vsim__ConstPool__TABLE_h866e1f58_0[__Vtableidx1];
    }
    if ((2U & Vsim__ConstPool__TABLE_hb792a52d_0[__Vtableidx1])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1 
            = Vsim__ConstPool__TABLE_h4b57420d_0[__Vtableidx1];
    }
    if ((4U & Vsim__ConstPool__TABLE_hb792a52d_0[__Vtableidx1])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2 
            = Vsim__ConstPool__TABLE_hdc798a42_0[__Vtableidx1];
    }
    if ((8U & Vsim__ConstPool__TABLE_hb792a52d_0[__Vtableidx1])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3 
            = Vsim__ConstPool__TABLE_had96a720_0[__Vtableidx1];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__5(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p 
                = vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_rod0__DOT__rd_req_next_o));
    vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_is_1));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__6(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p 
                = vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_rod1__DOT__rd_req_next_o));
    vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_is_1));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__7(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p 
                = vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_rod2__DOT__rd_req_next_o));
    vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_is_1));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__8(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p 
                = vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.__PVT__u_rod3__DOT__rd_req_next_o));
    vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_is_1));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__9(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)))) {
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[0U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[1U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[2U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[3U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[4U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[5U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[6U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__10(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)))) {
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[0U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[1U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[2U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[3U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[4U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[5U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[6U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__11(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)))) {
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[0U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[1U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[2U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[3U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[4U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[5U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[6U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__12(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)))) {
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[0U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[1U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[2U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[3U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[4U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[5U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[6U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__13(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[0U] 
        = vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[0U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[1U] 
        = vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[1U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[2U] 
        = vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[2U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[3U] 
        = vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[3U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[4U] 
        = vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[4U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[5U] 
        = vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[5U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[6U] 
        = vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[6U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[7U] 
        = vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[7U];
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data[8U] 
        = vlSelfRef.__Vdly__pipe_p1__DOT__p1_pipe_data[8U];
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_last_h = ((IData)(vlSelfRef.__PVT__count_h) 
                                  == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_height));
    vlSelfRef.__PVT__is_last_w = ((IData)(vlSelfRef.__PVT__count_w) 
                                  == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_width));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__1(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_gate__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__14(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int = vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int;
    vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int = vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int;
    vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int = vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int;
    vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int = vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int;
    vlSelfRef.__PVT__u_rod0__DOT__rod_rd_prdy_d = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                   || (IData)(vlSelfRef.__PVT__rod0_rd_prdy));
    vlSelfRef.__PVT__u_rod1__DOT__rod_rd_prdy_d = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                   || (IData)(vlSelfRef.__PVT__rod1_rd_prdy));
    vlSelfRef.__PVT__u_rod2__DOT__rod_rd_prdy_d = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                   || (IData)(vlSelfRef.__PVT__rod2_rd_prdy));
    vlSelfRef.__PVT__u_rod3__DOT__rod_rd_prdy_d = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                   || (IData)(vlSelfRef.__PVT__rod3_rd_prdy));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_prdy_d = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                  || (((0U 
                                                        != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                                        ? 
                                                       ((IData)(vlSelfRef.cfg_mode_per_element)
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                         & (IData)(vlSelfRef.__PVT__is_last_step))
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3098)))
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__is_elem_end) 
                                                        & ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                                           & ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                                              | (IData)(vlSelfRef.cfg_mode_per_element))))) 
                                                      & (IData)(vlSelfRef.__PVT__out_accept)));
    vlSelfRef.__PVT__out_vld = ((2U & (IData)(vlSelfRef.__PVT__rod_sel))
                                 ? ((1U & (IData)(vlSelfRef.__PVT__rod_sel))
                                     ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)
                                     : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int))
                                 : ((1U & (IData)(vlSelfRef.__PVT__rod_sel))
                                     ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)
                                     : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__15(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr = vlSelfRef.__Vdly__u_roc__DOT__roc_wr_adr;
    vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_is_4));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p) 
               | (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_3)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_roc__DOT__roc_wr_count 
                = vlSelfRef.__PVT__u_roc__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_roc__DOT__roc_wr_count = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__roc_wr_count = 0U;
    }
    vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))
                                                  ? 4U
                                                  : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__2(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h59bf5ad5_0_0 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int))));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__3(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h59bf5ad5_0_1 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int))));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__16(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count 
                = vlSelfRef.__PVT__u_rod0__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count = 0U;
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__17(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count 
                = vlSelfRef.__PVT__u_rod1__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count = 0U;
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__18(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count 
                = vlSelfRef.__PVT__u_rod2__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count = 0U;
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__19(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count 
                = vlSelfRef.__PVT__u_rod3__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count = 0U;
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__4(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                      | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__sdp_nrdma2dp_alu_ready)));
    vlSelfRef.__PVT__out_accept = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                   & (IData)(vlSelfRef.__PVT__out_vld));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__20(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cfg_mode_per_element = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_reg__DOT__dp2reg_consumer)
                                       ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d1_nrdma_data_mode)
                                       : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_reg__DOT__reg2dp_d0_nrdma_data_mode));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__5(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__6(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_elem_end = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision)) 
                                    == (IData)(vlSelfRef.__PVT__count_e));
    vlSelfRef.__PVT__is_batch_end = ((IData)(vlSelfRef.__PVT__count_b) 
                                     == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number));
    vlSelfRef.__PVT__is_half_step = ((IData)(vlSelfRef.__PVT__count_step) 
                                     == (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step), 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3486 = ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                   & ((IData)(vlSelfRef.__PVT__is_last_h) 
                                                      & (IData)(vlSelfRef.__PVT__is_last_w)));
    vlSelfRef.__PVT__is_line_end = ((IData)(vlSelfRef.__PVT__is_elem_end) 
                                    & ((IData)(vlSelfRef.__PVT__is_last_w) 
                                       & (IData)(vlSelfRef.__PVT__is_batch_end)));
    vlSelfRef.__PVT__is_last_step = (((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_width)) 
                                      & (IData)(vlSelfRef.__PVT__is_last_w))
                                      ? (IData)(vlSelfRef.__PVT__is_half_step)
                                      : ((IData)(vlSelfRef.__PVT__count_step) 
                                         == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step)));
    vlSelfRef.__PVT__is_surf_end = ((IData)(vlSelfRef.__PVT__is_line_end) 
                                    & (IData)(vlSelfRef.__PVT__is_last_h));
    vlSelfRef.__PVT__is_cube_end = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                    & ((IData)(vlSelfRef.__PVT__count_c) 
                                       == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_surf)));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__7(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_2 
        = ((IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__8(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_2 
        = ((IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__9(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_2 
        = ((IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__10(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_1 
        = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_d)));
    vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_2 
        = ((IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_1) 
           & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__11(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_prdy_d)) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_d));
    vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_3 
        = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_1) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__12(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rod_wr_mask = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex1)
                              ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__need_extra_rod)
                                  ? ((0x0000000cU & 
                                      ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q))) 
                                       << 2U)) | (3U 
                                                  & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q)))))
                                  : 3U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex1)
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_out_precision))
                                                    ? 
                                                   ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex1_cnt)
                                                       ? 
                                                      (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                       >> 0x0000001eU)
                                                       : 0U) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex1_cnt)
                                                        ? 0U
                                                        : 
                                                       (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                        >> 0x0000001eU)))
                                                    : 
                                                   (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                    >> 0x0000001eU))
                                                : (
                                                   vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                   >> 0x0000001eU))
                                            : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex2)
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_out_precision))
                                                     ? 
                                                    ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_cnt)
                                                        ? 
                                                       (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                        >> 0x0000001eU)
                                                        : 0U) 
                                                      << 2U) 
                                                     | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_cnt)
                                                         ? 0U
                                                         : 
                                                        (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                         >> 0x0000001eU)))
                                                     : 
                                                    (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                     >> 0x0000001eU))
                                                    : 
                                                   (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.Q[7U] 
                                                    >> 0x0000001eU))
                                                : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex2)
                                                    ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mask)
                                                    : 0U))));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__13(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rod_wr_rdy = ((IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_1) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_0));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__14(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.roc_wr_pd = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__is_last_beat)) 
                            << 3U) | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex1)
                                       ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__need_extra_rod)
                                           ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q)
                                               ? 3U
                                               : 1U)
                                           : ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision))
                                               ? 0U
                                               : 1U))
                                       : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex1)
                                           ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__VdfgRegularize_h6e95ff9d_0_578)
                                           : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex2)
                                               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__VdfgRegularize_h6e95ff9d_0_578)
                                               : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex2)
                                                   ? 
                                                  ((0U 
                                                    != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_out_precision))
                                                     ? 
                                                    (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__beat_count) 
                                                      == 
                                                      ((0x00003fffU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__ig2eg_size) 
                                                           >> 1U)) 
                                                       - (IData)(1U)))
                                                      ? 1U
                                                      : 3U)
                                                     : 
                                                    ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__is_last_beat)
                                                      ? 0U
                                                      : 1U))
                                                    : 0U)
                                                   : 0U)))));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__15(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__16(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod3_pd[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__17(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod2_pd[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__18(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rod_wr_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT____VdfgRegularize_hf581af5c_0_1) 
                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul.rod_wr_rdy));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__19(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p = ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.roc_wr_pd)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3)
                                                   : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1)
                                                   : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0))));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__20(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__21(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & ((IData)(vlSelfRef.rod_wr_mask) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_1)))));
    vlSelfRef.__PVT__u_rod1__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSelfRef.rod_wr_mask) 
                                                         >> 1U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_1)))));
    vlSelfRef.__PVT__u_rod2__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSelfRef.rod_wr_mask) 
                                                         >> 2U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_0)))));
    vlSelfRef.__PVT__u_rod3__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSelfRef.rod_wr_mask) 
                                                         >> 3U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_0)))));
    vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod0__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_2));
    vlSelfRef.__PVT__u_rod0__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod0__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod1__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_2));
    vlSelfRef.__PVT__u_rod1__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod1__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod2__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_2));
    vlSelfRef.__PVT__u_rod2__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod2__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod3__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_2));
    vlSelfRef.__PVT__u_rod3__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod3__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod0__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod1__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod2__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod3__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__22(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT____VdfgRegularize_hf581af5c_0_1) 
                                                    & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2624)));
    vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                 + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p = ((0U 
                                                   != (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p)) 
                                                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving));
    vlSelfRef.__PVT__u_roc__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_3)) 
                                               & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__roc_rd_pvld = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_1)
                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__u_roc__DOT__wr_count_next_is_4 
        = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
           & (4U == (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                     + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
        vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
            = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__23(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__size_of_beat = (3U & ((- (IData)((IData)(vlSelfRef.__PVT__roc_rd_pvld))) 
                                           & ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_1)
                                               ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o)
                                               : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p))));
    vlSelfRef.__PVT__is_last_beat = ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                      ? ((7U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                + VL_SHIFTR_III(3,3,32, (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step), 1U))) 
                                         == (IData)(vlSelfRef.__PVT__size_of_beat))
                                      : ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                         == (IData)(vlSelfRef.__PVT__size_of_beat)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3098 = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                                   & (IData)(vlSelfRef.__PVT__is_last_beat));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__24(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rod0_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3486) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? (0U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3098))));
    vlSelfRef.__PVT__rod1_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3486) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? (1U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3098))));
    vlSelfRef.__PVT__rod2_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3486) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? (2U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3098))));
    vlSelfRef.__PVT__rod3_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3486) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSelfRef.cfg_mode_per_element)
                                             ? (3U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3098))));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__0(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_rod0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_rod1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_rod2__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_rod3__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__1(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ __Vdly__count_w;
    __Vdly__count_w = 0;
    SData/*12:0*/ __Vdly__count_h;
    __Vdly__count_h = 0;
    SData/*8:0*/ __Vdly__count_c;
    __Vdly__count_c = 0;
    CData/*1:0*/ __Vdly__beat_cnt;
    __Vdly__beat_cnt = 0;
    // Body
    __Vdly__count_c = vlSelfRef.__PVT__count_c;
    vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int 
        = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int;
    vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int 
        = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int;
    vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int 
        = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int;
    vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int 
        = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int;
    __Vdly__count_h = vlSelfRef.__PVT__count_h;
    __Vdly__count_w = vlSelfRef.__PVT__count_w;
    __Vdly__beat_cnt = vlSelfRef.__PVT__beat_cnt;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__out_accept) {
            if (vlSelfRef.__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_c = (0x000001ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__count_c)));
            }
            vlSelfRef.__PVT__count_e = ((1U & (~ (IData)(vlSelfRef.__PVT__is_elem_end))) 
                                        && (1U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__count_e))));
            if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelfRef.__PVT__is_line_end) {
                __Vdly__count_h = (0x00001fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__count_h)));
            }
            if ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))) {
                if (vlSelfRef.__PVT__is_batch_end) {
                    if (vlSelfRef.__PVT__is_line_end) {
                        __Vdly__count_w = 0U;
                    } else if (((IData)(vlSelfRef.__PVT__is_half_step) 
                                | (IData)(vlSelfRef.__PVT__is_last_step))) {
                        __Vdly__count_w = (0x00001fffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__count_w)));
                    }
                }
                if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element) {
                    if (vlSelfRef.__PVT__is_elem_end) {
                        __Vdly__beat_cnt = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                    + 
                                                    (0U 
                                                     == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision))))));
                    }
                } else if (vlSelfRef.__PVT__is_surf_end) {
                    __Vdly__beat_cnt = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                         ? 0U : (3U 
                                                 & ((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step) 
                                                      >> 1U)))));
                }
            } else {
                if (vlSelfRef.__PVT__is_line_end) {
                    __Vdly__count_w = 0U;
                } else if (vlSelfRef.__PVT__is_elem_end) {
                    __Vdly__count_w = (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__count_w)));
                }
                if (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element) {
                    if (vlSelfRef.__PVT__is_elem_end) {
                        __Vdly__beat_cnt = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                             ? 0U : 
                                            (3U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                    + 
                                                    (0U 
                                                     == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision))))));
                    }
                } else if (vlSelfRef.__PVT__is_surf_end) {
                    __Vdly__beat_cnt = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                         ? 0U : (3U 
                                                 & ((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                     + 
                                                     (0U 
                                                      == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision))))));
                }
            }
        }
        if ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))) {
            if (vlSelfRef.__PVT__out_accept) {
                if (vlSelfRef.__PVT__is_last_step) {
                    vlSelfRef.__PVT__count_step = 0U;
                    vlSelfRef.__PVT__count_b = ((IData)(vlSelfRef.__PVT__is_batch_end)
                                                 ? 0U
                                                 : 
                                                (0x0000001fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_b))));
                } else {
                    vlSelfRef.__PVT__count_step = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_step)));
                }
            }
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int 
                = vlSelfRef.__PVT__u_rod0__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__rod0_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int 
                = vlSelfRef.__PVT__u_rod1__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__rod1_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod2_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int 
                = vlSelfRef.__PVT__u_rod2__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__rod2_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__rod3_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int 
                = vlSelfRef.__PVT__u_rod3__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__rod3_rd_prdy)))) {
            vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int;
    } else {
        __Vdly__count_c = 0U;
        vlSelfRef.__PVT__count_e = 0U;
        __Vdly__count_h = 0U;
        vlSelfRef.__PVT__count_step = 0U;
        vlSelfRef.__PVT__count_b = 0U;
        __Vdly__count_w = 0U;
        __Vdly__beat_cnt = 0U;
        vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_d = 0U;
        vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_d = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__out_rdy)) 
                   | (IData)(vlSelfRef.__PVT__out_vld))));
    vlSelfRef.__PVT__count_c = __Vdly__count_c;
    vlSelfRef.__PVT__count_h = __Vdly__count_h;
    vlSelfRef.__PVT__count_w = __Vdly__count_w;
    vlSelfRef.__PVT__beat_cnt = __Vdly__beat_cnt;
    vlSelfRef.__PVT__rod_sel = (3U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                      + (IData)(vlSelfRef.__PVT__count_e)));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__4(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p;
    }
    __Vtableidx2 = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.roc_wr_pd) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr) 
                                << 1U) | ((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                                          & ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
                                             | (0U 
                                                < (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))))));
    if ((1U & Vsim__ConstPool__TABLE_hb792a52d_0[__Vtableidx2])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0 
            = Vsim__ConstPool__TABLE_h866e1f58_0[__Vtableidx2];
    }
    if ((2U & Vsim__ConstPool__TABLE_hb792a52d_0[__Vtableidx2])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1 
            = Vsim__ConstPool__TABLE_h4b57420d_0[__Vtableidx2];
    }
    if ((4U & Vsim__ConstPool__TABLE_hb792a52d_0[__Vtableidx2])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2 
            = Vsim__ConstPool__TABLE_hdc798a42_0[__Vtableidx2];
    }
    if ((8U & Vsim__ConstPool__TABLE_hb792a52d_0[__Vtableidx2])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3 
            = Vsim__ConstPool__TABLE_had96a720_0[__Vtableidx2];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__9(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)))) {
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[0U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[1U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[2U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[3U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[4U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[5U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[6U];
        vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__10(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)))) {
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[0U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[1U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[2U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[3U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[4U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[5U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[6U];
        vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__11(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)))) {
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[0U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[1U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[2U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[3U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[4U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[5U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[6U];
        vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__12(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)))) {
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[0U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[1U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[2U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[3U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[4U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[5U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[6U];
        vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[7U];
    }
    if ((((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[0U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[1U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[2U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[3U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[4U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[5U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[6U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[7U] 
            = vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U];
    } else if ((((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_o[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__14(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int = vlSelfRef.__Vdly__u_rod0__DOT__rod_rd_pvld_int;
    vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int = vlSelfRef.__Vdly__u_rod1__DOT__rod_rd_pvld_int;
    vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int = vlSelfRef.__Vdly__u_rod2__DOT__rod_rd_pvld_int;
    vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int = vlSelfRef.__Vdly__u_rod3__DOT__rod_rd_pvld_int;
    vlSelfRef.__PVT__u_rod0__DOT__rod_rd_prdy_d = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                   || (IData)(vlSelfRef.__PVT__rod0_rd_prdy));
    vlSelfRef.__PVT__u_rod1__DOT__rod_rd_prdy_d = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                   || (IData)(vlSelfRef.__PVT__rod1_rd_prdy));
    vlSelfRef.__PVT__u_rod2__DOT__rod_rd_prdy_d = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                   || (IData)(vlSelfRef.__PVT__rod2_rd_prdy));
    vlSelfRef.__PVT__u_rod3__DOT__rod_rd_prdy_d = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                   || (IData)(vlSelfRef.__PVT__rod3_rd_prdy));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_prdy_d = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
                                                  || (((0U 
                                                        != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                         & (IData)(vlSelfRef.__PVT__is_last_step))
                                                         : 
                                                        ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3103)))
                                                        : 
                                                       ((IData)(vlSelfRef.__PVT__is_elem_end) 
                                                        & ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                                           & ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                                              | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element))))) 
                                                      & (IData)(vlSelfRef.__PVT__out_accept)));
    vlSelfRef.__PVT__out_vld = ((2U & (IData)(vlSelfRef.__PVT__rod_sel))
                                 ? ((1U & (IData)(vlSelfRef.__PVT__rod_sel))
                                     ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int)
                                     : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int))
                                 : ((1U & (IData)(vlSelfRef.__PVT__rod_sel))
                                     ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int)
                                     : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int)));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__3(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                      | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__sdp_nrdma2dp_mul_ready)));
    vlSelfRef.__PVT__out_accept = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                   & (IData)(vlSelfRef.__PVT__out_vld));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__5(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_elem_end = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__reg2dp_proc_precision)) 
                                    == (IData)(vlSelfRef.__PVT__count_e));
    vlSelfRef.__PVT__is_batch_end = ((IData)(vlSelfRef.__PVT__count_b) 
                                     == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number));
    vlSelfRef.__PVT__is_half_step = ((IData)(vlSelfRef.__PVT__count_step) 
                                     == (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step), 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3483 = ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                   & ((IData)(vlSelfRef.__PVT__is_last_h) 
                                                      & (IData)(vlSelfRef.__PVT__is_last_w)));
    vlSelfRef.__PVT__is_line_end = ((IData)(vlSelfRef.__PVT__is_elem_end) 
                                    & ((IData)(vlSelfRef.__PVT__is_last_w) 
                                       & (IData)(vlSelfRef.__PVT__is_batch_end)));
    vlSelfRef.__PVT__is_last_step = (((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_width)) 
                                      & (IData)(vlSelfRef.__PVT__is_last_w))
                                      ? (IData)(vlSelfRef.__PVT__is_half_step)
                                      : ((IData)(vlSelfRef.__PVT__count_step) 
                                         == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step)));
    vlSelfRef.__PVT__is_surf_end = ((IData)(vlSelfRef.__PVT__is_line_end) 
                                    & (IData)(vlSelfRef.__PVT__is_last_h));
    vlSelfRef.__PVT__is_cube_end = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                    & ((IData)(vlSelfRef.__PVT__count_c) 
                                       == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_surf)));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__12(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod1__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[0U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[1U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[2U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[3U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[4U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[5U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[6U];
        vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__13(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod3__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[0U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[1U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[2U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[3U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[4U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[5U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[6U];
        vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod3_pd[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__14(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod2__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[0U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[1U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[2U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[3U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[4U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[5U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[6U];
        vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod2_pd[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__15(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rod_wr_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT____VdfgRegularize_hf581af5c_0_2) 
                            & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.rod_wr_rdy));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__16(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p = ((4U 
                                                 & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? 0U
                                                   : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.roc_wr_pd)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3)
                                                   : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ra))
                                                   ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1)
                                                   : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0))));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__17(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count) {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U] 
            = vlSelfRef.__PVT__u_rod0__DOT__ram__DOT__ram_ff0[7U];
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[0U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[1U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[2U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[3U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[4U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[5U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[6U];
        vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pd_p[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[7U];
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__18(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.rod_wr_mask) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_1)))));
    vlSelfRef.__PVT__u_rod1__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.rod_wr_mask) 
                                                         >> 1U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_1)))));
    vlSelfRef.__PVT__u_rod2__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.rod_wr_mask) 
                                                         >> 2U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_0)))));
    vlSelfRef.__PVT__u_rod3__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_busy_int)) 
                                                  & ((IData)(vlSelfRef.rod_wr_vld) 
                                                     & (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.rod_wr_mask) 
                                                         >> 3U) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_busy_int)) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h59bf5ad5_0_0)))));
    vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)));
    vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p) 
                                                   | (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving));
    vlSelfRef.__PVT__u_rod0__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_2));
    vlSelfRef.__PVT__u_rod0__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod0__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod0__DOT____VdfgRegularize_h200784cc_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod1__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_2));
    vlSelfRef.__PVT__u_rod1__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod1__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod1__DOT____VdfgRegularize_h200784cc_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod2__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_2));
    vlSelfRef.__PVT__u_rod2__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod2__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod2__DOT____VdfgRegularize_h200784cc_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod3__DOT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p) 
                                                   | (IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_2));
    vlSelfRef.__PVT__u_rod3__DOT__rd_req_next = ((IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_1)
                                                  ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_int_o)
                                                  : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod3__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_rod3__DOT____VdfgRegularize_h200784cc_0_2)) 
                                                & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_pvld_p));
    vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod0__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod0__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod0__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod0__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod0__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod0__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod1__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod1__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod1__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod1__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod1__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod1__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod2__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod2__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod2__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod2__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod2__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod2__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_rod3__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_rod3__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p));
            vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count));
        } else {
            vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p)));
            vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_rod3__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_rod3__DOT__rod_rd_count_p)));
        vlSelfRef.__PVT__u_rod3__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_rod3__DOT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__19(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT____VdfgRegularize_hf581af5c_0_2) 
                                                    & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_2624)));
    vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                 + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p = ((0U 
                                                   != (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p)) 
                                                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving));
    vlSelfRef.__PVT__u_roc__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_3)) 
                                               & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__roc_rd_pvld = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_1)
                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__u_roc__DOT__wr_count_next_is_4 
        = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
           & (4U == (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                     + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
        vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
            = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__20(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__size_of_beat = (3U & ((- (IData)((IData)(vlSelfRef.__PVT__roc_rd_pvld))) 
                                           & ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h16554141_0_1)
                                               ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o)
                                               : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p))));
    vlSelfRef.__PVT__is_last_beat = ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                      ? ((7U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                                + VL_SHIFTR_III(3,3,32, (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__size_of_step), 1U))) 
                                         == (IData)(vlSelfRef.__PVT__size_of_beat))
                                      : ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                         == (IData)(vlSelfRef.__PVT__size_of_beat)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3103 = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                                   & (IData)(vlSelfRef.__PVT__is_last_beat));
}

void Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__21(Vsim_NV_NVDLA_SDP_NRDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_NV_NVDLA_SDP_NRDMA_EG_ro___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rod0_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3483) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? (0U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3103))));
    vlSelfRef.__PVT__rod1_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3483) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? (1U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3103))));
    vlSelfRef.__PVT__rod2_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3483) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? (2U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3103))));
    vlSelfRef.__PVT__rod3_rd_prdy = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                     & ((0U != (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number))
                                         ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? ((IData)(vlSelfRef.__PVT__is_batch_end) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__count_step)))
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3483) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__rod_sel))))
                                         : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.cfg_mode_per_element)
                                             ? (3U 
                                                == (IData)(vlSelfRef.__PVT__rod_sel))
                                             : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3103))));
}
