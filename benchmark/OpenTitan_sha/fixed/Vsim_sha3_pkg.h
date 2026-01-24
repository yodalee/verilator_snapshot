// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_SHA3_PKG_H_
#define VERILATED_VSIM_SHA3_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_sha3_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 5> __PVT__KeccakRate = {{
        0x00000015U, 0x00000012U, 0x00000011U, 0x0000000dU,
        9U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 5> __PVT__KeccakBitCapacity = {{
        0x00000100U, 0x000001c0U, 0x00000200U, 0x00000300U,
        0x00000400U
    }};

    // CONSTRUCTORS
    Vsim_sha3_pkg(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_sha3_pkg();
    VL_UNCOPYABLE(Vsim_sha3_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
