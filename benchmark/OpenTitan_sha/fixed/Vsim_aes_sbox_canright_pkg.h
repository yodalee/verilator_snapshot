// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim.h for the primary calling header

#ifndef VERILATED_VSIM_AES_SBOX_CANRIGHT_PKG_H_
#define VERILATED_VSIM_AES_SBOX_CANRIGHT_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_aes_sbox_canright_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsim__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*7:0*/, 8> A2X = {{
        0x98U, 0xf3U, 0xf2U, 0x48U, 9U, 0x81U, 0xa9U, 0xffU
    }};
    static constexpr VlUnpacked<CData/*7:0*/, 8> __PVT__X2A = {{
        0x64U, 0x78U, 0x6eU, 0x8cU, 0x68U, 0x29U, 0xdeU, 0x60U
    }};
    static constexpr VlUnpacked<CData/*7:0*/, 8> X2S = {{
        0x58U, 0x2dU, 0x9eU, 0x0bU, 0xdcU, 4U, 3U, 0x24U
    }};
    static constexpr VlUnpacked<CData/*7:0*/, 8> __PVT__S2X = {{
        0x8cU, 0x79U, 5U, 0xebU, 0x12U, 4U, 0x51U, 0x53U
    }};

    // CONSTRUCTORS
    Vsim_aes_sbox_canright_pkg(Vsim__Syms* symsp, const char* v__name);
    ~Vsim_aes_sbox_canright_pkg();
    VL_UNCOPYABLE(Vsim_aes_sbox_canright_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
