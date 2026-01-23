// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_FLASH_CTRL_PKG_H_
#define VERILATED_VSIM_FLASH_CTRL_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_flash_ctrl_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__InfoTypeSize = {{
        0x0000000aU, 1U, 2U
    }};
    static constexpr VlUnpacked<CData/*7:0*/, 3> InfoPartitionEndAddr = {{
        9U, 0U, 1U
    }};
    static constexpr VlUnpacked<SData/*10:0*/, 2> SeedInfoPageSel = {{
        1U, 2U
    }};
    static constexpr VlUnpacked<IData/*21:0*/, 5> RmaWipeEntries = {{
        0x00100201U, 0x00100401U, 0x00100601U, 0x00000100U,
        0x00200100U
    }};

    // CONSTRUCTORS
    Vsim_flash_ctrl_pkg(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_flash_ctrl_pkg();
    VL_UNCOPYABLE(Vsim_flash_ctrl_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
