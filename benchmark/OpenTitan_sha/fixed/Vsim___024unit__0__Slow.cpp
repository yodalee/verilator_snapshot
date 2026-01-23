// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim___024unit___ctor_var_reset(Vsim___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim___024unit___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Venumtab_enum_name737.atDefault() = ""s;
    vlSelf->__Venumtab_enum_name737.at(0) = "SwTestStatusUnderReset"s;
    vlSelf->__Venumtab_enum_name737.at(7454) = "SwTestStatusInWfi"s;
    vlSelf->__Venumtab_enum_name737.at(17236) = "SwTestStatusInTest"s;
    vlSelf->__Venumtab_enum_name737.at(36877) = "SwTestStatusPassed"s;
    vlSelf->__Venumtab_enum_name737.at(45060) = "SwTestStatusBooted"s;
    vlSelf->__Venumtab_enum_name737.at(45143) = "SwTestStatusInBootRomHalt"s;
    vlSelf->__Venumtab_enum_name737.at(45200) = "SwTestStatusInBootRom"s;
    vlSelf->__Venumtab_enum_name737.at(47789) = "SwTestStatusFailed"s;
}
