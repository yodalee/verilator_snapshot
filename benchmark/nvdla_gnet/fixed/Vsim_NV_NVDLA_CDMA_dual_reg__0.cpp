// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CDMA_dual_reg___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0(Vsim_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_dual_reg___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arreggen_dump = (1U & VL_TESTPLUSARGS_I("arreggen_dump_wr"s));
    vlSelfRef.__PVT__arreggen_abort_on_rowr = (1U & VL_TESTPLUSARGS_I("arreggen_abort_on_rowr"s));
    vlSelfRef.__PVT__arreggen_abort_on_invalid_wr = 
        (1U & VL_TESTPLUSARGS_I("arreggen_abort_on_invalid_wr"s));
}

void Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__0(Vsim_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reg_wr_en) {
        if (((((((((0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                   | (0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                  | (0x005cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                 | (0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                | (0x00a4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
               | (0x00a8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
              | (0x00acU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
             | (0x00e8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_BANK_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.weight_bank) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.data_bank)),
                                 32,(((IData)(vlSelfRef.weight_bank) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.data_bank)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_BATCH_NUMBER_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.batches,
                                 32,(IData)(vlSelfRef.batches));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x005cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.batch_stride 
                                     << 5U),32,(vlSelfRef.batch_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CONV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.conv_y_stride) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.conv_x_stride)),
                                 32,(((IData)(vlSelfRef.conv_y_stride) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.conv_x_stride)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CVT_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.cvt_truncate) 
                                      << 4U) | (IData)(vlSelfRef.cvt_en)),
                                 32,(((IData)(vlSelfRef.cvt_truncate) 
                                      << 4U) | (IData)(vlSelfRef.cvt_en)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_offset,
                                 32,(IData)(vlSelfRef.cvt_offset));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00acU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_scale,
                                 32,(IData)(vlSelfRef.cvt_scale));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CYA_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.cya,32,vlSelfRef.cya);
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0030U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0038U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x0034U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x003cU == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x004cU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x002cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0018U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x001cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0030U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.datain_addr_high_0,
                                 32,vlSelfRef.datain_addr_high_0);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0038U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.datain_addr_high_1,
                                 32,vlSelfRef.datain_addr_high_1);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0034U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.datain_addr_low_0 
                                     << 5U),32,(vlSelfRef.datain_addr_low_0 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x003cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.datain_addr_low_1 
                                     << 5U),32,(vlSelfRef.datain_addr_low_1 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x004cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_MAP_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.surf_packed) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.line_packed)),
                                 32,(((IData)(vlSelfRef.surf_packed) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.line_packed)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x002cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.datain_ram_type,
                                 32,(IData)(vlSelfRef.datain_ram_type));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0018U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.pixel_sign_override) 
                                      << 0x00000014U) 
                                     | (((IData)(vlSelfRef.pixel_mapping) 
                                         << 0x00000010U) 
                                        | (((IData)(vlSelfRef.pixel_format) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.datain_format)))),
                                 32,(((IData)(vlSelfRef.pixel_sign_override) 
                                      << 0x00000014U) 
                                     | (((IData)(vlSelfRef.pixel_mapping) 
                                         << 0x00000010U) 
                                        | (((IData)(vlSelfRef.pixel_format) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.datain_format)))));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.datain_height) 
                                  << 0x00000010U) | (IData)(vlSelfRef.datain_width)),
                             32,(((IData)(vlSelfRef.datain_height) 
                                  << 0x00000010U) | (IData)(vlSelfRef.datain_width)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0020U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0024U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x0060U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x0064U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00ccU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x00d0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0044U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0020U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.datain_channel,
                                 32,(IData)(vlSelfRef.datain_channel));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0024U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_EXT_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.datain_height_ext) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.datain_width_ext)),
                                 32,(((IData)(vlSelfRef.datain_height_ext) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.datain_width_ext)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0060U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_ENTRY_PER_SLICE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.entries,
                                 32,(IData)(vlSelfRef.entries));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0064U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_FETCH_GRAIN_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.grains,
                                 32,(IData)(vlSelfRef.grains));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00ccU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_DATA_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1065, "");
                }
            } else if ((0x00d0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_WEIGHT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1069, "");
                }
            } else if ((0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.line_stride 
                                     << 5U),32,(vlSelfRef.line_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_LINE_UV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.uv_line_stride 
                                 << 5U),32,(vlSelfRef.uv_line_stride 
                                            << 5U));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0098U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x009cU == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x00a0U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x0014U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00c0U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x00c4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x00c8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0010U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0098U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MEAN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.mean_format,
                                 32,(IData)(vlSelfRef.mean_format));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x009cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.mean_gu) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.mean_ry)),
                                 32,(((IData)(vlSelfRef.mean_gu) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.mean_ry)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.mean_ax) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.mean_bv)),
                                 32,(((IData)(vlSelfRef.mean_ax) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.mean_bv)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0014U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.skip_weight_rls) 
                                      << 0x0000001cU) 
                                     | (((IData)(vlSelfRef.skip_data_rls) 
                                         << 0x00000018U) 
                                        | (((IData)(vlSelfRef.weight_reuse) 
                                            << 0x00000014U) 
                                           | (((IData)(vlSelfRef.data_reuse) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelfRef.proc_precision) 
                                                  << 0x0000000cU) 
                                                 | (((IData)(vlSelfRef.in_precision) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.conv_mode))))))),
                                 32,(((IData)(vlSelfRef.skip_weight_rls) 
                                      << 0x0000001cU) 
                                     | (((IData)(vlSelfRef.skip_data_rls) 
                                         << 0x00000018U) 
                                        | (((IData)(vlSelfRef.weight_reuse) 
                                            << 0x00000014U) 
                                           | (((IData)(vlSelfRef.data_reuse) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelfRef.proc_precision) 
                                                  << 0x0000000cU) 
                                                 | (((IData)(vlSelfRef.in_precision) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.conv_mode))))))));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00c0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_NAN_FLUSH_TO_ZERO_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.nan_to_zero,
                                 32,(IData)(vlSelfRef.nan_to_zero));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00c4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_DATA_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1080, "");
                }
            } else if ((0x00c8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_WEIGHT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1084, "");
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en,
                             32,(IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x00e0U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x00d8U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x00d4U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x00e4U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00dcU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x0028U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0050U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0054U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x00e0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_LATENCY_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1089, "");
                }
            } else if ((0x00d8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1093, "");
                }
            } else if ((0x00d4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.dma_en,
                                 32,(IData)(vlSelfRef.dma_en));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00e4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_LATENCY_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1098, "");
                }
            } else if ((0x00dcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1102, "");
                }
            } else if ((0x0028U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_PIXEL_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.pixel_y_offset) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.pixel_x_offset)),
                                 32,(((IData)(vlSelfRef.pixel_y_offset) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.pixel_x_offset)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0050U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_RESERVED_X_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.rsv_per_uv_line) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.rsv_per_line)),
                                 32,(((IData)(vlSelfRef.rsv_per_uv_line) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.rsv_per_line)));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_RESERVED_Y_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.rsv_y_index) 
                                  << 0x00000010U) | (IData)(vlSelfRef.rsv_height)),
                             32,(((IData)(vlSelfRef.rsv_y_index) 
                                  << 0x00000010U) | (IData)(vlSelfRef.rsv_height)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0048U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0078U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x007cU == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x0080U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x0068U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x0074U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x006cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0070U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0048U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_SURF_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.surf_stride 
                                     << 5U),32,(vlSelfRef.surf_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0078U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.weight_addr_high,
                                 32,vlSelfRef.weight_addr_high);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x007cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.weight_addr_low 
                                     << 5U),32,(vlSelfRef.weight_addr_low 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0080U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.weight_bytes 
                                     << 7U),32,(vlSelfRef.weight_bytes 
                                                << 7U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0068U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.weight_format,
                                 32,(IData)(vlSelfRef.weight_format));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0074U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.weight_ram_type,
                                 32,(IData)(vlSelfRef.weight_ram_type));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x006cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.byte_per_kernel,
                                 32,vlSelfRef.byte_per_kernel);
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.weight_kernel,
                             32,(IData)(vlSelfRef.weight_kernel));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x0084U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WGS_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.wgs_addr_high,
                             32,vlSelfRef.wgs_addr_high);
                Verilated::runFlushCallbacks();
            }
        } else if ((0x0088U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WGS_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.wgs_addr_low 
                                 << 5U),32,(vlSelfRef.wgs_addr_low 
                                            << 5U));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x008cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WMB_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.wmb_addr_high,
                             32,vlSelfRef.wmb_addr_high);
                Verilated::runFlushCallbacks();
            }
        } else if ((0x0090U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WMB_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.wmb_addr_low 
                                 << 5U),32,(vlSelfRef.wmb_addr_low 
                                            << 5U));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x0094U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WMB_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.wmb_bytes 
                                 << 7U),32,(vlSelfRef.wmb_bytes 
                                            << 7U));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x00b4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_ZERO_PADDING_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.pad_bottom) 
                                  << 0x00000018U) | 
                                 (((IData)(vlSelfRef.pad_top) 
                                   << 0x00000010U) 
                                  | (((IData)(vlSelfRef.pad_right) 
                                      << 8U) | (IData)(vlSelfRef.pad_left)))),
                             32,(((IData)(vlSelfRef.pad_bottom) 
                                  << 0x00000018U) | 
                                 (((IData)(vlSelfRef.pad_top) 
                                   << 0x00000010U) 
                                  | (((IData)(vlSelfRef.pad_right) 
                                      << 8U) | (IData)(vlSelfRef.pad_left)))));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x00b8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_ZERO_PADDING_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.pad_value,
                             32,(IData)(vlSelfRef.pad_value));
                Verilated::runFlushCallbacks();
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),12,
                             (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)),
                             32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                         >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1124, "");
            }
        }
    }
}

void Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__1(Vsim_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__nvdla_cdma_d_pixel_offset_0_wren) {
            vlSelfRef.pixel_y_offset = (7U & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x00000026U)));
            vlSelfRef.pixel_x_offset = (0x0000001fU 
                                        & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren) {
            vlSelfRef.rsv_per_uv_line = (0x000003ffU 
                                         & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x00000026U)));
            vlSelfRef.rsv_per_line = (0x000003ffU & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren) {
            vlSelfRef.rsv_y_index = (0x0000001fU & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                            >> 0x00000026U)));
            vlSelfRef.rsv_height = (7U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelfRef.pixel_mapping = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x00000026U)));
            vlSelfRef.pixel_format = (0x0000003fU & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x0000001eU)));
            vlSelfRef.datain_format = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x00000016U)));
            vlSelfRef.pixel_sign_override = (1U & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x0000002aU)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_zero_padding_0_wren) {
            vlSelfRef.pad_bottom = (0x0000003fU & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x0000002eU)));
            vlSelfRef.pad_top = (0x0000001fU & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x00000026U)));
            vlSelfRef.pad_right = (0x0000003fU & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                          >> 0x0000001eU)));
            vlSelfRef.pad_left = (0x0000001fU & (IData)(
                                                        (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelfRef.cvt_en = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren) {
            vlSelfRef.datain_width_ext = (0x00001fffU 
                                          & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x00000016U)));
            vlSelfRef.datain_height_ext = (0x00001fffU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x00000026U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_dain_map_0_wren) {
            vlSelfRef.line_packed = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x00000016U)));
            vlSelfRef.surf_packed = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x00000026U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelfRef.skip_data_rls = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x0000002eU)));
            vlSelfRef.weight_reuse = (1U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x0000002aU)));
            vlSelfRef.data_reuse = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x00000026U)));
            vlSelfRef.conv_mode = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x00000016U)));
            vlSelfRef.in_precision = (3U & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x0000001eU)));
            vlSelfRef.proc_precision = (3U & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x00000022U)));
            vlSelfRef.skip_weight_rls = (1U & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x00000032U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_bank_0_wren) {
            vlSelfRef.weight_bank = (0x0000000fU & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                            >> 0x00000026U)));
            vlSelfRef.data_bank = (0x0000000fU & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                          >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_mean_global_1_0_wren) {
            vlSelfRef.mean_ax = (0x0000ffffU & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x00000026U)));
            vlSelfRef.mean_bv = (0x0000ffffU & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_datain_size_0_0_wren) {
            vlSelfRef.datain_height = (0x00001fffU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x00000026U)));
            vlSelfRef.datain_width = (0x00001fffU & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_conv_stride_0_wren) {
            vlSelfRef.conv_x_stride = (7U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x00000016U)));
            vlSelfRef.conv_y_stride = (7U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x00000026U)));
        }
        if (((0x00e8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.cya = (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                     >> 0x00000016U));
        }
        if (((0x0060U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.entries = (0x00000fffU & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x00000016U)));
        }
        if (((0x00c0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.nan_to_zero = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
        if (((0x00d4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.dma_en = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x00000016U)));
        }
        if (((0x0064U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.grains = (0x00000fffU & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x00000016U)));
        }
        if (((0x0044U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.uv_line_stride = (0x07ffffffU 
                                        & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x0000001bU)));
        }
        if (((0x0078U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.weight_addr_high = (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x00000016U));
        }
        if (((0x008cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.wmb_addr_high = (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x00000016U));
        }
        if (((0x0084U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.wgs_addr_high = (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x00000016U));
        }
        if (((0x0088U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.wgs_addr_low = (0x07ffffffU & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x0000001bU)));
        }
        if (((0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.line_stride = (0x07ffffffU & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                            >> 0x0000001bU)));
        }
        if (((0x0080U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.weight_bytes = (0x01ffffffU & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x0000001dU)));
        }
        if (((0x0094U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.wmb_bytes = (0x001fffffU & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                          >> 0x0000001dU)));
        }
        if (((0x00b8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.pad_value = (0x0000ffffU & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                          >> 0x00000016U)));
        }
        if (((0x0070U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.weight_kernel = (0x00001fffU 
                                       & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x00000016U)));
        }
        if (((0x007cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.weight_addr_low = (0x07ffffffU 
                                         & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x0000001bU)));
        }
        if (((0x0090U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.wmb_addr_low = (0x07ffffffU & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x0000001bU)));
        }
        if (((0x0030U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.datain_addr_high_0 = (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x00000016U));
        }
        if (((0x0034U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.datain_addr_low_0 = (0x07ffffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x0000001bU)));
        }
        if (((0x005cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.batch_stride = (0x07ffffffU & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x0000001bU)));
        }
        if (((0x0048U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.surf_stride = (0x07ffffffU & (IData)(
                                                           (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                            >> 0x0000001bU)));
        }
        if (((0x0074U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.weight_ram_type = (1U & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x00000016U)));
        }
        if (((0x0020U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.datain_channel = (0x00001fffU 
                                        & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
        if (((0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.batches = (0x0000001fU & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x00000016U)));
        }
        if (((0x0068U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.weight_format = (1U & (IData)(
                                                    (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x00000016U)));
        }
        if (((0x002cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.datain_ram_type = (1U & (IData)(
                                                      (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_mean_global_0_0_wren) {
            vlSelfRef.mean_gu = (0x0000ffffU & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x00000026U)));
            vlSelfRef.mean_ry = (0x0000ffffU & (IData)(
                                                       (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x00000016U)));
        }
        if (((0x006cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.byte_per_kernel = (0x0003ffffU 
                                         & (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x00000016U)));
        }
        if (((0x0098U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.mean_format = (1U & (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x00000016U)));
        }
    } else {
        vlSelfRef.pixel_y_offset = 0U;
        vlSelfRef.rsv_per_uv_line = 0U;
        vlSelfRef.rsv_per_line = 0U;
        vlSelfRef.rsv_y_index = 0U;
        vlSelfRef.rsv_height = 0U;
        vlSelfRef.pixel_mapping = 0U;
        vlSelfRef.pad_bottom = 0U;
        vlSelfRef.cvt_en = 0U;
        vlSelfRef.datain_width_ext = 0U;
        vlSelfRef.line_packed = 0U;
        vlSelfRef.skip_data_rls = 0U;
        vlSelfRef.pad_top = 0U;
        vlSelfRef.weight_bank = 0U;
        vlSelfRef.weight_reuse = 0U;
        vlSelfRef.pad_right = 0U;
        vlSelfRef.mean_ax = 0U;
        vlSelfRef.surf_packed = 0U;
        vlSelfRef.pixel_x_offset = 0U;
        vlSelfRef.datain_height = 0U;
        vlSelfRef.data_reuse = 0U;
        vlSelfRef.conv_x_stride = 0U;
        vlSelfRef.pad_left = 0U;
        vlSelfRef.data_bank = 0U;
        vlSelfRef.conv_y_stride = 0U;
        vlSelfRef.cya = 0U;
        vlSelfRef.entries = 0U;
        vlSelfRef.nan_to_zero = 0U;
        vlSelfRef.dma_en = 0U;
        vlSelfRef.grains = 0U;
        vlSelfRef.uv_line_stride = 0U;
        vlSelfRef.weight_addr_high = 0U;
        vlSelfRef.wmb_addr_high = 0U;
        vlSelfRef.wgs_addr_high = 0U;
        vlSelfRef.wgs_addr_low = 0U;
        vlSelfRef.line_stride = 0U;
        vlSelfRef.weight_bytes = 0U;
        vlSelfRef.wmb_bytes = 0U;
        vlSelfRef.pad_value = 0U;
        vlSelfRef.weight_kernel = 0U;
        vlSelfRef.weight_addr_low = 0U;
        vlSelfRef.wmb_addr_low = 0U;
        vlSelfRef.datain_addr_high_0 = 0U;
        vlSelfRef.datain_addr_low_0 = 0U;
        vlSelfRef.batch_stride = 0U;
        vlSelfRef.pixel_format = 0x0cU;
        vlSelfRef.surf_stride = 0U;
        vlSelfRef.weight_ram_type = 0U;
        vlSelfRef.datain_channel = 0U;
        vlSelfRef.batches = 0U;
        vlSelfRef.datain_width = 0U;
        vlSelfRef.weight_format = 0U;
        vlSelfRef.datain_ram_type = 0U;
        vlSelfRef.datain_format = 0U;
        vlSelfRef.conv_mode = 0U;
        vlSelfRef.in_precision = 1U;
        vlSelfRef.proc_precision = 1U;
        vlSelfRef.mean_gu = 0U;
        vlSelfRef.mean_bv = 0U;
        vlSelfRef.mean_ry = 0U;
        vlSelfRef.byte_per_kernel = 0U;
        vlSelfRef.skip_weight_rls = 0U;
        vlSelfRef.datain_height_ext = 0U;
        vlSelfRef.pixel_sign_override = 0U;
        vlSelfRef.mean_format = 0U;
    }
}

void Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__2(Vsim_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((0x00acU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.cvt_scale = (0x0000ffffU & (IData)(
                                                         (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                          >> 0x00000016U)));
        }
        if (((0x00a8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.cvt_offset = (0x0000ffffU & (IData)(
                                                          (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x00000016U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelfRef.cvt_truncate = (0x0000003fU & (IData)(
                                                            (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x0000001aU)));
        }
        if (((0x0038U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.datain_addr_high_1 = (IData)(
                                                   (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x00000016U));
        }
        if (((0x003cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                         << 2U))) & (IData)(vlSelfRef.reg_wr_en))) {
            vlSelfRef.datain_addr_low_1 = (0x07ffffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x0000001bU)));
        }
    } else {
        vlSelfRef.cvt_scale = 0U;
        vlSelfRef.cvt_offset = 0U;
        vlSelfRef.cvt_truncate = 0U;
        vlSelfRef.datain_addr_high_1 = 0U;
        vlSelfRef.datain_addr_low_1 = 0U;
    }
}

void Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__3(Vsim_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3547 = (
                                                   ((0x0048U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x0078U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x007cU 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x0080U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x0068U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x0074U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x006cU 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0070U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3548 = (
                                                   ((0x00e0U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x00d8U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x00d4U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x00e4U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x00dcU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x0028U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0050U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0054U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3549 = (
                                                   ((0x0098U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x009cU 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x00a0U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x0014U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x00c0U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x00c4U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x00c8U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0010U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3550 = (
                                                   ((0x0020U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x0024U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x0060U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x0064U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x00ccU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x00d0U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0040U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x0044U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3551 = (
                                                   ((0x0030U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x0038U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x0034U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x003cU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x004cU 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x002cU 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x0018U 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x001cU 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3552 = (
                                                   ((0x00bcU 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x0058U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (((0x005cU 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U))) 
                                                       | (0x00b0U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | ((0x00a4U 
                                                          == 
                                                          (0x00000ffcU 
                                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U))) 
                                                         | ((0x00a8U 
                                                             == 
                                                             (0x00000ffcU 
                                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                 << 2U))) 
                                                            | ((0x00acU 
                                                                == 
                                                                (0x00000ffcU 
                                                                 & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                    << 2U))) 
                                                               | (0x00e8U 
                                                                  == 
                                                                  (0x00000ffcU 
                                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                                      << 2U))))))));
    vlSelfRef.reg_wr_en = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg_wr_en) 
                           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en)) 
                              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__select_d0)));
    vlSelfRef.reg_rd_data = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3552)
                              ? ((0x00bcU == (0x00000ffcU 
                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))
                                  ? (((IData)(vlSelfRef.weight_bank) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.data_bank))
                                  : ((0x0058U == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                      ? (IData)(vlSelfRef.batches)
                                      : ((0x005cU == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))
                                          ? (vlSelfRef.batch_stride 
                                             << 5U)
                                          : ((0x00b0U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.conv_y_stride) 
                                                  << 0x00000010U) 
                                                 | (IData)(vlSelfRef.conv_x_stride))
                                              : ((0x00a4U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (((IData)(vlSelfRef.cvt_truncate) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.cvt_en))
                                                  : 
                                                 ((0x00a8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.cvt_offset)
                                                   : 
                                                  ((0x00acU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.cvt_scale)
                                                    : vlSelfRef.cya)))))))
                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3551)
                                  ? ((0x0030U == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                      ? vlSelfRef.datain_addr_high_0
                                      : ((0x0038U == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))
                                          ? vlSelfRef.datain_addr_high_1
                                          : ((0x0034U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (vlSelfRef.datain_addr_low_0 
                                                 << 5U)
                                              : ((0x003cU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (vlSelfRef.datain_addr_low_1 
                                                  << 5U)
                                                  : 
                                                 ((0x004cU 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.surf_packed) 
                                                    << 0x00000010U) 
                                                   | (IData)(vlSelfRef.line_packed))
                                                   : 
                                                  ((0x002cU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.datain_ram_type)
                                                    : 
                                                   ((0x0018U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelfRef.pixel_sign_override) 
                                                      << 0x00000014U) 
                                                     | (((IData)(vlSelfRef.pixel_mapping) 
                                                         << 0x00000010U) 
                                                        | (((IData)(vlSelfRef.pixel_format) 
                                                            << 8U) 
                                                           | (IData)(vlSelfRef.datain_format))))
                                                     : 
                                                    (((IData)(vlSelfRef.datain_height) 
                                                      << 0x00000010U) 
                                                     | (IData)(vlSelfRef.datain_width)))))))))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3550)
                                      ? ((0x0020U == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))
                                          ? (IData)(vlSelfRef.datain_channel)
                                          : ((0x0024U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.datain_height_ext) 
                                                  << 0x00000010U) 
                                                 | (IData)(vlSelfRef.datain_width_ext))
                                              : ((0x0060U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.entries)
                                                  : 
                                                 ((0x0064U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.grains)
                                                   : 
                                                  ((0x00ccU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_data_num
                                                    : 
                                                   ((0x00d0U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_weight_num
                                                     : 
                                                    ((0x0040U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (vlSelfRef.line_stride 
                                                      << 5U)
                                                      : 
                                                     (vlSelfRef.uv_line_stride 
                                                      << 5U))))))))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3549)
                                          ? ((0x0098U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (IData)(vlSelfRef.mean_format)
                                              : ((0x009cU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (((IData)(vlSelfRef.mean_gu) 
                                                   << 0x00000010U) 
                                                  | (IData)(vlSelfRef.mean_ry))
                                                  : 
                                                 ((0x00a0U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.mean_ax) 
                                                    << 0x00000010U) 
                                                   | (IData)(vlSelfRef.mean_bv))
                                                   : 
                                                  ((0x0014U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelfRef.skip_weight_rls) 
                                                     << 0x0000001cU) 
                                                    | (((IData)(vlSelfRef.skip_data_rls) 
                                                        << 0x00000018U) 
                                                       | (((IData)(vlSelfRef.weight_reuse) 
                                                           << 0x00000014U) 
                                                          | (((IData)(vlSelfRef.data_reuse) 
                                                              << 0x00000010U) 
                                                             | (((IData)(vlSelfRef.proc_precision) 
                                                                 << 0x0000000cU) 
                                                                | (((IData)(vlSelfRef.in_precision) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.conv_mode)))))))
                                                    : 
                                                   ((0x00c0U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelfRef.nan_to_zero)
                                                     : 
                                                    ((0x00c4U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_data_num
                                                      : 
                                                     ((0x00c8U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_weight_num
                                                       : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en))))))))
                                          : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3548)
                                              ? ((0x00e0U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_latency
                                                  : 
                                                 ((0x00d8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_stall
                                                   : 
                                                  ((0x00d4U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.dma_en)
                                                    : 
                                                   ((0x00e4U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_latency
                                                     : 
                                                    ((0x00dcU 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_stall
                                                      : 
                                                     ((0x0028U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (((IData)(vlSelfRef.pixel_y_offset) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.pixel_x_offset))
                                                       : 
                                                      ((0x0050U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelfRef.rsv_per_uv_line) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.rsv_per_line))
                                                        : 
                                                       (((IData)(vlSelfRef.rsv_y_index) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.rsv_height)))))))))
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3547)
                                                  ? 
                                                 ((0x0048U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (vlSelfRef.surf_stride 
                                                   << 5U)
                                                   : 
                                                  ((0x0078U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.weight_addr_high
                                                    : 
                                                   ((0x007cU 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (vlSelfRef.weight_addr_low 
                                                     << 5U)
                                                     : 
                                                    ((0x0080U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (vlSelfRef.weight_bytes 
                                                      << 7U)
                                                      : 
                                                     ((0x0068U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? (IData)(vlSelfRef.weight_format)
                                                       : 
                                                      ((0x0074U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSelfRef.weight_ram_type)
                                                        : 
                                                       ((0x006cU 
                                                         == 
                                                         (0x00000ffcU 
                                                          & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSelfRef.byte_per_kernel
                                                         : (IData)(vlSelfRef.weight_kernel))))))))
                                                  : 
                                                 ((0x0084U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSelfRef.wgs_addr_high
                                                   : 
                                                  ((0x0088U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (vlSelfRef.wgs_addr_low 
                                                    << 5U)
                                                    : 
                                                   ((0x008cU 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.wmb_addr_high
                                                     : 
                                                    ((0x0090U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (vlSelfRef.wmb_addr_low 
                                                      << 5U)
                                                      : 
                                                     ((0x0094U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (vlSelfRef.wmb_bytes 
                                                       << 7U)
                                                       : 
                                                      ((0x00b4U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelfRef.pad_bottom) 
                                                         << 0x00000018U) 
                                                        | (((IData)(vlSelfRef.pad_top) 
                                                            << 0x00000010U) 
                                                           | (((IData)(vlSelfRef.pad_right) 
                                                               << 8U) 
                                                              | (IData)(vlSelfRef.pad_left))))
                                                        : 
                                                       ((0x00b8U 
                                                         == 
                                                         (0x00000ffcU 
                                                          & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? (IData)(vlSelfRef.pad_value)
                                                         : 0U)))))))))))));
    vlSelfRef.__PVT__nvdla_cdma_d_bank_0_wren = ((0x00bcU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))) 
                                                 & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_conv_stride_0_wren 
        = ((0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren = 
        ((0x00a4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_dain_map_0_wren = 
        ((0x004cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_format_0_wren 
        = ((0x0018U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_size_0_0_wren 
        = ((0x001cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren 
        = ((0x0024U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_mean_global_0_0_wren 
        = ((0x009cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_mean_global_1_0_wren 
        = ((0x00a0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_misc_cfg_0_wren = 
        ((0x0014U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_pixel_offset_0_wren 
        = ((0x0028U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren 
        = ((0x0050U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren 
        = ((0x0054U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_zero_padding_0_wren 
        = ((0x00b4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
}

void Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__0(Vsim_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reg_wr_en) {
        if (((((((((0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                   | (0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                  | (0x005cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                 | (0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                | (0x00a4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
               | (0x00a8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
              | (0x00acU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
             | (0x00e8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x00bcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_BANK_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.weight_bank) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.data_bank)),
                                 32,(((IData)(vlSelfRef.weight_bank) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.data_bank)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0058U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_BATCH_NUMBER_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.batches,
                                 32,(IData)(vlSelfRef.batches));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x005cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.batch_stride 
                                     << 5U),32,(vlSelfRef.batch_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CONV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.conv_y_stride) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.conv_x_stride)),
                                 32,(((IData)(vlSelfRef.conv_y_stride) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.conv_x_stride)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CVT_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.cvt_truncate) 
                                      << 4U) | (IData)(vlSelfRef.cvt_en)),
                                 32,(((IData)(vlSelfRef.cvt_truncate) 
                                      << 4U) | (IData)(vlSelfRef.cvt_en)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_offset,
                                 32,(IData)(vlSelfRef.cvt_offset));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00acU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.cvt_scale,
                                 32,(IData)(vlSelfRef.cvt_scale));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CYA_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.cya,32,vlSelfRef.cya);
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0030U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0038U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x0034U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x003cU == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x004cU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x002cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0018U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x001cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0030U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.datain_addr_high_0,
                                 32,vlSelfRef.datain_addr_high_0);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0038U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.datain_addr_high_1,
                                 32,vlSelfRef.datain_addr_high_1);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0034U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.datain_addr_low_0 
                                     << 5U),32,(vlSelfRef.datain_addr_low_0 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x003cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.datain_addr_low_1 
                                     << 5U),32,(vlSelfRef.datain_addr_low_1 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x004cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_MAP_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.surf_packed) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.line_packed)),
                                 32,(((IData)(vlSelfRef.surf_packed) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.line_packed)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x002cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.datain_ram_type,
                                 32,(IData)(vlSelfRef.datain_ram_type));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0018U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.pixel_sign_override) 
                                      << 0x00000014U) 
                                     | (((IData)(vlSelfRef.pixel_mapping) 
                                         << 0x00000010U) 
                                        | (((IData)(vlSelfRef.pixel_format) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.datain_format)))),
                                 32,(((IData)(vlSelfRef.pixel_sign_override) 
                                      << 0x00000014U) 
                                     | (((IData)(vlSelfRef.pixel_mapping) 
                                         << 0x00000010U) 
                                        | (((IData)(vlSelfRef.pixel_format) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.datain_format)))));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.datain_height) 
                                  << 0x00000010U) | (IData)(vlSelfRef.datain_width)),
                             32,(((IData)(vlSelfRef.datain_height) 
                                  << 0x00000010U) | (IData)(vlSelfRef.datain_width)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0020U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0024U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x0060U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x0064U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00ccU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x00d0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0044U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0020U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.datain_channel,
                                 32,(IData)(vlSelfRef.datain_channel));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0024U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_EXT_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.datain_height_ext) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.datain_width_ext)),
                                 32,(((IData)(vlSelfRef.datain_height_ext) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.datain_width_ext)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0060U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_ENTRY_PER_SLICE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.entries,
                                 32,(IData)(vlSelfRef.entries));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0064U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_FETCH_GRAIN_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.grains,
                                 32,(IData)(vlSelfRef.grains));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00ccU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_DATA_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1065, "");
                }
            } else if ((0x00d0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_WEIGHT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1069, "");
                }
            } else if ((0x0040U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.line_stride 
                                     << 5U),32,(vlSelfRef.line_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_LINE_UV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.uv_line_stride 
                                 << 5U),32,(vlSelfRef.uv_line_stride 
                                            << 5U));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0098U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x009cU == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x00a0U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x0014U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00c0U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x00c4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x00c8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0010U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0098U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MEAN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.mean_format,
                                 32,(IData)(vlSelfRef.mean_format));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x009cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.mean_gu) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.mean_ry)),
                                 32,(((IData)(vlSelfRef.mean_gu) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.mean_ry)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00a0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.mean_ax) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.mean_bv)),
                                 32,(((IData)(vlSelfRef.mean_ax) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.mean_bv)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0014U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.skip_weight_rls) 
                                      << 0x0000001cU) 
                                     | (((IData)(vlSelfRef.skip_data_rls) 
                                         << 0x00000018U) 
                                        | (((IData)(vlSelfRef.weight_reuse) 
                                            << 0x00000014U) 
                                           | (((IData)(vlSelfRef.data_reuse) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelfRef.proc_precision) 
                                                  << 0x0000000cU) 
                                                 | (((IData)(vlSelfRef.in_precision) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.conv_mode))))))),
                                 32,(((IData)(vlSelfRef.skip_weight_rls) 
                                      << 0x0000001cU) 
                                     | (((IData)(vlSelfRef.skip_data_rls) 
                                         << 0x00000018U) 
                                        | (((IData)(vlSelfRef.weight_reuse) 
                                            << 0x00000014U) 
                                           | (((IData)(vlSelfRef.data_reuse) 
                                               << 0x00000010U) 
                                              | (((IData)(vlSelfRef.proc_precision) 
                                                  << 0x0000000cU) 
                                                 | (((IData)(vlSelfRef.in_precision) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.conv_mode))))))));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00c0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_NAN_FLUSH_TO_ZERO_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.nan_to_zero,
                                 32,(IData)(vlSelfRef.nan_to_zero));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00c4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_DATA_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1080, "");
                }
            } else if ((0x00c8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_WEIGHT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1084, "");
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en,
                             32,(IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x00e0U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x00d8U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x00d4U == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x00e4U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x00dcU == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x0028U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x0050U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0054U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x00e0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_LATENCY_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1089, "");
                }
            } else if ((0x00d8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1093, "");
                }
            } else if ((0x00d4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.dma_en,
                                 32,(IData)(vlSelfRef.dma_en));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x00e4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_LATENCY_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1098, "");
                }
            } else if ((0x00dcU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)));
                    Verilated::runFlushCallbacks();
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1102, "");
                }
            } else if ((0x0028U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_PIXEL_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.pixel_y_offset) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.pixel_x_offset)),
                                 32,(((IData)(vlSelfRef.pixel_y_offset) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.pixel_x_offset)));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0050U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_RESERVED_X_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(((IData)(vlSelfRef.rsv_per_uv_line) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.rsv_per_line)),
                                 32,(((IData)(vlSelfRef.rsv_per_uv_line) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.rsv_per_line)));
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_RESERVED_Y_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.rsv_y_index) 
                                  << 0x00000010U) | (IData)(vlSelfRef.rsv_height)),
                             32,(((IData)(vlSelfRef.rsv_y_index) 
                                  << 0x00000010U) | (IData)(vlSelfRef.rsv_height)));
                Verilated::runFlushCallbacks();
            }
        } else if (((((((((0x0048U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U))) 
                          | (0x0078U == (0x00000ffcU 
                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                         | (0x007cU == (0x00000ffcU 
                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U)))) 
                        | (0x0080U == (0x00000ffcU 
                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                          << 2U)))) 
                       | (0x0068U == (0x00000ffcU & 
                                      ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                      (0x0074U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                     | (0x006cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                    | (0x0070U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))) {
            if ((0x0048U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_SURF_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.surf_stride 
                                     << 5U),32,(vlSelfRef.surf_stride 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0078U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.weight_addr_high,
                                 32,vlSelfRef.weight_addr_high);
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x007cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.weight_addr_low 
                                     << 5U),32,(vlSelfRef.weight_addr_low 
                                                << 5U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0080U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,(vlSelfRef.weight_bytes 
                                     << 7U),32,(vlSelfRef.weight_bytes 
                                                << 7U));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0068U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.weight_format,
                                 32,(IData)(vlSelfRef.weight_format));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x0074U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.weight_ram_type,
                                 32,(IData)(vlSelfRef.weight_ram_type));
                    Verilated::runFlushCallbacks();
                }
            } else if ((0x006cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x00000016U)),
                                 32,vlSelfRef.byte_per_kernel,
                                 32,vlSelfRef.byte_per_kernel);
                    Verilated::runFlushCallbacks();
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.weight_kernel,
                             32,(IData)(vlSelfRef.weight_kernel));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x0084U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WGS_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.wgs_addr_high,
                             32,vlSelfRef.wgs_addr_high);
                Verilated::runFlushCallbacks();
            }
        } else if ((0x0088U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WGS_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.wgs_addr_low 
                                 << 5U),32,(vlSelfRef.wgs_addr_low 
                                            << 5U));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x008cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WMB_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.wmb_addr_high,
                             32,vlSelfRef.wmb_addr_high);
                Verilated::runFlushCallbacks();
            }
        } else if ((0x0090U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WMB_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.wmb_addr_low 
                                 << 5U),32,(vlSelfRef.wmb_addr_low 
                                            << 5U));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x0094U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WMB_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(vlSelfRef.wmb_bytes 
                                 << 7U),32,(vlSelfRef.wmb_bytes 
                                            << 7U));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x00b4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_ZERO_PADDING_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,(((IData)(vlSelfRef.pad_bottom) 
                                  << 0x00000018U) | 
                                 (((IData)(vlSelfRef.pad_top) 
                                   << 0x00000010U) 
                                  | (((IData)(vlSelfRef.pad_right) 
                                      << 8U) | (IData)(vlSelfRef.pad_left)))),
                             32,(((IData)(vlSelfRef.pad_bottom) 
                                  << 0x00000018U) | 
                                 (((IData)(vlSelfRef.pad_top) 
                                   << 0x00000010U) 
                                  | (((IData)(vlSelfRef.pad_right) 
                                      << 8U) | (IData)(vlSelfRef.pad_left)))));
                Verilated::runFlushCallbacks();
            }
        } else if ((0x00b8U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_ZERO_PADDING_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x00000016U)),
                             32,vlSelfRef.pad_value,
                             32,(IData)(vlSelfRef.pad_value));
                Verilated::runFlushCallbacks();
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%Ntb_top.nvdla_top.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),12,
                             (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)),
                             32,(IData)((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                         >> 0x00000016U)));
                Verilated::runFlushCallbacks();
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                Verilated::runFlushCallbacks();
                VL_FINISH_MT("verilogSourceFiles/NV_NVDLA_CDMA_dual_reg.v", 1124, "");
            }
        }
    }
}

void Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__3(Vsim_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_wr_en = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg_wr_en) 
                           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en)) 
                              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__select_d1)));
    vlSelfRef.reg_rd_data = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3552)
                              ? ((0x00bcU == (0x00000ffcU 
                                              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))
                                  ? (((IData)(vlSelfRef.weight_bank) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.data_bank))
                                  : ((0x0058U == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                      ? (IData)(vlSelfRef.batches)
                                      : ((0x005cU == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))
                                          ? (vlSelfRef.batch_stride 
                                             << 5U)
                                          : ((0x00b0U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.conv_y_stride) 
                                                  << 0x00000010U) 
                                                 | (IData)(vlSelfRef.conv_x_stride))
                                              : ((0x00a4U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (((IData)(vlSelfRef.cvt_truncate) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.cvt_en))
                                                  : 
                                                 ((0x00a8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.cvt_offset)
                                                   : 
                                                  ((0x00acU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.cvt_scale)
                                                    : vlSelfRef.cya)))))))
                              : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3551)
                                  ? ((0x0030U == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                      ? vlSelfRef.datain_addr_high_0
                                      : ((0x0038U == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))
                                          ? vlSelfRef.datain_addr_high_1
                                          : ((0x0034U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (vlSelfRef.datain_addr_low_0 
                                                 << 5U)
                                              : ((0x003cU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (vlSelfRef.datain_addr_low_1 
                                                  << 5U)
                                                  : 
                                                 ((0x004cU 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.surf_packed) 
                                                    << 0x00000010U) 
                                                   | (IData)(vlSelfRef.line_packed))
                                                   : 
                                                  ((0x002cU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.datain_ram_type)
                                                    : 
                                                   ((0x0018U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelfRef.pixel_sign_override) 
                                                      << 0x00000014U) 
                                                     | (((IData)(vlSelfRef.pixel_mapping) 
                                                         << 0x00000010U) 
                                                        | (((IData)(vlSelfRef.pixel_format) 
                                                            << 8U) 
                                                           | (IData)(vlSelfRef.datain_format))))
                                                     : 
                                                    (((IData)(vlSelfRef.datain_height) 
                                                      << 0x00000010U) 
                                                     | (IData)(vlSelfRef.datain_width)))))))))
                                  : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3550)
                                      ? ((0x0020U == 
                                          (0x00000ffcU 
                                           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))
                                          ? (IData)(vlSelfRef.datain_channel)
                                          : ((0x0024U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.datain_height_ext) 
                                                  << 0x00000010U) 
                                                 | (IData)(vlSelfRef.datain_width_ext))
                                              : ((0x0060U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.entries)
                                                  : 
                                                 ((0x0064U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.grains)
                                                   : 
                                                  ((0x00ccU 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_data_num
                                                    : 
                                                   ((0x00d0U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_weight_num
                                                     : 
                                                    ((0x0040U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (vlSelfRef.line_stride 
                                                      << 5U)
                                                      : 
                                                     (vlSelfRef.uv_line_stride 
                                                      << 5U))))))))
                                      : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3549)
                                          ? ((0x0098U 
                                              == (0x00000ffcU 
                                                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (IData)(vlSelfRef.mean_format)
                                              : ((0x009cU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (((IData)(vlSelfRef.mean_gu) 
                                                   << 0x00000010U) 
                                                  | (IData)(vlSelfRef.mean_ry))
                                                  : 
                                                 ((0x00a0U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.mean_ax) 
                                                    << 0x00000010U) 
                                                   | (IData)(vlSelfRef.mean_bv))
                                                   : 
                                                  ((0x0014U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelfRef.skip_weight_rls) 
                                                     << 0x0000001cU) 
                                                    | (((IData)(vlSelfRef.skip_data_rls) 
                                                        << 0x00000018U) 
                                                       | (((IData)(vlSelfRef.weight_reuse) 
                                                           << 0x00000014U) 
                                                          | (((IData)(vlSelfRef.data_reuse) 
                                                              << 0x00000010U) 
                                                             | (((IData)(vlSelfRef.proc_precision) 
                                                                 << 0x0000000cU) 
                                                                | (((IData)(vlSelfRef.in_precision) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.conv_mode)))))))
                                                    : 
                                                   ((0x00c0U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelfRef.nan_to_zero)
                                                     : 
                                                    ((0x00c4U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_data_num
                                                      : 
                                                     ((0x00c8U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_weight_num
                                                       : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en))))))))
                                          : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3548)
                                              ? ((0x00e0U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_latency
                                                  : 
                                                 ((0x00d8U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_stall
                                                   : 
                                                  ((0x00d4U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.dma_en)
                                                    : 
                                                   ((0x00e4U 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_latency
                                                     : 
                                                    ((0x00dcU 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_stall
                                                      : 
                                                     ((0x0028U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (((IData)(vlSelfRef.pixel_y_offset) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.pixel_x_offset))
                                                       : 
                                                      ((0x0050U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelfRef.rsv_per_uv_line) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.rsv_per_line))
                                                        : 
                                                       (((IData)(vlSelfRef.rsv_y_index) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.rsv_height)))))))))
                                              : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.__VdfgRegularize_h6e95ff9d_0_3547)
                                                  ? 
                                                 ((0x0048U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (vlSelfRef.surf_stride 
                                                   << 5U)
                                                   : 
                                                  ((0x0078U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.weight_addr_high
                                                    : 
                                                   ((0x007cU 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (vlSelfRef.weight_addr_low 
                                                     << 5U)
                                                     : 
                                                    ((0x0080U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (vlSelfRef.weight_bytes 
                                                      << 7U)
                                                      : 
                                                     ((0x0068U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? (IData)(vlSelfRef.weight_format)
                                                       : 
                                                      ((0x0074U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSelfRef.weight_ram_type)
                                                        : 
                                                       ((0x006cU 
                                                         == 
                                                         (0x00000ffcU 
                                                          & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSelfRef.byte_per_kernel
                                                         : (IData)(vlSelfRef.weight_kernel))))))))
                                                  : 
                                                 ((0x0084U 
                                                   == 
                                                   (0x00000ffcU 
                                                    & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSelfRef.wgs_addr_high
                                                   : 
                                                  ((0x0088U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (vlSelfRef.wgs_addr_low 
                                                    << 5U)
                                                    : 
                                                   ((0x008cU 
                                                     == 
                                                     (0x00000ffcU 
                                                      & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.wmb_addr_high
                                                     : 
                                                    ((0x0090U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     (vlSelfRef.wmb_addr_low 
                                                      << 5U)
                                                      : 
                                                     ((0x0094U 
                                                       == 
                                                       (0x00000ffcU 
                                                        & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (vlSelfRef.wmb_bytes 
                                                       << 7U)
                                                       : 
                                                      ((0x00b4U 
                                                        == 
                                                        (0x00000ffcU 
                                                         & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelfRef.pad_bottom) 
                                                         << 0x00000018U) 
                                                        | (((IData)(vlSelfRef.pad_top) 
                                                            << 0x00000010U) 
                                                           | (((IData)(vlSelfRef.pad_right) 
                                                               << 8U) 
                                                              | (IData)(vlSelfRef.pad_left))))
                                                        : 
                                                       ((0x00b8U 
                                                         == 
                                                         (0x00000ffcU 
                                                          & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? (IData)(vlSelfRef.pad_value)
                                                         : 0U)))))))))))));
    vlSelfRef.__PVT__nvdla_cdma_d_bank_0_wren = ((0x00bcU 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))) 
                                                 & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_conv_stride_0_wren 
        = ((0x00b0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren = 
        ((0x00a4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_dain_map_0_wren = 
        ((0x004cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_format_0_wren 
        = ((0x0018U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_size_0_0_wren 
        = ((0x001cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren 
        = ((0x0024U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_mean_global_0_0_wren 
        = ((0x009cU == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_mean_global_1_0_wren 
        = ((0x00a0U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_misc_cfg_0_wren = 
        ((0x0014U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_pixel_offset_0_wren 
        = ((0x0028U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren 
        = ((0x0050U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren 
        = ((0x0054U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_zero_padding_0_wren 
        = ((0x00b4U == (0x00000ffcU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelfRef.reg_wr_en));
}
