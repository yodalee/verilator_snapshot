// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_sw_test_status_if___act_sequent__TOP__chip_sim_tb__DOT__u_sw_test_status_if__0(Vsim_sw_test_status_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_sw_test_status_if___act_sequent__TOP__chip_sim_tb__DOT__u_sw_test_status_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__clk_i) 
                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

void Vsim_sw_test_status_if___nba_sequent__TOP__chip_sim_tb__DOT__u_sw_test_status_if__0(Vsim_sw_test_status_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_sw_test_status_if___nba_sequent__TOP__chip_sim_tb__DOT__u_sw_test_status_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if ((((IData)(((0x0f000000U == (0x0f000000U 
                                        & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                       & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i))) 
              & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_sim_sram__DOT__gen_no_sram__DOT__u_tlul_sink__DOT__pending)) 
                 & (0U == (0x0e00U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])))) 
             & (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                  << 4U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_56.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                            >> 0x0000001cU)) == vlSelfRef.sw_test_status_addr))) {
            vlSelfRef.__PVT__sw_test_status_prev = vlSelfRef.__PVT__sw_test_status;
            vlSelfRef.__PVT__sw_test_status = (0x0000ffffU 
                                               & vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_316);
            if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__sw_test_status_prev) 
                              != (IData)(vlSelfRef.__PVT__sw_test_status))))) {
                __Vtemp_1 = Vsim___024unit::__Venumtab_enum_name737
                    .at((IData)(vlSelfRef.__PVT__sw_test_status));
                __Vtemp_2 = VL_SFORMATF_N_NX("SW test transitioned to %@.",0,
                                             -1,&(__Vtemp_1)) ;
                VL_WRITEF_NX("%0t: %0@\n",0,64,VL_TIME_UNITED_Q(1),
                             -12,-1,&(__Vtemp_2));
                Verilated::runFlushCallbacks();
                if (VL_UNLIKELY((vlSelfRef.sw_test_done))) {
                    __Vtemp_3 = VL_SFORMATF_N_NX("%Nchip_sim_tb.u_sw_test_status_if",0,
                                                 vlSymsp->name()) ;
                    VL_WRITEF_NX("[%0t] %%Error: sw_test_status_if.sv:65: Assertion failed in %Nchip_sim_tb.u_sw_test_status_if: %0t: %0@SW test status must not change after reaching the pass or fail state.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,-1,&(__Vtemp_3));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/sw_test_status_if.sv", 65, "");
                    __Vtemp_4 = VL_SFORMATF_N_NX("%Nchip_sim_tb.u_sw_test_status_if",0,
                                                 vlSymsp->name()) ;
                    VL_WRITEF_NX("[%0t] %%Error: sw_test_status_if.sv:66: Assertion failed in %Nchip_sim_tb.u_sw_test_status_if: %0t: %0@==== SW TEST FAILED ====\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,-1,&(__Vtemp_4));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/sw_test_status_if.sv", 66, "");
                }
                vlSelfRef.__PVT__in_terminal_state 
                    = ((0x900dU == (IData)(vlSelfRef.__PVT__sw_test_status)) 
                       | (0xbaadU == (IData)(vlSelfRef.__PVT__sw_test_status)));
                if (vlSelfRef.__PVT__in_terminal_state) {
                    vlSelfRef.__PVT__num_iterations 
                        = (vlSelfRef.__PVT__num_iterations 
                           - (IData)(1U));
                }
                vlSelfRef.sw_test_done = ((IData)(vlSelfRef.sw_test_done) 
                                          | ((IData)(vlSelfRef.__PVT__in_terminal_state) 
                                             & (0U 
                                                == vlSelfRef.__PVT__num_iterations)));
                if (vlSelfRef.sw_test_done) {
                    if (VL_LIKELY(((0x900dU == (IData)(vlSelfRef.__PVT__sw_test_status))))) {
                        if (VL_UNLIKELY(((0x4354U != (IData)(vlSelfRef.__PVT__sw_test_status_prev))))) {
                            __Vtemp_5 = Vsim___024unit::__Venumtab_enum_name737
                                .at((IData)(vlSelfRef.__PVT__sw_test_status));
                            __Vtemp_6 = Vsim___024unit::__Venumtab_enum_name737
                                .at((IData)(vlSelfRef.__PVT__sw_test_status_prev));
                            __Vtemp_7 = VL_SFORMATF_N_NX("%Nchip_sim_tb.u_sw_test_status_if",0,
                                                         vlSymsp->name()) ;
                            __Vtemp_8 = VL_SFORMATF_N_NX("SW test transitioned to %@ from an illegal state: %@.",0,
                                                         -1,
                                                         &(__Vtemp_5),
                                                         -1,
                                                         &(__Vtemp_6)) ;
                            VL_WRITEF_NX("[%0t] %%Error: sw_test_status_if.sv:78: Assertion failed in %Nchip_sim_tb.u_sw_test_status_if: %0t: %0@%@\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,-1,&(__Vtemp_7),
                                         -1,&(__Vtemp_8));
                            Verilated::runFlushCallbacks();
                            VL_STOP_MT("verilogSourceFiles/sw_test_status_if.sv", 78, "");
                            __Vtemp_9 = VL_SFORMATF_N_NX("%Nchip_sim_tb.u_sw_test_status_if",0,
                                                         vlSymsp->name()) ;
                            VL_WRITEF_NX("[%0t] %%Error: sw_test_status_if.sv:79: Assertion failed in %Nchip_sim_tb.u_sw_test_status_if: %0t: %0@==== SW TEST FAILED ====\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,-1,&(__Vtemp_9));
                            Verilated::runFlushCallbacks();
                            VL_STOP_MT("verilogSourceFiles/sw_test_status_if.sv", 79, "");
                        } else {
                            VL_WRITEF_NX("%0t: ==== SW TEST PASSED ====\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12);
                            Verilated::runFlushCallbacks();
                            vlSelfRef.sw_test_passed = 1U;
                        }
                    } else {
                        __Vtemp_10 = VL_SFORMATF_N_NX("%Nchip_sim_tb.u_sw_test_status_if",0,
                                                      vlSymsp->name()) ;
                        VL_WRITEF_NX("[%0t] %%Error: sw_test_status_if.sv:85: Assertion failed in %Nchip_sim_tb.u_sw_test_status_if: %0t: %0@==== SW TEST FAILED ====\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,-1,&(__Vtemp_10));
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("verilogSourceFiles/sw_test_status_if.sv", 85, "");
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__sw_test_status_prev = vlSelfRef.__PVT__sw_test_status;
        vlSelfRef.__PVT__sw_test_status = 0U;
    }
}

std::string VL_TO_STRING(const Vsim_sw_test_status_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_sw_test_status_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
