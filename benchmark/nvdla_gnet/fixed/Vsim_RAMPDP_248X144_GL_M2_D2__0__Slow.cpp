// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_RAMPDP_248X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__0(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X144_0_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__ITOP__DOT__latffclk = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__nvdla_gated_clk) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__UJ_clk_gate_core_0_432__DOT__qd));
    vlSelfRef.__PVT__ITOP__DOT__WRDCLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_LATB)) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__RECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RE_LATB)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ITOP__DOT__WECLK = ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__latffclk)) 
                                         & (IData)(vlSelfRef.__PVT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[0U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][0U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[1U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][1U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[2U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][2U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[3U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][3U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd0[4U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow0__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][4U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[0U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][0U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[1U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][1U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[2U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][2U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[3U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][3U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__rmuxd1[4U] = (((0x7bU 
                                                >= 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U)))
                                                ? vlSelfRef.__PVT__ITOP__DOT__iow1__DOT__arr
                                               [(0x0000007fU 
                                                 & ((IData)(vlSelfRef.__PVT__ITOP__DOT__RADR) 
                                                    >> 1U))][4U]
                                                : 0U) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__ITOP__DOT__ADR = (((- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK))) 
                                        & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                       | ((~ (- (IData)((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK)))) 
                                          & (IData)(vlSelfRef.__PVT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__ITOP__DOT__empadd = (IData)((0xf8U 
                                                  == 
                                                  (0xf8U 
                                                   & (IData)(vlSelfRef.__PVT__ITOP__DOT__ADR))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk0 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)) 
                                             & (~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__ITOP__DOT__WrClk1 = ((IData)(vlSelfRef.__PVT__ITOP__DOT__WECLK) 
                                          & ((~ (IData)(vlSelfRef.__PVT__ITOP__DOT__empadd)) 
                                             & (IData)(vlSelfRef.__PVT__ITOP__DOT__WAFF)));
}

VL_ATTR_COLD void Vsim_RAMPDP_248X144_GL_M2_D2___ctor_var_reset(Vsim_RAMPDP_248X144_GL_M2_D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_RAMPDP_248X144_GL_M2_D2___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->WE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4668325564236645225ull);
    vlSelf->CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192783415628501865ull);
    vlSelf->IDDQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1130225301473651705ull);
    vlSelf->SVOP_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 184968307436363472ull);
    vlSelf->SVOP_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9612690259849201187ull);
    vlSelf->SVOP_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1708810954687351682ull);
    vlSelf->SVOP_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7874834918431534372ull);
    vlSelf->SVOP_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2365343343208949488ull);
    vlSelf->SVOP_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12232406503343677013ull);
    vlSelf->SVOP_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12198607055614373760ull);
    vlSelf->SVOP_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3347377052855199463ull);
    vlSelf->WD_143 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3195103692777080328ull);
    vlSelf->WD_142 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15449778509622624595ull);
    vlSelf->WD_141 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13220398747303201216ull);
    vlSelf->WD_140 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7695787335544791224ull);
    vlSelf->WD_139 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5399314985803137382ull);
    vlSelf->WD_138 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13520995495972043363ull);
    vlSelf->WD_137 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12459029288037409669ull);
    vlSelf->WD_136 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17209176507607243406ull);
    vlSelf->WD_135 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3047260262186031594ull);
    vlSelf->WD_134 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14187714768113683494ull);
    vlSelf->WD_133 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2225197406907349709ull);
    vlSelf->WD_132 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13461422212446276749ull);
    vlSelf->WD_131 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4536507422458204784ull);
    vlSelf->WD_130 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2383429301298752313ull);
    vlSelf->WD_129 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3170765091062192239ull);
    vlSelf->WD_128 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9835679157634376545ull);
    vlSelf->WD_127 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8773712949699973947ull);
    vlSelf->WD_126 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14980626612866182423ull);
    vlSelf->WD_125 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8699003387038874688ull);
    vlSelf->WD_124 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7307386281957178204ull);
    vlSelf->WD_123 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5025958654538947004ull);
    vlSelf->WD_122 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8109881988812692807ull);
    vlSelf->WD_121 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14822394718474783658ull);
    vlSelf->WD_120 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17698627739687846254ull);
    vlSelf->WD_119 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5742667348103470790ull);
    vlSelf->WD_118 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4693596375700444821ull);
    vlSelf->WD_117 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17110129971155466901ull);
    vlSelf->WD_116 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3967303820032927245ull);
    vlSelf->WD_115 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13489133103754479643ull);
    vlSelf->WD_114 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5078836387216216501ull);
    vlSelf->WD_113 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4016870179281724703ull);
    vlSelf->WD_112 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10681784245854000617ull);
    vlSelf->WD_111 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17623155966106482085ull);
    vlSelf->WD_110 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 42107766996342573ull);
    vlSelf->WD_109 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 829443556759812691ull);
    vlSelf->WD_108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7494357623332040837ull);
    vlSelf->WD_107 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13978584335835325020ull);
    vlSelf->WD_106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4757527921050793928ull);
    vlSelf->WD_105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11260583209013400250ull);
    vlSelf->WD_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1947290751895873658ull);
    vlSelf->WD_103 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12521079319274900881ull);
    vlSelf->WD_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2749786458751345941ull);
    vlSelf->WD_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16788821504990193422ull);
    vlSelf->WD_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15397204399908335626ull);
    vlSelf->WD_99 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5295463404049640913ull);
    vlSelf->WD_98 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6232664826598839981ull);
    vlSelf->WD_97 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13626364284719454897ull);
    vlSelf->WD_96 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10996639977289372927ull);
    vlSelf->WD_95 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 822277777144340526ull);
    vlSelf->WD_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6928557937928782766ull);
    vlSelf->WD_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11512481479502889629ull);
    vlSelf->WD_92 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4864192360691291695ull);
    vlSelf->WD_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6764926143581968802ull);
    vlSelf->WD_90 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 796110321330813277ull);
    vlSelf->WD_89 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1459551409994782657ull);
    vlSelf->WD_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17276571176274303746ull);
    vlSelf->WD_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 730560885455340029ull);
    vlSelf->WD_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7160727983234540320ull);
    vlSelf->WD_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9061461766125079701ull);
    vlSelf->WD_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6546166953990181929ull);
    vlSelf->WD_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8446900736880842942ull);
    vlSelf->WD_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8181532806991256741ull);
    vlSelf->WD_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4378818697520343405ull);
    vlSelf->WD_80 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 299289842097057779ull);
    vlSelf->WD_79 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5737282681796235005ull);
    vlSelf->WD_78 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7638016464686936331ull);
    vlSelf->WD_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10826169544913674500ull);
    vlSelf->WD_76 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 441325127636975507ull);
    vlSelf->WD_75 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6758087505553117187ull);
    vlSelf->WD_74 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4525826981766929348ull);
    vlSelf->WD_73 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8057268547879214911ull);
    vlSelf->WD_72 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3586354240095826523ull);
    vlSelf->WD_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 511210393659932549ull);
    vlSelf->WD_70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8783592267224576290ull);
    vlSelf->WD_69 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5031004760862959508ull);
    vlSelf->WD_68 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6376943065304311122ull);
    vlSelf->WD_67 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13361905641532718926ull);
    vlSelf->WD_66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8890991333749385218ull);
    vlSelf->WD_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18125880792223256080ull);
    vlSelf->WD_64 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7951518592078272142ull);
    vlSelf->WD_63 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2193184986958839551ull);
    vlSelf->WD_62 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6332572553846608682ull);
    vlSelf->WD_61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9310243416941772292ull);
    vlSelf->WD_60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11210977199832398475ull);
    vlSelf->WD_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4215350900486222000ull);
    vlSelf->WD_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12487732774050729753ull);
    vlSelf->WD_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3275878158815130923ull);
    vlSelf->WD_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5500498878700395671ull);
    vlSelf->WD_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2425355032264533873ull);
    vlSelf->WD_54 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4326088815155137862ull);
    vlSelf->WD_53 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13675407768924065609ull);
    vlSelf->WD_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576141551814751839ull);
    vlSelf->WD_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3446159856021316182ull);
    vlSelf->WD_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13957195513583238106ull);
    vlSelf->WD_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3508048204120797337ull);
    vlSelf->WD_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5408781987011392740ull);
    vlSelf->WD_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6022096472565906938ull);
    vlSelf->WD_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7922830255456565236ull);
    vlSelf->WD_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4528853027877639716ull);
    vlSelf->WD_44 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13125121838436871239ull);
    vlSelf->WD_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 995140142643473518ull);
    vlSelf->WD_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5579063684217678845ull);
    vlSelf->WD_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9110505250329884598ull);
    vlSelf->WD_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4639590942546566234ull);
    vlSelf->WD_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7135065692723448572ull);
    vlSelf->WD_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9035799475614000354ull);
    vlSelf->WD_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11260420195499280916ull);
    vlSelf->WD_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2373477292690480322ull);
    vlSelf->WD_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9767176750811122753ull);
    vlSelf->WD_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 988585012013545546ull);
    vlSelf->WD_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14964414777939831606ull);
    vlSelf->WD_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5752560162704003352ull);
    vlSelf->WD_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16263595820265818652ull);
    vlSelf->WD_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4133614124472431588ull);
    vlSelf->WD_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12456122601146544919ull);
    vlSelf->WD_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8653408491675503567ull);
    vlSelf->WD_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8388040561785905173ull);
    vlSelf->WD_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10288774344676492395ull);
    vlSelf->WD_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 438299081526288964ull);
    vlSelf->WD_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3301540449326191376ull);
    vlSelf->WD_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5202274232216816002ull);
    vlSelf->WD_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5815588717771337888ull);
    vlSelf->WD_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10399512259345410650ull);
    vlSelf->WD_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1302087139404951201ull);
    vlSelf->WD_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16441663245758828905ull);
    vlSelf->WD_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10520944389982183418ull);
    vlSelf->WD_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7891220082552150587ull);
    vlSelf->WD_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9581471648311078529ull);
    vlSelf->WD_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3823138043191670088ull);
    vlSelf->WD_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12095519916756188990ull);
    vlSelf->WD_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7948492545967626339ull);
    vlSelf->WD_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10926163409062603713ull);
    vlSelf->WD_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 751801208917688683ull);
    vlSelf->WD_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13440211677507877008ull);
    vlSelf->WD_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2157828887673794491ull);
    vlSelf->WD_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 698500823530770596ull);
    vlSelf->WD_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3977073901198154829ull);
    vlSelf->WD_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3333134889320507823ull);
    vlSelf->WD_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14388244015935034702ull);
    vlSelf->WD_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 790526605577775072ull);
    vlSelf->WD_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17694046555875545186ull);
    vlSelf->WD_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4036004626672379364ull);
    vlSelf->WD_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15046197163566834499ull);
    vlSelf->WD_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1722255333519995531ull);
    vlSelf->RD_143 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3837499085725975212ull);
    vlSelf->RD_142 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4457903265177091888ull);
    vlSelf->RD_141 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5248781636535830423ull);
    vlSelf->RD_140 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 286846323803979574ull);
    vlSelf->RD_139 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6357433704449527479ull);
    vlSelf->RD_138 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4958854703764522472ull);
    vlSelf->RD_137 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10584259912201419823ull);
    vlSelf->RD_136 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12318884402570549595ull);
    vlSelf->RD_135 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11235848575572532444ull);
    vlSelf->RD_134 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3580050979508747923ull);
    vlSelf->RD_133 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14068459349699776788ull);
    vlSelf->RD_132 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 50202049691302033ull);
    vlSelf->RD_131 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12040003470487331157ull);
    vlSelf->RD_130 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8643892389421194061ull);
    vlSelf->RD_129 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14629815578014194168ull);
    vlSelf->RD_128 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13231236577329132099ull);
    vlSelf->RD_127 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3762771806971560814ull);
    vlSelf->RD_126 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2144522202425501280ull);
    vlSelf->RD_125 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1482450809690979102ull);
    vlSelf->RD_124 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16231178217385471766ull);
    vlSelf->RD_123 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2804932516979171192ull);
    vlSelf->RD_122 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322583923255913942ull);
    vlSelf->RD_121 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 986958854898421448ull);
    vlSelf->RD_120 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15827109630410168465ull);
    vlSelf->RD_119 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3366288745293485637ull);
    vlSelf->RD_118 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8549840052414115580ull);
    vlSelf->RD_117 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12456118114799553512ull);
    vlSelf->RD_116 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15909869751219944847ull);
    vlSelf->RD_115 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17009792543392697665ull);
    vlSelf->RD_114 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 774332559142142390ull);
    vlSelf->RD_113 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 362189776061343846ull);
    vlSelf->RD_112 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8354032861809100844ull);
    vlSelf->RD_111 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9144911233167801458ull);
    vlSelf->RD_110 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5652747430265216490ull);
    vlSelf->RD_109 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17017206798792840269ull);
    vlSelf->RD_108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 305087215452288657ull);
    vlSelf->RD_107 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7774721589884432204ull);
    vlSelf->RD_106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 453024092976785375ull);
    vlSelf->RD_105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12538878235609315990ull);
    vlSelf->RD_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8932284937411622740ull);
    vlSelf->RD_103 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11538916150089731611ull);
    vlSelf->RD_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3883118554025765601ull);
    vlSelf->RD_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12134809648634230811ull);
    vlSelf->RD_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8436792982618975771ull);
    vlSelf->RD_99 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12113880734350334872ull);
    vlSelf->RD_98 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11670719624677867052ull);
    vlSelf->RD_97 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17232417469174596078ull);
    vlSelf->RD_96 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 915266168945959486ull);
    vlSelf->RD_95 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10255396735985719225ull);
    vlSelf->RD_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18277574569662986524ull);
    vlSelf->RD_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 338903872942018013ull);
    vlSelf->RD_92 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12410179954027263015ull);
    vlSelf->RD_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15072127491424708877ull);
    vlSelf->RD_90 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4563665192123572774ull);
    vlSelf->RD_89 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7294045216285679945ull);
    vlSelf->RD_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2717889799936527745ull);
    vlSelf->RD_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6354572474614556397ull);
    vlSelf->RD_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13143365097601431708ull);
    vlSelf->RD_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13651438474590071890ull);
    vlSelf->RD_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3142976175288987861ull);
    vlSelf->RD_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5470823613530411317ull);
    vlSelf->RD_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7705657495577218558ull);
    vlSelf->RD_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13917178764927555778ull);
    vlSelf->RD_80 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7625606831571893123ull);
    vlSelf->RD_79 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7171155822187469755ull);
    vlSelf->RD_78 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7450370208585865823ull);
    vlSelf->RD_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4297479523968495886ull);
    vlSelf->RD_76 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1448084612677425404ull);
    vlSelf->RD_75 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1004923503005006088ull);
    vlSelf->RD_74 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 863173455140000549ull);
    vlSelf->RD_73 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14733762112500332661ull);
    vlSelf->RD_72 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5627148605830524007ull);
    vlSelf->RD_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2579499029778993380ull);
    vlSelf->RD_70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8791020299129285151ull);
    vlSelf->RD_69 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6100103154959022225ull);
    vlSelf->RD_68 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1680254657983134831ull);
    vlSelf->RD_67 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15550843315343573278ull);
    vlSelf->RD_66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2665797086130559384ull);
    vlSelf->RD_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10832937851129217205ull);
    vlSelf->RD_64 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14135520426651284363ull);
    vlSelf->RD_63 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2477568975928507832ull);
    vlSelf->RD_62 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2985642352917211454ull);
    vlSelf->RD_61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16206407585423898309ull);
    vlSelf->RD_60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13585871664723203341ull);
    vlSelf->RD_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6283639536605267057ull);
    vlSelf->RD_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5807789389584100040ull);
    vlSelf->RD_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1231633973234926977ull);
    vlSelf->RD_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9001310954589729803ull);
    vlSelf->RD_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17023488788267130222ull);
    vlSelf->RD_54 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17531562165255774700ull);
    vlSelf->RD_53 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12305583324052772645ull);
    vlSelf->RD_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15388495295713729712ull);
    vlSelf->RD_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11585781186242791792ull);
    vlSelf->RD_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16647813304171395489ull);
    vlSelf->RD_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1463804018540634382ull);
    vlSelf->RD_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5100486693218735331ull);
    vlSelf->RD_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7756285009528854497ull);
    vlSelf->RD_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13967806278879019173ull);
    vlSelf->RD_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15447575627506488063ull);
    vlSelf->RD_44 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4216737832134491300ull);
    vlSelf->RD_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12155019606542814143ull);
    vlSelf->RD_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12746989042800468617ull);
    vlSelf->RD_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2238526743499270744ull);
    vlSelf->RD_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11578657310538868066ull);
    vlSelf->RD_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2936947346734365112ull);
    vlSelf->RD_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3445020723723072830ull);
    vlSelf->RD_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2352036189196926327ull);
    vlSelf->RD_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16222624846557255095ull);
    vlSelf->RD_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7753678102173515586ull);
    vlSelf->RD_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15586718768016078005ull);
    vlSelf->RD_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15865933154414249041ull);
    vlSelf->RD_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10868813303801916520ull);
    vlSelf->RD_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5895194103808754797ull);
    vlSelf->RD_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13833475878217074386ull);
    vlSelf->RD_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16897956001535414999ull);
    vlSelf->RD_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13943319981678428121ull);
    vlSelf->RD_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16599118297988671675ull);
    vlSelf->RD_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17107191674977320097ull);
    vlSelf->RD_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10731723682352883666ull);
    vlSelf->RD_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11438051724101971643ull);
    vlSelf->RD_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15074734398780195311ull);
    vlSelf->RD_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4566272099478931974ull);
    vlSelf->RD_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4824141436580321530ull);
    vlSelf->RD_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7058975318627102142ull);
    vlSelf->RD_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16831288343294268709ull);
    vlSelf->RD_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4596065538935076833ull);
    vlSelf->RD_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6830899420981847100ull);
    vlSelf->RD_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3006769372410298396ull);
    vlSelf->RD_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10839810038252913601ull);
    vlSelf->RD_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5415576532289548623ull);
    vlSelf->RD_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18136676038228334715ull);
    vlSelf->RD_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924765846565680447ull);
    vlSelf->RD_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5007677818226589610ull);
    vlSelf->RD_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18228443050733308283ull);
    vlSelf->RD_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11285883497837141057ull);
    vlSelf->RD_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14880179901202082148ull);
    vlSelf->RD_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6188898104399819656ull);
    vlSelf->RD_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13147765902760449817ull);
    vlSelf->RD_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17620744721569357007ull);
    vlSelf->RD_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1197843465539861007ull);
    vlSelf->RD_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13973563876125086912ull);
    vlSelf->RD_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18446542694934048510ull);
    vlSelf->RD_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9641856178268755770ull);
    vlSelf->RD_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16714128696492365670ull);
    vlSelf->RE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8687078416072546629ull);
    vlSelf->RADR_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13482887095707743097ull);
    vlSelf->RADR_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16699439758473509679ull);
    vlSelf->RADR_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17322526011294571158ull);
    vlSelf->RADR_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17043645079211590698ull);
    vlSelf->RADR_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14535584952329002933ull);
    vlSelf->RADR_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17427225902668040256ull);
    vlSelf->RADR_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3677262645042491750ull);
    vlSelf->RADR_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14814465884411982546ull);
    vlSelf->WADR_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12761331047967355283ull);
    vlSelf->WADR_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12368586033534125162ull);
    vlSelf->WADR_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2678393547965152387ull);
    vlSelf->WADR_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17842890622958678136ull);
    vlSelf->WADR_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6635437795171749454ull);
    vlSelf->WADR_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11525176238836850697ull);
    vlSelf->WADR_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14789786927179751912ull);
    vlSelf->WADR_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15849991676839784344ull);
    vlSelf->SLEEP_EN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6907653577924469870ull);
    vlSelf->SLEEP_EN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10776085316934267920ull);
    vlSelf->SLEEP_EN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13528353244619972529ull);
    vlSelf->SLEEP_EN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10571695522259801809ull);
    vlSelf->SLEEP_EN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5218345697039378944ull);
    vlSelf->SLEEP_EN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13474251824603501735ull);
    vlSelf->SLEEP_EN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7438212596918924991ull);
    vlSelf->SLEEP_EN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13555511282087385708ull);
    vlSelf->RET_EN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15335480921433835294ull);
    vlSelf->__PVT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14222803279704465139ull);
    vlSelf->__PVT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13186250667163041980ull);
    vlSelf->__PVT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1998488790595241610ull);
    vlSelf->__PVT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5609030881195598433ull);
    vlSelf->__PVT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16734172825655326025ull);
    vlSelf->__PVT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15701428887501665035ull);
    vlSelf->__PVT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3390628522626487402ull);
    vlSelf->__PVT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18418016431028263519ull);
    vlSelf->__PVT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2059066234595000849ull);
    vlSelf->__PVT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4162830297282555971ull);
    vlSelf->__PVT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13441380941185181607ull);
    vlSelf->__PVT__ITOP__DOT__ADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15745603815418240510ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__WDQ_pr, __VscopeHash, 15761591322181655513ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__dout, __VscopeHash, 9076273213115856377ull);
    vlSelf->__PVT__ITOP__DOT__RD_rdnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17029718269901874823ull);
    vlSelf->__PVT__ITOP__DOT__empadd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10184800481870755875ull);
    vlSelf->__PVT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4755027397151743479ull);
    vlSelf->__PVT__ITOP__DOT__WrClk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13078525159083522099ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__rmuxd0, __VscopeHash, 12884034309190912602ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__rmuxd1, __VscopeHash, 9371767274147809993ull);
    vlSelf->ITOP__DOT____Vcellinp__iow0____pinNumber1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2578968063729581232ull);
    for (int __Vi0 = 0; __Vi0 < 124; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 14418191360003535688ull);
    }
    vlSelf->__PVT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7816149342431733580ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->ITOP__DOT__iow0__DOT____Vlvbound_h3c6e09cc__0, __VscopeHash, 16158188761905401130ull);
    for (int __Vi0 = 0; __Vi0 < 124; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__ITOP__DOT__iow1__DOT__arr[__Vi0], __VscopeHash, 18053956084718333372ull);
    }
    vlSelf->__PVT__ITOP__DOT__iow1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11414842937349277193ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->ITOP__DOT__iow1__DOT____Vlvbound_h3c6e09cc__0, __VscopeHash, 4539382708685388839ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__VdlyVal__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 3042058078067856211ull);
    vlSelf->__VdlyDim0__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3130700030927203296ull);
    vlSelf->__VdlySet__ITOP__DOT__iow0__DOT__arr__v0 = 0;
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__VdlyVal__ITOP__DOT__iow1__DOT__arr__v0, __VscopeHash, 9751840278074453319ull);
    vlSelf->__VdlyDim0__ITOP__DOT__iow1__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 563901265749606262ull);
    vlSelf->__VdlySet__ITOP__DOT__iow1__DOT__arr__v0 = 0;
}
