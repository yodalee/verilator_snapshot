// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_SDP_REG_dual___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0(Vsim_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_SDP_REG_dual___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arreggen_dump = (1U & VL_TESTPLUSARGS_I("arreggen_dump_wr"s));
    vlSelfRef.__PVT__arreggen_abort_on_rowr = (1U & VL_TESTPLUSARGS_I("arreggen_abort_on_rowr"s));
    vlSelfRef.__PVT__arreggen_abort_on_invalid_wr = 
        (1U & VL_TESTPLUSARGS_I("arreggen_abort_on_invalid_wr"s));
}

void Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__0(Vsim_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reg_wr_en) {
        if (((((((((0x00c0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                   | (0x00c4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                  | (0x00c8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                 | (0x0044U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                | (0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
               | (0x003cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
              | (0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
             | (0x0070U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x00c0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_offset,
                                 32,vlSelfRef.cvt_offset);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00c4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_scale,
                                 32,(IData)(vlSelfRef.cvt_scale));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00c8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_CVT_SHIFT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_shift,
                                 32,(IData)(vlSelfRef.cvt_shift));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0044U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_CUBE_CHANNEL_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.channel,
                                 32,(IData)(vlSelfRef.channel));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_CUBE_HEIGHT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.height,
                                 32,(IData)(vlSelfRef.height));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x003cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_CUBE_WIDTH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.width,
                                 32,(IData)(vlSelfRef.width));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.out_precision) 
                                      << 2U) | (IData)(vlSelfRef.proc_precision)),
                                 32,(((IData)(vlSelfRef.out_precision) 
                                      << 2U) | (IData)(vlSelfRef.proc_precision)));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.bn_alu_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bn_alu_src)),
                             32,(((IData)(vlSelfRef.bn_alu_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bn_alu_src)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0074U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x006cU == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x0078U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x007cU == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x005cU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x0060U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0064U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0074U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.bn_alu_operand,
                                 32,(IData)(vlSelfRef.bn_alu_operand));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x006cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,((((IData)(vlSelfRef.bn_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bn_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass)))),
                                 32,((((IData)(vlSelfRef.bn_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bn_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass)))));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0078U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.bn_mul_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bn_mul_src)),
                                 32,(((IData)(vlSelfRef.bn_mul_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bn_mul_src)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x007cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.bn_mul_operand,
                                 32,(IData)(vlSelfRef.bn_mul_operand));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x005cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.bs_alu_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bs_alu_src)),
                                 32,(((IData)(vlSelfRef.bs_alu_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bs_alu_src)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0060U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.bs_alu_operand,
                                 32,(IData)(vlSelfRef.bs_alu_operand));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,((((IData)(vlSelfRef.bs_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bs_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bs_bypass)))),
                                 32,((((IData)(vlSelfRef.bs_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bs_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bs_bypass)))));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.bs_mul_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bs_mul_src)),
                             32,(((IData)(vlSelfRef.bs_mul_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bs_mul_src)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0068U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0084U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x008cU == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x0090U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x0094U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x0088U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0080U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0098U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0068U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.bs_mul_operand,
                                 32,(IData)(vlSelfRef.bs_mul_operand));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0084U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                      << 1U) | (IData)(vlSelfRef.ew_alu_src)),
                                 32,(((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                      << 1U) | (IData)(vlSelfRef.ew_alu_src)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x008cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_alu_cvt_offset,
                                 32,vlSelfRef.ew_alu_cvt_offset);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0090U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_alu_cvt_scale,
                                 32,(IData)(vlSelfRef.ew_alu_cvt_scale));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0094U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_alu_cvt_truncate,
                                 32,(IData)(vlSelfRef.ew_alu_cvt_truncate));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0088U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_alu_operand,
                                 32,vlSelfRef.ew_alu_operand);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0080U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,((((IData)(vlSelfRef.ew_lut_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.ew_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.ew_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ew_bypass)))),
                                 32,((((IData)(vlSelfRef.ew_lut_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.ew_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.ew_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ew_bypass)))));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                  << 1U) | (IData)(vlSelfRef.ew_mul_src)),
                             32,(((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                  << 1U) | (IData)(vlSelfRef.ew_mul_src)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x00a0U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x00a4U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x00a8U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x009cU == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00acU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x004cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0048U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x00b8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x00a0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_mul_cvt_offset,
                                 32,vlSelfRef.ew_mul_cvt_offset);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_mul_cvt_scale,
                                 32,(IData)(vlSelfRef.ew_mul_cvt_scale));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_mul_cvt_truncate,
                                 32,(IData)(vlSelfRef.ew_mul_cvt_truncate));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x009cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_mul_operand,
                                 32,vlSelfRef.ew_mul_operand);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00acU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_truncate,
                                 32,(IData)(vlSelfRef.ew_truncate));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x004cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.dst_base_addr_high,
                                 32,vlSelfRef.dst_base_addr_high);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0048U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.dst_base_addr_low 
                                     << 5U),32,(vlSelfRef.dst_base_addr_low 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.dst_batch_stride 
                                 << 5U),32,(vlSelfRef.dst_batch_stride 
                                            << 5U));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x00b4U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0050U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x0054U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x00b0U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x0038U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x00dcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x00f0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x00f4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x00b4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_DMA_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.dst_ram_type,
                                 32,(IData)(vlSelfRef.dst_ram_type));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0050U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.dst_line_stride 
                                     << 5U),32,(vlSelfRef.dst_line_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0054U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_SURFACE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.dst_surface_stride 
                                     << 5U),32,(vlSelfRef.dst_surface_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_FEATURE_MODE_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.batch_number) 
                                      << 8U) | ((((IData)(vlSelfRef.nan_to_zero) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.winograd) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.flying_mode)))),
                                 32,(((IData)(vlSelfRef.batch_number) 
                                      << 8U) | ((((IData)(vlSelfRef.nan_to_zero) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.winograd) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.flying_mode)))));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0038U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en,
                                 32,(IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00dcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                       << 3U) | ((IData)(vlSelfRef.perf_sat_en) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.perf_lut_en) 
                                         << 1U) | (IData)(vlSelfRef.perf_dma_en))),
                                 32,((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                       << 3U) | ((IData)(vlSelfRef.perf_sat_en) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.perf_lut_en) 
                                         << 1U) | (IData)(vlSelfRef.perf_dma_en))));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00f0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_HYBRID_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1026, "");
                }
            } else {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LE_HIT_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1030, "");
                }
            }
        } else if (((((((((0x00f8U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x00e8U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x00e4U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x00ecU == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00e0U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x00ccU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x00d4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x00d0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x00f8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LO_HIT_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1034, "");
                }
            } else if ((0x00e8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_OFLOW_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1038, "");
                }
            } else if ((0x00e4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_UFLOW_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1042, "");
                }
            } else if ((0x00ecU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_OUT_SATURATION_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1046, "");
                }
            } else if ((0x00e0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_WDMA_WRITE_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1050, "");
                }
            } else if ((0x00ccU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1054, "");
                }
            } else if ((0x00d4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_INF_INPUT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1058, "");
                }
            } else {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_INPUT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1062, "");
                }
            }
        } else if ((0x00d8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_OUTPUT_NUM_0 = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1066, "");
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),12,
                             (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)),
                             32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                         >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1070, "");
            }
        }
    }
}

void Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__1(Vsim_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__nvdla_sdp_d_perf_enable_0_wren) {
            vlSelfRef.perf_nan_inf_count_en = (1U & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x00000019U)));
            vlSelfRef.perf_lut_en = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000017U)));
            vlSelfRef.perf_sat_en = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000018U)));
            vlSelfRef.perf_dma_en = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren) {
            vlSelfRef.bn_alu_src = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren) {
            vlSelfRef.bn_mul_src = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x00000016U)));
            vlSelfRef.bn_mul_shift_value = (0x000000ffU 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x0000001eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren) {
            vlSelfRef.bs_alu_src = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren) {
            vlSelfRef.bs_mul_src = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x00000016U)));
            vlSelfRef.bs_mul_shift_value = (0x000000ffU 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x0000001eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren) {
            vlSelfRef.ew_alu_src = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x00000016U)));
            vlSelfRef.ew_alu_cvt_bypass = (1U & (IData)(
                                                        (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x00000017U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren) {
            vlSelfRef.ew_mul_src = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x00000016U)));
            vlSelfRef.ew_mul_cvt_bypass = (1U & (IData)(
                                                        (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x00000017U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren) {
            vlSelfRef.nan_to_zero = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000019U)));
            vlSelfRef.winograd = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x00000018U)));
            vlSelfRef.batch_number = (0x0000001fU & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x0000001eU)));
            vlSelfRef.output_dst = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x00000017U)));
            vlSelfRef.flying_mode = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelfRef.bn_mul_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x0000001aU)));
            vlSelfRef.bn_alu_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x00000017U)));
            vlSelfRef.bn_relu_bypass = (1U & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x0000001cU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelfRef.bs_mul_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x0000001aU)));
            vlSelfRef.bs_alu_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x00000017U)));
            vlSelfRef.bs_relu_bypass = (1U & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x0000001cU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren) {
            vlSelfRef.ew_mul_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x0000001aU)));
            vlSelfRef.ew_alu_algo = (3U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000018U)));
            vlSelfRef.ew_alu_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x00000017U)));
            vlSelfRef.ew_bypass = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x00000016U)));
            vlSelfRef.ew_mul_prelu = (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x0000001bU)));
            vlSelfRef.ew_lut_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x0000001cU)));
        }
        if (((0x00b8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.dst_batch_stride = (0x07ffffffU 
                                          & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x0000001bU)));
        }
        if (((0x0050U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.dst_line_stride = (0x07ffffffU 
                                         & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x0000001bU)));
        }
        if (((0x0054U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.dst_surface_stride = (0x07ffffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x0000001bU)));
        }
        if (((0x004cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.dst_base_addr_high = (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x00000016U));
        }
        if (((0x0048U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.dst_base_addr_low = (0x07ffffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x0000001bU)));
        }
        if (((0x0044U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.channel = (0x00001fffU & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                        >> 0x00000016U)));
        }
        if (((0x00b4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.dst_ram_type = (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x00000016U)));
        }
        if (((0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.height = (0x00001fffU & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_data_format_0_wren) {
            vlSelfRef.proc_precision = (3U & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x00000016U)));
            vlSelfRef.out_precision = (3U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x00000018U)));
        }
        if (((0x003cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.width = (0x00001fffU & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x00000016U)));
        }
        if (((0x00a8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.ew_mul_cvt_truncate = (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                        >> 0x00000016U)));
        }
        if (((0x0094U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.ew_alu_cvt_truncate = (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                        >> 0x00000016U)));
        }
        if (((0x00a0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.ew_mul_cvt_offset = (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000016U));
        }
        if (((0x008cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.ew_alu_cvt_offset = (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000016U));
        }
        if (((0x009cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.ew_mul_operand = (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x00000016U));
        }
        if (((0x00acU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.ew_truncate = (0x000003ffU & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                            >> 0x00000016U)));
        }
        if (((0x0088U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.ew_alu_operand = (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x00000016U));
        }
        if (((0x0090U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.ew_alu_cvt_scale = (0x0000ffffU 
                                          & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x00000016U)));
        }
        if (((0x00a4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.ew_mul_cvt_scale = (0x0000ffffU 
                                          & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x00000016U)));
        }
        if (((0x00c0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.cvt_offset = (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                            >> 0x00000016U));
        }
        if (((0x00c4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.cvt_scale = (0x0000ffffU & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                          >> 0x00000016U)));
        }
        if (((0x00c8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.cvt_shift = (0x0000003fU & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                          >> 0x00000016U)));
        }
    } else {
        vlSelfRef.perf_nan_inf_count_en = 0U;
        vlSelfRef.bn_alu_src = 0U;
        vlSelfRef.bn_mul_src = 0U;
        vlSelfRef.bs_alu_src = 0U;
        vlSelfRef.bs_mul_src = 0U;
        vlSelfRef.ew_alu_src = 0U;
        vlSelfRef.ew_mul_src = 0U;
        vlSelfRef.perf_lut_en = 0U;
        vlSelfRef.nan_to_zero = 0U;
        vlSelfRef.bn_mul_bypass = 0U;
        vlSelfRef.bn_alu_bypass = 0U;
        vlSelfRef.bs_mul_bypass = 0U;
        vlSelfRef.bs_alu_bypass = 0U;
        vlSelfRef.ew_mul_bypass = 0U;
        vlSelfRef.dst_batch_stride = 0U;
        vlSelfRef.dst_line_stride = 0U;
        vlSelfRef.dst_surface_stride = 0U;
        vlSelfRef.dst_base_addr_high = 0U;
        vlSelfRef.dst_base_addr_low = 0U;
        vlSelfRef.channel = 0U;
        vlSelfRef.ew_alu_algo = 0U;
        vlSelfRef.ew_alu_bypass = 0U;
        vlSelfRef.ew_bypass = 0U;
        vlSelfRef.dst_ram_type = 0U;
        vlSelfRef.winograd = 0U;
        vlSelfRef.batch_number = 0U;
        vlSelfRef.output_dst = 0U;
        vlSelfRef.height = 0U;
        vlSelfRef.proc_precision = 0U;
        vlSelfRef.width = 0U;
        vlSelfRef.out_precision = 0U;
        vlSelfRef.ew_mul_cvt_truncate = 0U;
        vlSelfRef.ew_alu_cvt_truncate = 0U;
        vlSelfRef.ew_mul_cvt_offset = 0U;
        vlSelfRef.ew_alu_cvt_offset = 0U;
        vlSelfRef.ew_mul_prelu = 0U;
        vlSelfRef.ew_lut_bypass = 0U;
        vlSelfRef.ew_mul_operand = 0U;
        vlSelfRef.ew_truncate = 0U;
        vlSelfRef.ew_alu_operand = 0U;
        vlSelfRef.ew_alu_cvt_scale = 0U;
        vlSelfRef.ew_alu_cvt_bypass = 0U;
        vlSelfRef.ew_mul_cvt_scale = 0U;
        vlSelfRef.ew_mul_cvt_bypass = 0U;
        vlSelfRef.perf_sat_en = 0U;
        vlSelfRef.flying_mode = 0U;
        vlSelfRef.bn_relu_bypass = 0U;
        vlSelfRef.bs_relu_bypass = 0U;
        vlSelfRef.cvt_offset = 0U;
        vlSelfRef.bn_mul_shift_value = 0U;
        vlSelfRef.bs_mul_shift_value = 0U;
        vlSelfRef.perf_dma_en = 0U;
        vlSelfRef.cvt_scale = 0U;
        vlSelfRef.cvt_shift = 0U;
    }
}

void Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__2(Vsim_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren) {
            vlSelfRef.bs_alu_shift_value = (0x0000003fU 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x0000001eU)));
        }
        if (((0x0060U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.bs_alu_operand = (0x0000ffffU 
                                        & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
        if (((0x0068U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.bs_mul_operand = (0x0000ffffU 
                                        & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelfRef.bs_mul_prelu = (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x0000001bU)));
            vlSelfRef.bs_alu_algo = (3U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000018U)));
            vlSelfRef.bs_bypass = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren) {
            vlSelfRef.bn_alu_shift_value = (0x0000003fU 
                                            & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x0000001eU)));
        }
        if (((0x0074U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.bn_alu_operand = (0x0000ffffU 
                                        & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
        if (((0x007cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.bn_mul_operand = (0x0000ffffU 
                                        & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelfRef.bn_mul_prelu = (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x0000001bU)));
            vlSelfRef.bn_alu_algo = (3U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x00000018U)));
            vlSelfRef.bn_bypass = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x00000016U)));
        }
    } else {
        vlSelfRef.bs_alu_shift_value = 0U;
        vlSelfRef.bs_alu_operand = 0U;
        vlSelfRef.bs_mul_operand = 0U;
        vlSelfRef.bs_mul_prelu = 0U;
        vlSelfRef.bs_alu_algo = 0U;
        vlSelfRef.bn_alu_shift_value = 0U;
        vlSelfRef.bn_alu_operand = 0U;
        vlSelfRef.bn_mul_operand = 0U;
        vlSelfRef.bn_mul_prelu = 0U;
        vlSelfRef.bn_alu_algo = 0U;
        vlSelfRef.bs_bypass = 0U;
        vlSelfRef.bn_bypass = 0U;
    }
}

void Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__3(Vsim_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3541 = (
                                                   ((0x00f8U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x00e8U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x00e4U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x00ecU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x00e0U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x00ccU 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x00d4U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x00d0U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3542 = (
                                                   ((0x00b4U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x0050U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x0054U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x00b0U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x0038U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x00dcU 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x00f0U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x00f4U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3543 = (
                                                   ((0x00a0U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x00a4U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x00a8U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x009cU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x00acU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x004cU 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0048U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x00b8U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3544 = (
                                                   ((0x0068U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x0084U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x008cU 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x0090U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x0094U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x0088U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0080U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0098U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3545 = (
                                                   ((0x0074U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x006cU 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x0078U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x007cU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x005cU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x0060U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0058U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0064U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3546 = (
                                                   ((0x00c0U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x00c4U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x00c8U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x0044U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x0040U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x003cU 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x00bcU 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0070U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.reg_wr_en = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg_wr_en) 
                           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
                              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__select_d0)));
    vlSelfRef.reg_rd_data = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3546)
                              ? ((0x00c0U == (0x00000ffcU 
                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))
                                  ? vlSelfRef.cvt_offset
                                  : ((0x00c4U == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                      ? (IData)(vlSelfRef.cvt_scale)
                                      : ((0x00c8U == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))
                                          ? (IData)(vlSelfRef.cvt_shift)
                                          : ((0x0044U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (IData)(vlSelfRef.channel)
                                              : ((0x0040U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.height)
                                                  : 
                                                 ((0x003cU 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.width)
                                                   : 
                                                  ((0x00bcU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelfRef.out_precision) 
                                                     << 2U) 
                                                    | (IData)(vlSelfRef.proc_precision))
                                                    : 
                                                   (((IData)(vlSelfRef.bn_alu_shift_value) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.bn_alu_src)))))))))
                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3545)
                                  ? ((0x0074U == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                      ? (IData)(vlSelfRef.bn_alu_operand)
                                      : ((0x006cU == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))
                                          ? ((((IData)(vlSelfRef.bn_relu_bypass) 
                                               << 6U) 
                                              | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                             | (((IData)(vlSelfRef.bn_alu_algo) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass))))
                                          : ((0x0078U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.bn_mul_shift_value) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.bn_mul_src))
                                              : ((0x007cU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.bn_mul_operand)
                                                  : 
                                                 ((0x005cU 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.bs_alu_shift_value) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.bs_alu_src))
                                                   : 
                                                  ((0x0060U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.bs_alu_operand)
                                                    : 
                                                   ((0x0058U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    ((((IData)(vlSelfRef.bs_relu_bypass) 
                                                       << 6U) 
                                                      | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                          << 5U) 
                                                         | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                            << 4U))) 
                                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                                         << 2U) 
                                                        | (((IData)(vlSelfRef.bs_alu_bypass) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.bs_bypass))))
                                                     : 
                                                    (((IData)(vlSelfRef.bs_mul_shift_value) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.bs_mul_src)))))))))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3544)
                                      ? ((0x0068U == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))
                                          ? (IData)(vlSelfRef.bs_mul_operand)
                                          : ((0x0084U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ew_alu_src))
                                              : ((0x008cU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSelfRef.ew_alu_cvt_offset
                                                  : 
                                                 ((0x0090U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.ew_alu_cvt_scale)
                                                   : 
                                                  ((0x0094U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.ew_alu_cvt_truncate)
                                                    : 
                                                   ((0x0088U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.ew_alu_operand
                                                     : 
                                                    ((0x0080U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     ((((IData)(vlSelfRef.ew_lut_bypass) 
                                                        << 6U) 
                                                       | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                           << 5U) 
                                                          | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                             << 4U))) 
                                                      | (((IData)(vlSelfRef.ew_alu_algo) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.ew_alu_bypass) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.ew_bypass))))
                                                      : 
                                                     (((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ew_mul_src)))))))))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3543)
                                          ? ((0x00a0U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? vlSelfRef.ew_mul_cvt_offset
                                              : ((0x00a4U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.ew_mul_cvt_scale)
                                                  : 
                                                 ((0x00a8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.ew_mul_cvt_truncate)
                                                   : 
                                                  ((0x009cU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.ew_mul_operand
                                                    : 
                                                   ((0x00acU 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelfRef.ew_truncate)
                                                     : 
                                                    ((0x004cU 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.dst_base_addr_high
                                                      : 
                                                     ((0x0048U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (vlSelfRef.dst_base_addr_low 
                                                       << 5U)
                                                       : 
                                                      (vlSelfRef.dst_batch_stride 
                                                       << 5U))))))))
                                          : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3542)
                                              ? ((0x00b4U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.dst_ram_type)
                                                  : 
                                                 ((0x0050U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (vlSelfRef.dst_line_stride 
                                                   << 5U)
                                                   : 
                                                  ((0x0054U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (vlSelfRef.dst_surface_stride 
                                                    << 5U)
                                                    : 
                                                   ((0x00b0U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelfRef.batch_number) 
                                                      << 8U) 
                                                     | ((((IData)(vlSelfRef.nan_to_zero) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.winograd) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.output_dst) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.flying_mode))))
                                                     : 
                                                    ((0x0038U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                      : 
                                                     ((0x00dcU 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      ((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.perf_sat_en) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.perf_lut_en) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.perf_dma_en)))
                                                       : 
                                                      ((0x00f0U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_hybrid
                                                        : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_le_hit)))))))
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3541)
                                                  ? 
                                                 ((0x00f8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_lo_hit
                                                   : 
                                                  ((0x00e8U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_oflow
                                                    : 
                                                   ((0x00e4U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_uflow
                                                     : 
                                                    ((0x00ecU 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_out_saturation
                                                      : 
                                                     ((0x00e0U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_wdma_stall
                                                       : 
                                                      ((0x00ccU 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_unequal)
                                                        : 
                                                       ((0x00d4U 
                                                         == 
                                                         (0x00000ffcU 
                                                          & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_inf_input_num
                                                         : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_input_num)))))))
                                                  : 
                                                 ((0x00d8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_output_num
                                                   : 0U)))))));
    vlSelfRef.__PVT__nvdla_sdp_d_data_format_0_wren 
        = ((0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren 
        = ((0x0070U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren = 
        ((0x006cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren 
        = ((0x0078U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren 
        = ((0x005cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren = 
        ((0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren 
        = ((0x0064U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren 
        = ((0x0084U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren = 
        ((0x0080U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren 
        = ((0x0098U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren 
        = ((0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_perf_enable_0_wren 
        = ((0x00dcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
}

void Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__0(Vsim_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reg_wr_en) {
        if (((((((((0x00c0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                   | (0x00c4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                  | (0x00c8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                 | (0x0044U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                | (0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
               | (0x003cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
              | (0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
             | (0x0070U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x00c0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_offset,
                                 32,vlSelfRef.cvt_offset);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00c4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_scale,
                                 32,(IData)(vlSelfRef.cvt_scale));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00c8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_CVT_SHIFT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_shift,
                                 32,(IData)(vlSelfRef.cvt_shift));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0044U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_CUBE_CHANNEL_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.channel,
                                 32,(IData)(vlSelfRef.channel));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_CUBE_HEIGHT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.height,
                                 32,(IData)(vlSelfRef.height));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x003cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_CUBE_WIDTH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.width,
                                 32,(IData)(vlSelfRef.width));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.out_precision) 
                                      << 2U) | (IData)(vlSelfRef.proc_precision)),
                                 32,(((IData)(vlSelfRef.out_precision) 
                                      << 2U) | (IData)(vlSelfRef.proc_precision)));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.bn_alu_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bn_alu_src)),
                             32,(((IData)(vlSelfRef.bn_alu_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bn_alu_src)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0074U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x006cU == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x0078U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x007cU == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x005cU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x0060U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0064U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0074U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.bn_alu_operand,
                                 32,(IData)(vlSelfRef.bn_alu_operand));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x006cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,((((IData)(vlSelfRef.bn_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bn_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass)))),
                                 32,((((IData)(vlSelfRef.bn_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bn_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass)))));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0078U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.bn_mul_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bn_mul_src)),
                                 32,(((IData)(vlSelfRef.bn_mul_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bn_mul_src)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x007cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.bn_mul_operand,
                                 32,(IData)(vlSelfRef.bn_mul_operand));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x005cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.bs_alu_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bs_alu_src)),
                                 32,(((IData)(vlSelfRef.bs_alu_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bs_alu_src)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0060U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.bs_alu_operand,
                                 32,(IData)(vlSelfRef.bs_alu_operand));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,((((IData)(vlSelfRef.bs_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bs_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bs_bypass)))),
                                 32,((((IData)(vlSelfRef.bs_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bs_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bs_bypass)))));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.bs_mul_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bs_mul_src)),
                             32,(((IData)(vlSelfRef.bs_mul_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bs_mul_src)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0068U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0084U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x008cU == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x0090U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x0094U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x0088U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0080U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0098U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0068U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.bs_mul_operand,
                                 32,(IData)(vlSelfRef.bs_mul_operand));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0084U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                      << 1U) | (IData)(vlSelfRef.ew_alu_src)),
                                 32,(((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                      << 1U) | (IData)(vlSelfRef.ew_alu_src)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x008cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_alu_cvt_offset,
                                 32,vlSelfRef.ew_alu_cvt_offset);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0090U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_alu_cvt_scale,
                                 32,(IData)(vlSelfRef.ew_alu_cvt_scale));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0094U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_alu_cvt_truncate,
                                 32,(IData)(vlSelfRef.ew_alu_cvt_truncate));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0088U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_alu_operand,
                                 32,vlSelfRef.ew_alu_operand);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0080U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,((((IData)(vlSelfRef.ew_lut_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.ew_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.ew_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ew_bypass)))),
                                 32,((((IData)(vlSelfRef.ew_lut_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.ew_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.ew_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ew_bypass)))));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                  << 1U) | (IData)(vlSelfRef.ew_mul_src)),
                             32,(((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                  << 1U) | (IData)(vlSelfRef.ew_mul_src)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x00a0U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x00a4U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x00a8U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x009cU == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00acU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x004cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0048U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x00b8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x00a0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_mul_cvt_offset,
                                 32,vlSelfRef.ew_mul_cvt_offset);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_mul_cvt_scale,
                                 32,(IData)(vlSelfRef.ew_mul_cvt_scale));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_mul_cvt_truncate,
                                 32,(IData)(vlSelfRef.ew_mul_cvt_truncate));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x009cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_mul_operand,
                                 32,vlSelfRef.ew_mul_operand);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00acU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.ew_truncate,
                                 32,(IData)(vlSelfRef.ew_truncate));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x004cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.dst_base_addr_high,
                                 32,vlSelfRef.dst_base_addr_high);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0048U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.dst_base_addr_low 
                                     << 5U),32,(vlSelfRef.dst_base_addr_low 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.dst_batch_stride 
                                 << 5U),32,(vlSelfRef.dst_batch_stride 
                                            << 5U));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x00b4U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0050U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x0054U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x00b0U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x0038U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x00dcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x00f0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x00f4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x00b4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_DMA_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.dst_ram_type,
                                 32,(IData)(vlSelfRef.dst_ram_type));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0050U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.dst_line_stride 
                                     << 5U),32,(vlSelfRef.dst_line_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0054U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_SURFACE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.dst_surface_stride 
                                     << 5U),32,(vlSelfRef.dst_surface_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_FEATURE_MODE_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.batch_number) 
                                      << 8U) | ((((IData)(vlSelfRef.nan_to_zero) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.winograd) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.flying_mode)))),
                                 32,(((IData)(vlSelfRef.batch_number) 
                                      << 8U) | ((((IData)(vlSelfRef.nan_to_zero) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.winograd) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.flying_mode)))));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0038U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en,
                                 32,(IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00dcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                       << 3U) | ((IData)(vlSelfRef.perf_sat_en) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.perf_lut_en) 
                                         << 1U) | (IData)(vlSelfRef.perf_dma_en))),
                                 32,((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                       << 3U) | ((IData)(vlSelfRef.perf_sat_en) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.perf_lut_en) 
                                         << 1U) | (IData)(vlSelfRef.perf_dma_en))));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00f0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_HYBRID_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1026, "");
                }
            } else {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LE_HIT_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1030, "");
                }
            }
        } else if (((((((((0x00f8U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) 
                          | (0x00e8U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x00e4U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x00ecU == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00e0U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x00ccU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x00d4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x00d0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x00f8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LO_HIT_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1034, "");
                }
            } else if ((0x00e8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_OFLOW_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1038, "");
                }
            } else if ((0x00e4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_UFLOW_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1042, "");
                }
            } else if ((0x00ecU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_OUT_SATURATION_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1046, "");
                }
            } else if ((0x00e0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_WDMA_WRITE_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1050, "");
                }
            } else if ((0x00ccU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1054, "");
                }
            } else if ((0x00d4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_INF_INPUT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1058, "");
                }
            } else {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_INPUT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1062, "");
                }
            }
        } else if ((0x00d8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_OUTPUT_NUM_0 = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1066, "");
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),12,
                             (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)),
                             32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                         >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_SDP_REG_dual.v", 1070, "");
            }
        }
    }
}

void Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__3(Vsim_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_wr_en = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg_wr_en) 
                           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
                              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__select_d1)));
    vlSelfRef.reg_rd_data = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3546)
                              ? ((0x00c0U == (0x00000ffcU 
                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))
                                  ? vlSelfRef.cvt_offset
                                  : ((0x00c4U == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                      ? (IData)(vlSelfRef.cvt_scale)
                                      : ((0x00c8U == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))
                                          ? (IData)(vlSelfRef.cvt_shift)
                                          : ((0x0044U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (IData)(vlSelfRef.channel)
                                              : ((0x0040U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.height)
                                                  : 
                                                 ((0x003cU 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.width)
                                                   : 
                                                  ((0x00bcU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelfRef.out_precision) 
                                                     << 2U) 
                                                    | (IData)(vlSelfRef.proc_precision))
                                                    : 
                                                   (((IData)(vlSelfRef.bn_alu_shift_value) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.bn_alu_src)))))))))
                              : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3545)
                                  ? ((0x0074U == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                      ? (IData)(vlSelfRef.bn_alu_operand)
                                      : ((0x006cU == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))
                                          ? ((((IData)(vlSelfRef.bn_relu_bypass) 
                                               << 6U) 
                                              | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                             | (((IData)(vlSelfRef.bn_alu_algo) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass))))
                                          : ((0x0078U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.bn_mul_shift_value) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.bn_mul_src))
                                              : ((0x007cU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.bn_mul_operand)
                                                  : 
                                                 ((0x005cU 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.bs_alu_shift_value) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.bs_alu_src))
                                                   : 
                                                  ((0x0060U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.bs_alu_operand)
                                                    : 
                                                   ((0x0058U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    ((((IData)(vlSelfRef.bs_relu_bypass) 
                                                       << 6U) 
                                                      | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                          << 5U) 
                                                         | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                            << 4U))) 
                                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                                         << 2U) 
                                                        | (((IData)(vlSelfRef.bs_alu_bypass) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.bs_bypass))))
                                                     : 
                                                    (((IData)(vlSelfRef.bs_mul_shift_value) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.bs_mul_src)))))))))
                                  : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3544)
                                      ? ((0x0068U == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))
                                          ? (IData)(vlSelfRef.bs_mul_operand)
                                          : ((0x0084U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ew_alu_src))
                                              : ((0x008cU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSelfRef.ew_alu_cvt_offset
                                                  : 
                                                 ((0x0090U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.ew_alu_cvt_scale)
                                                   : 
                                                  ((0x0094U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.ew_alu_cvt_truncate)
                                                    : 
                                                   ((0x0088U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.ew_alu_operand
                                                     : 
                                                    ((0x0080U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     ((((IData)(vlSelfRef.ew_lut_bypass) 
                                                        << 6U) 
                                                       | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                           << 5U) 
                                                          | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                             << 4U))) 
                                                      | (((IData)(vlSelfRef.ew_alu_algo) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.ew_alu_bypass) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.ew_bypass))))
                                                      : 
                                                     (((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ew_mul_src)))))))))
                                      : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3543)
                                          ? ((0x00a0U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? vlSelfRef.ew_mul_cvt_offset
                                              : ((0x00a4U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.ew_mul_cvt_scale)
                                                  : 
                                                 ((0x00a8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.ew_mul_cvt_truncate)
                                                   : 
                                                  ((0x009cU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.ew_mul_operand
                                                    : 
                                                   ((0x00acU 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelfRef.ew_truncate)
                                                     : 
                                                    ((0x004cU 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.dst_base_addr_high
                                                      : 
                                                     ((0x0048U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (vlSelfRef.dst_base_addr_low 
                                                       << 5U)
                                                       : 
                                                      (vlSelfRef.dst_batch_stride 
                                                       << 5U))))))))
                                          : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3542)
                                              ? ((0x00b4U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.dst_ram_type)
                                                  : 
                                                 ((0x0050U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (vlSelfRef.dst_line_stride 
                                                   << 5U)
                                                   : 
                                                  ((0x0054U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (vlSelfRef.dst_surface_stride 
                                                    << 5U)
                                                    : 
                                                   ((0x00b0U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelfRef.batch_number) 
                                                      << 8U) 
                                                     | ((((IData)(vlSelfRef.nan_to_zero) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.winograd) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.output_dst) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.flying_mode))))
                                                     : 
                                                    ((0x0038U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                                      : 
                                                     ((0x00dcU 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      ((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.perf_sat_en) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.perf_lut_en) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.perf_dma_en)))
                                                       : 
                                                      ((0x00f0U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_hybrid
                                                        : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_le_hit)))))))
                                              : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3541)
                                                  ? 
                                                 ((0x00f8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_lo_hit
                                                   : 
                                                  ((0x00e8U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_oflow
                                                    : 
                                                   ((0x00e4U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_uflow
                                                     : 
                                                    ((0x00ecU 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_out_saturation
                                                      : 
                                                     ((0x00e0U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_wdma_stall
                                                       : 
                                                      ((0x00ccU 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_unequal)
                                                        : 
                                                       ((0x00d4U 
                                                         == 
                                                         (0x00000ffcU 
                                                          & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_inf_input_num
                                                         : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_input_num)))))))
                                                  : 
                                                 ((0x00d8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_output_num
                                                   : 0U)))))));
    vlSelfRef.__PVT__nvdla_sdp_d_data_format_0_wren 
        = ((0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren 
        = ((0x0070U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren = 
        ((0x006cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren 
        = ((0x0078U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren 
        = ((0x005cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren = 
        ((0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren 
        = ((0x0064U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren 
        = ((0x0084U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren = 
        ((0x0080U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren 
        = ((0x0098U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren 
        = ((0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_perf_enable_0_wren 
        = ((0x00dcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
}
