// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vsim___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"MuBi4True", "MuBi4False"};
        const char* __VenumItemValues[]
        = {"110", "1001"};
        tracep->declDTypeEnum(1, "prim_mubi_pkg::mubi4_t", 2, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"On", "Off"};
        const char* __VenumItemValues[]
        = {"101", "1010"};
        tracep->declDTypeEnum(2, "lc_ctrl_pkg::lc_tx_t", 2, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SramType2p", "SramType1r1w"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(3, "spi_device_pkg::sram_type_e", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SBoxImplLut", "SBoxImplCanright", "SBoxImplCanrightMasked", 
                                "SBoxImplCanrightMaskedNoreuse", 
                                "SBoxImplDom"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(4, "aes_pkg::sbox_impl_e", 5, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RegFileFF", "RegFileFPGA"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(5, "otbn_pkg::regfile_e", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RV32MNone", "RV32MSlow", "RV32MFast", "RV32MSingleCycle"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(6, "ibex_pkg::rv32m_e", 4, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RV32BNone", "RV32BBalanced", "RV32BOTEarlGrey", 
                                "RV32BFull"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(7, "ibex_pkg::rv32b_e", 4, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RegFileFF", "RegFileFPGA", "RegFileLatch"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(8, "ibex_pkg::regfile_e", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MuBi8True", "MuBi8False"};
        const char* __VenumItemValues[]
        = {"10010110", "1101001"};
        tracep->declDTypeEnum(9, "prim_mubi_pkg::mubi8_t", 2, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PWRDN", "PWRUP", "ONEST_0", "ONEST_021", 
                                "ONEST_1", "ONEST_DONE", 
                                "LP_0", "LP_021", "LP_1", 
                                "LP_EVAL", "LP_SLP", 
                                "LP_PWRUP", "NP_0", 
                                "NP_021", "NP_1", "NP_EVAL", 
                                "NP_DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000"};
        tracep->declDTypeEnum(10, "adc_ctrl_pkg::fsm_state_e", 17, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SwAccessRW", "SwAccessRO", "SwAccessWO", 
                                "SwAccessW1C", "SwAccessW1S", 
                                "SwAccessW0C", "SwAccessRC"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(11, "prim_subreg_pkg::sw_access_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelSwReq", "SelHwReq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(12, "prim_reg_cdc_arb.req_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(13, "prim_reg_cdc_arb.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelSwReq", "SelHwReq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(14, "prim_reg_cdc_arb.req_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(15, "prim_reg_cdc_arb.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelSwReq", "SelHwReq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(16, "prim_reg_cdc_arb.req_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(17, "prim_reg_cdc_arb.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ImplGeneric", "ImplXilinx", "ImplXilinx_ultrascale"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(18, "prim_pkg::impl_e", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AccessAck", "AccessAckData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(19, "tlul_pkg::tl_d_op_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AES_ENC", "AES_DEC"};
        const char* __VenumItemValues[]
        = {"1", "10"};
        tracep->declDTypeEnum(20, "aes_pkg::aes_op_e", 2, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AES_ECB", "AES_CBC", "AES_CFB", "AES_OFB", 
                                "AES_CTR", "AES_NONE"};
        const char* __VenumItemValues[]
        = {"1", "10", "100", "1000", "10000", "100000"};
        tracep->declDTypeEnum(21, "aes_pkg::aes_mode_e", 6, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CIPH_FWD", "CIPH_INV"};
        const char* __VenumItemValues[]
        = {"1", "10"};
        tracep->declDTypeEnum(22, "aes_pkg::ciph_op_e", 2, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AES_128", "AES_192", "AES_256"};
        const char* __VenumItemValues[]
        = {"1", "10", "100"};
        tracep->declDTypeEnum(23, "aes_pkg::key_len_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PER_1", "PER_64", "PER_8K"};
        const char* __VenumItemValues[]
        = {"1", "10", "100"};
        tracep->declDTypeEnum(24, "aes_pkg::prs_rate_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SI_ZERO", "SI_DATA"};
        const char* __VenumItemValues[]
        = {"11", "100"};
        tracep->declDTypeEnum(25, "aes_pkg::si_sel_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ADD_SI_ZERO", "ADD_SI_IV"};
        const char* __VenumItemValues[]
        = {"11", "100"};
        tracep->declDTypeEnum(26, "aes_pkg::add_si_sel_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"KEY_INIT_INPUT", "KEY_INIT_KEYMGR", "KEY_INIT_CLEAR"};
        const char* __VenumItemValues[]
        = {"1110", "11000", "1"};
        tracep->declDTypeEnum(27, "aes_pkg::key_init_sel_e", 3, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IV_INPUT", "IV_DATA_OUT", "IV_DATA_OUT_RAW", 
                                "IV_DATA_IN_PREV", 
                                "IV_CTR", "IV_CLEAR"};
        const char* __VenumItemValues[]
        = {"11101", "110000", "1000", "11", "111110", 
                                "100101"};
        tracep->declDTypeEnum(28, "aes_pkg::iv_sel_e", 6, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SP2V_HIGH", "SP2V_LOW"};
        const char* __VenumItemValues[]
        = {"11", "100"};
        tracep->declDTypeEnum(29, "aes_pkg::sp2v_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DIP_DATA_IN", "DIP_CLEAR"};
        const char* __VenumItemValues[]
        = {"11", "100"};
        tracep->declDTypeEnum(30, "aes_pkg::dip_sel_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ADD_SO_ZERO", "ADD_SO_IV", "ADD_SO_DIP"};
        const char* __VenumItemValues[]
        = {"1110", "11000", "1"};
        tracep->declDTypeEnum(31, "aes_pkg::add_so_sel_e", 3, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MUX2_SEL_0", "MUX2_SEL_1"};
        const char* __VenumItemValues[]
        = {"11", "100"};
        tracep->declDTypeEnum(32, "aes_pkg::mux2_sel_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MUX3_SEL_0", "MUX3_SEL_1", "MUX3_SEL_2"};
        const char* __VenumItemValues[]
        = {"1110", "11000", "1"};
        tracep->declDTypeEnum(33, "aes_pkg::mux3_sel_e", 3, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"STATE_INIT", "STATE_ROUND", "STATE_CLEAR"};
        const char* __VenumItemValues[]
        = {"1110", "11000", "1"};
        tracep->declDTypeEnum(34, "aes_pkg::state_sel_e", 3, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ADD_RK_INIT", "ADD_RK_ROUND", "ADD_RK_FINAL"};
        const char* __VenumItemValues[]
        = {"1110", "11000", "1"};
        tracep->declDTypeEnum(35, "aes_pkg::add_rk_sel_e", 3, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"KEY_FULL_ENC_INIT", "KEY_FULL_DEC_INIT", 
                                "KEY_FULL_ROUND", "KEY_FULL_CLEAR"};
        const char* __VenumItemValues[]
        = {"1110", "11000", "1", "10111"};
        tracep->declDTypeEnum(36, "aes_pkg::key_full_sel_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"KEY_DEC_EXPAND", "KEY_DEC_CLEAR"};
        const char* __VenumItemValues[]
        = {"11", "100"};
        tracep->declDTypeEnum(37, "aes_pkg::key_dec_sel_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"KEY_WORDS_0123", "KEY_WORDS_2345", "KEY_WORDS_4567", 
                                "KEY_WORDS_ZERO"};
        const char* __VenumItemValues[]
        = {"1110", "11000", "1", "10111"};
        tracep->declDTypeEnum(38, "aes_pkg::key_words_sel_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ROUND_KEY_DIRECT", "ROUND_KEY_MIXED"};
        const char* __VenumItemValues[]
        = {"11", "100"};
        tracep->declDTypeEnum(39, "aes_pkg::round_key_sel_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SeedTypeKeyIv", "SeedTypeStateFull", "SeedTypeStatePartial"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(40, "prim_trivium_pkg::seed_type_e", 3, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CIPHER_CTRL_IDLE", "CIPHER_CTRL_INIT", 
                                "CIPHER_CTRL_ROUND", 
                                "CIPHER_CTRL_FINISH", 
                                "CIPHER_CTRL_PRNG_RESEED", 
                                "CIPHER_CTRL_CLEAR_S", 
                                "CIPHER_CTRL_CLEAR_KD", 
                                "CIPHER_CTRL_ERROR"};
        const char* __VenumItemValues[]
        = {"1001", "100011", "111101", "10000", "100100", 
                                "111010", "1110", "10111"};
        tracep->declDTypeEnum(41, "aes_pkg::aes_cipher_ctrl_e", 8, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MUX4_SEL_0", "MUX4_SEL_1", "MUX4_SEL_2", 
                                "MUX4_SEL_3"};
        const char* __VenumItemValues[]
        = {"1110", "11000", "1", "10111"};
        tracep->declDTypeEnum(42, "aes_pkg::mux4_sel_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CTRL_IDLE", "CTRL_LOAD", "CTRL_PRNG_UPDATE", 
                                "CTRL_PRNG_RESEED", 
                                "CTRL_FINISH", "CTRL_CLEAR_I", 
                                "CTRL_CLEAR_CO", "CTRL_ERROR"};
        const char* __VenumItemValues[]
        = {"1001", "100011", "111101", "10000", "100100", 
                                "111010", "1110", "10111"};
        tracep->declDTypeEnum(43, "aes_pkg::aes_ctrl_e", 8, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CTR_IDLE", "CTR_INCR", "CTR_ERROR"};
        const char* __VenumItemValues[]
        = {"1110", "11000", "1"};
        tracep->declDTypeEnum(44, "aes_pkg::aes_ctr_e", 3, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MUX6_SEL_0", "MUX6_SEL_1", "MUX6_SEL_2", 
                                "MUX6_SEL_3", "MUX6_SEL_4", 
                                "MUX6_SEL_5"};
        const char* __VenumItemValues[]
        = {"11101", "110000", "1000", "11", "111110", 
                                "100101"};
        tracep->declDTypeEnum(45, "aes_pkg::mux6_sel_e", 6, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"EVEN", "ODD"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(46, "prim_sync_reqack.sync_reqack_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Timeout", "Terminal", "Phase0", 
                                "Phase1", "Phase2", 
                                "Phase3", "FsmError"};
        const char* __VenumItemValues[]
        = {"0", "1", "11", "100", "101", "110", "111", 
                                "10"};
        tracep->declDTypeEnum(47, "alert_handler_pkg::cstate_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IdleSt", "TimeoutSt", "Phase0St", "Phase1St", 
                                "Phase2St", "Phase3St", 
                                "TerminalSt", "FsmErrorSt"};
        const char* __VenumItemValues[]
        = {"1011011010", "100110", "1110000101", "101010100", 
                                "11001", "1001100001", 
                                "1101111111", "111101000"};
        tracep->declDTypeEnum(48, "alert_handler_esc_timer.state_e", 8, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "CheckEscRespLo", "CheckEscRespHi", 
                                "CheckPingResp0", "CheckPingResp1", 
                                "CheckPingResp2", "CheckPingResp3"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(49, "prim_esc_sender.fsm_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"InitSt", "AlertWaitSt", "AlertPingSt", 
                                "EscWaitSt", "EscPingSt", 
                                "FsmErrorSt"};
        const char* __VenumItemValues[]
        = {"11001011", "110000000", "101110001", "10110110", 
                                "11101", "101101110"};
        tracep->declDTypeEnum(50, "alert_handler_ping_timer.state_e", 6, 9, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelSwReq", "SelHwReq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(51, "prim_reg_cdc_arb.req_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(52, "prim_reg_cdc_arb.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelSwReq", "SelHwReq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(53, "prim_reg_cdc_arb.req_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(54, "prim_reg_cdc_arb.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StDisable", "StEnabling", "StEnable", "StDisabling"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(55, "prim_clock_meas.meas_chk_fsm_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StDisable", "StEnabling", "StEnable", "StDisabling"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(56, "prim_clock_meas.meas_chk_fsm_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StDisable", "StEnabling", "StEnable", "StDisabling"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(57, "prim_clock_meas.meas_chk_fsm_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelSwReq", "SelHwReq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(58, "prim_reg_cdc_arb.req_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(59, "prim_reg_cdc_arb.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CMD_STS_SUCCESS", "CMD_STS_INVALID_ACMD", 
                                "CMD_STS_INVALID_GEN_CMD", 
                                "CMD_STS_INVALID_CMD_SEQ", 
                                "CMD_STS_RESEED_CNT_EXCEEDED", 
                                "CMD_STS_UNDRIVEN"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "zzz"};
        tracep->declDTypeEnum(60, "csrng_pkg::csrng_cmd_sts_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ReqIdle", "ReqSend", "ESHalt", "ReqError"};
        const char* __VenumItemValues[]
        = {"1101", "11", "11000", "10110"};
        tracep->declDTypeEnum(61, "csrng_ctr_drbg_gen.state_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ReqIdle", "ReqSend", "ESHalt", "BEError"};
        const char* __VenumItemValues[]
        = {"11000", "10011", "1110", "101"};
        tracep->declDTypeEnum(62, "csrng_ctr_drbg_upd.blk_enc_state_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AckIdle", "Load", "Shift", "OBError"};
        const char* __VenumItemValues[]
        = {"110110", "110001", "1001", "11100"};
        tracep->declDTypeEnum(63, "csrng_ctr_drbg_upd.outblk_state_e", 4, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MainSmIdle", "MainSmParseCmd", "MainSmInstantPrep", 
                                "MainSmInstantReq", 
                                "MainSmReseedPrep", 
                                "MainSmReseedReq", 
                                "MainSmGeneratePrep", 
                                "MainSmGenerateReq", 
                                "MainSmUpdatePrep", 
                                "MainSmUpdateReq", 
                                "MainSmUninstantPrep", 
                                "MainSmUninstantReq", 
                                "MainSmClrAData", "MainSmCmdCompWait", 
                                "MainSmError"};
        const char* __VenumItemValues[]
        = {"1001110", "10111011", "11000001", "1010100", 
                                "11011101", "1011011", 
                                "11101111", "100100", 
                                "110001", "10010000", 
                                "11110110", "1100011", 
                                "10", "10111100", "1111000"};
        tracep->declDTypeEnum(64, "csrng_pkg::main_sm_state_e", 15, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Wait", "Error"};
        const char* __VenumItemValues[]
        = {"11101", "101100", "10"};
        tracep->declDTypeEnum(65, "entropy_src_ack_sm_pkg::state_e", 3, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "BootHTRunning", "BootPostHTChk", 
                                "BootPhaseDone", "StartupHTStart", 
                                "StartupPhase1", "StartupPass1", 
                                "StartupFail1", "ContHTStart", 
                                "ContHTRunning", "FWInsertStart", 
                                "FWInsertMsg", "Sha3MsgDone", 
                                "Sha3Process", "Sha3Valid", 
                                "Sha3Done", "AlertState", 
                                "AlertHang", "Error"};
        const char* __VenumItemValues[]
        = {"11110101", "111010010", "101101110", "10001110", 
                                "101100", "100000001", 
                                "110100101", "10111", 
                                "1000000", "110100010", 
                                "11000011", "1011001", 
                                "100001111", "11111000", 
                                "10111111", "110011000", 
                                "111001101", "111111011", 
                                "1110011"};
        tracep->declDTypeEnum(66, "entropy_src_main_sm_pkg::state_e", 19, 9, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Sha3", "Shake", "CShake"};
        const char* __VenumItemValues[]
        = {"0", "10", "11"};
        tracep->declDTypeEnum(67, "sha3_pkg::sha3_mode_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"L128", "L224", "L256", "L384", "L512"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(68, "sha3_pkg::keccak_strength_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StAbsorb", "StSqueeze", "StManualRun", 
                                "StFlush", "StError"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(69, "sha3_pkg::sha3_st_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MuxGuard", "MuxRelease"};
        const char* __VenumItemValues[]
        = {"10", "101"};
        tracep->declDTypeEnum(70, "sha3.state_mux_sel_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle_sparse", "StAbsorb_sparse", "StSqueeze_sparse", 
                                "StManualRun_sparse", 
                                "StFlush_sparse", "StTerminalError_sparse"};
        const char* __VenumItemValues[]
        = {"101100", "100001", "1011", "10000", "110", 
                                "111010"};
        tracep->declDTypeEnum(71, "sha3_pkg::sha3_st_sparse_e", 6, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"KeccakStIdle", "KeccakStActive", "KeccakStPhase1", 
                                "KeccakStPhase2Cycle1", 
                                "KeccakStPhase2Cycle2", 
                                "KeccakStPhase2Cycle3", 
                                "KeccakStError", "KeccakStTerminalError"};
        const char* __VenumItemValues[]
        = {"11111", "100", "101101", "11", "11000", 
                                "101010", "110001", 
                                "110110"};
        tracep->declDTypeEnum(72, "sha3_pkg::keccak_st_e", 8, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MuxNone", "MuxFifo", "MuxPrefix", "MuxFuncPad", 
                                "MuxZeroEnd"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(73, "sha3pad.mux_sel_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StPadIdle", "StPrefix", "StPrefixWait", 
                                "StMessage", "StMessageWait", 
                                "StPad", "StPadRun", 
                                "StPad01", "StPadFlush", 
                                "StTerminalError"};
        const char* __VenumItemValues[]
        = {"1000010", "111100", "1001100", "100101", 
                                "1111", "1111010", 
                                "11001", "1101001", 
                                "1010111", "110011"};
        tracep->declDTypeEnum(74, "sha3pad.pad_st_e", 10, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FlashErasePage", "FlashEraseBank"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(75, "flash_ctrl_pkg::flash_erase_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FlashProgNormal", "FlashProgRepair"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(76, "flash_ctrl_pkg::flash_prog_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PhaseSeed", "PhaseRma", "PhaseNone", "PhaseInvalid"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(77, "flash_ctrl_pkg::flash_lcmgr_phase_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NoneSel", "SwSel", "HwSel"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(78, "flash_ctrl_pkg::flash_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FlashOpRead", "FlashOpProgram", "FlashOpErase", 
                                "FlashOpInvalid"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(79, "flash_ctrl_pkg::flash_op_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FlashPartData", "FlashPartInfo"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(80, "flash_ctrl_pkg::flash_part_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StReset", "StHw", "StSwActive", "StSwIdle", 
                                "StDisabled"};
        const char* __VenumItemValues[]
        = {"11010110", "1111101110", "1100101001", 
                                "1000000010", "100010101"};
        tracep->declDTypeEnum(81, "flash_ctrl_arb.arb_state_e", 5, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ScrambleOp", "DeScrambleOp"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(82, "flash_phy_pkg::cipher_ops_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StNorm", "StErr"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(83, "flash_ctrl_prog.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StNorm", "StErr"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(84, "flash_ctrl_rd.state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StReqAddrKey", "StReqDataKey", 
                                "StReadSeeds", "StReadEval", 
                                "StWait", "StEntropyReseed", 
                                "StRmaWipe", "StRmaRsp", 
                                "StDisabled", "StInvalid"};
        const char* __VenumItemValues[]
        = {"10001000001", "1110101100", "1110010001", 
                                "11011111110", "1000100111", 
                                "100111011", "11000110", 
                                "10010110101", "10110001010", 
                                "11111100011", "11101011000"};
        tracep->declDTypeEnum(85, "flash_ctrl_lcmgr.lcmgr_state_e", 11, 11, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StRmaIdle", "StRmaPageSel", "StRmaErase", 
                                "StRmaEraseWait", "StRmaWordSel", 
                                "StRmaProgram", "StRmaProgramWait", 
                                "StRmaRdVerify", "StRmaDisabled", 
                                "StRmaInvalid"};
        const char* __VenumItemValues[]
        = {"11110001010", "10111100111", "11000010111", 
                                "1010100110", "10011001", 
                                "11011111101", "111110000", 
                                "101001100", "1001011010", 
                                "10100111011"};
        tracep->declDTypeEnum(86, "flash_ctrl_pkg::rma_state_e", 10, 11, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Key_128", "Key_256", "Key_384", "Key_512", 
                                "Key_1024", "Key_None"};
        const char* __VenumItemValues[]
        = {"1", "10", "100", "1000", "10000", "100000"};
        tracep->declDTypeEnum(87, "prim_sha2_pkg::key_length_e", 6, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NoError", "SwPushMsgWhenShaDisabled", "SwHashStartWhenShaDisabled", 
                                "SwUpdateSecretKeyInProcess", 
                                "SwHashStartWhenActive", 
                                "SwPushMsgWhenDisallowed", 
                                "SwInvalidConfig"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(88, "prim_sha2_pkg::err_code_e", 7, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SHA2_256", "SHA2_384", "SHA2_512", "SHA2_None"};
        const char* __VenumItemValues[]
        = {"1", "10", "100", "1000"};
        tracep->declDTypeEnum(89, "prim_sha2_pkg::digest_mode_e", 4, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DoneAwaitCmd", "DoneAwaitHashDone", "DoneAwaitMessageComplete", 
                                "DoneAwaitHashComplete"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(90, "hmac.done_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelIPad", "SelOPad", "SelFifo"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(91, "hmac_core.sel_rdata_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelIPadMsg", "SelOPadMsg"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(92, "hmac_core.sel_msglen_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Inner", "Outer"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(93, "hmac_core.round_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StIPad", "StMsg", "StPushToMsgFifo", 
                                "StWaitResp", "StOPad", 
                                "StDone"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(94, "hmac_core.st_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FlushIdle", "FlushSend"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(95, "prim_packer.flush_st_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FifoIdle", "FifoLoadFromFifo", "FifoWait"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(96, "prim_sha2_pkg::fifoctl_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ShaIdle", "ShaCompress", "ShaUpdateDigest"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(97, "prim_sha2.sha_st_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FifoIn", "Pad80", "Pad00", "LenHi", "LenLo"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(98, "prim_sha2_pad.sel_data_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StFifoReceive", "StPad80", "StPad00", 
                                "StLenHi", "StLenLo"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(99, "prim_sha2_pad.pad_st_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Creator", "OwnerInt", "Owner", "Disable"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(100, "keymgr_pkg::keymgr_stage_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"None", "Aes", "Kmac", "Otbn"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(101, "keymgr_pkg::keymgr_key_dest_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OpAdvance", "OpGenId", "OpGenSwOut", "OpGenHwOut", 
                                "OpDisable"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(102, "keymgr_pkg::keymgr_ops_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OpIdle", "OpWip", "OpDoneSuccess", "OpDoneFail"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(103, "keymgr_pkg::keymgr_op_status_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StReset", "StInit", "StCreatorRootKey", 
                                "StOwnerIntKey", "StOwnerKey", 
                                "StDisabled", "StInvalid"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(104, "keymgr_pkg::keymgr_working_state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StCtrlReset", "StCtrlEntropyReseed", "StCtrlRandom", 
                                "StCtrlRootKey", "StCtrlInit", 
                                "StCtrlCreatorRootKey", 
                                "StCtrlOwnerIntKey", 
                                "StCtrlOwnerKey", "StCtrlDisabled", 
                                "StCtrlWipe", "StCtrlInvalid"};
        const char* __VenumItemValues[]
        = {"1101100001", "1110010010", "11110100", 
                                "110101111", "100000100", 
                                "1000011101", "1001010", 
                                "1101111110", "1010101000", 
                                "110011", "1011000111"};
        tracep->declDTypeEnum(105, "keymgr_ctrl.state_e", 11, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"KeyUpdateIdle", "KeyUpdateRandom", "KeyUpdateRoot", 
                                "KeyUpdateKmac", "KeyUpdateWipe"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(106, "keymgr_pkg::keymgr_key_update_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StCtrlDataIdle", "StCtrlDataHwEn", "StCtrlDataSwEn", 
                                "StCtrlDataDis", "StCtrlDataWait", 
                                "StCtrlDataInvalid"};
        const char* __VenumItemValues[]
        = {"1000010000", "1100100", "1110101110", "10011111", 
                                "111110011", "1111001001"};
        tracep->declDTypeEnum(107, "keymgr_data_en_state.state_e", 6, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StAdv", "StAdvAck", "StWait"};
        const char* __VenumItemValues[]
        = {"10010101", "101000", "1000011", "11111110"};
        tracep->declDTypeEnum(108, "keymgr_op_state_ctrl.state_e", 4, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StTx", "StTxLast", "StOpWait", 
                                "StClean", "StError"};
        const char* __VenumItemValues[]
        = {"1110100010", "10011011", "101000000", "1000101001", 
                                "1111111101", "11101110"};
        tracep->declDTypeEnum(109, "keymgr_kmac_if.data_state_e", 6, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SideLoadClrIdle", "SideLoadClrAes", "SideLoadClrKmac", 
                                "SideLoadClrOtbn"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(110, "keymgr_pkg::keymgr_sideload_clr_e", 4, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StSideloadReset", "StSideloadIdle", "StSideloadWipe", 
                                "StSideloadStop"};
        const char* __VenumItemValues[]
        = {"11111011", "101000101", "1110110010", "1000001010"};
        tracep->declDTypeEnum(111, "keymgr_sideload_key_ctrl.keymgr_sideload_e", 4, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"KmacIdle", "KmacPrefix", "KmacKeyBlock", 
                                "KmacMsgFeed", "KmacDigest", 
                                "KmacTerminalError"};
        const char* __VenumItemValues[]
        = {"1011", "110", "111110", "10101", "101101", 
                                "110000"};
        tracep->declDTypeEnum(112, "kmac.kmac_st_e", 6, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Key128", "Key192", "Key256", "Key384", 
                                "Key512"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(113, "kmac_pkg::key_len_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CmdNone", "CmdStart", "CmdProcess", "CmdManualRun", 
                                "CmdDone"};
        const char* __VenumItemValues[]
        = {"0", "11101", "101110", "110001", "10110"};
        tracep->declDTypeEnum(114, "kmac_pkg::kmac_cmd_e", 5, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"EntropyModeNone", "EntropyModeEdn", "EntropyModeSw"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(115, "kmac_pkg::entropy_mode_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StRandReset", "StRandReady", "StRandEdn", 
                                "StSwSeedWait", "StRandGenerate", 
                                "StRandErrWaitExpired", 
                                "StRandErrIncorrectMode", 
                                "StRandErr", "StTerminalError"};
        const char* __VenumItemValues[]
        = {"1001111000", "110000100", "1100100111", 
                                "1011110110", "1100", 
                                "1100011", "1110010000", 
                                "1000011110", "10011000"};
        tracep->declDTypeEnum(116, "kmac_entropy.rand_st_e", 9, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StAppCfg", "StAppMsg", "StAppOutLen", 
                                "StAppProcess", "StAppWait", 
                                "StSw", "StKeyMgrErrKeyNotValid", 
                                "StError", "StErrorAwaitSw", 
                                "StErrorAwaitApp", 
                                "StErrorWaitAbsorbed", 
                                "StErrorServiceRejected", 
                                "StTerminalError"};
        const char* __VenumItemValues[]
        = {"1010111110", "1010101101", "1110001011", 
                                "1010011000", "1110110010", 
                                "1001010000", "10111011", 
                                "111011111", "1110010111", 
                                "110001100", "1011100000", 
                                "10100100", "1101000111", 
                                "101110110"};
        tracep->declDTypeEnum(117, "kmac_pkg::st_e", 14, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelNone", "SelApp", "SelOutLen", "SelSw"};
        const char* __VenumItemValues[]
        = {"10100", "11001", "10", "1111"};
        tracep->declDTypeEnum(118, "kmac_pkg::app_mux_sel_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StMsgFeed", "StProcessing", "StAbsorbed", 
                                "StSqueezing", "StTerminalError"};
        const char* __VenumItemValues[]
        = {"1101", "110001", "10110", "100010", "111100", 
                                "11011"};
        tracep->declDTypeEnum(119, "kmac_errchk.st_e", 6, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdleL", "StMsgFeedL", "StProcessingL", 
                                "StAbsorbedL", "StSqueezingL", 
                                "StErrorL"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(120, "kmac_errchk.st_logical_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StKmacIdle", "StKey", "StKmacMsg", "StKmacFlush", 
                                "StTerminalError"};
        const char* __VenumItemValues[]
        = {"11000", "10111", "1110", "101011", "100000"};
        tracep->declDTypeEnum(121, "kmac_core.kmac_st_e", 5, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FlushIdle", "FlushPacker", "FlushFifo", 
                                "FlushClear"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(122, "kmac_msgfifo.flush_st_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FlushIdle", "FlushSend"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(123, "prim_packer.flush_st_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MuxGuard", "MuxRelease"};
        const char* __VenumItemValues[]
        = {"10", "101"};
        tracep->declDTypeEnum(124, "sha3.state_mux_sel_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MuxNone", "MuxFifo", "MuxPrefix", "MuxFuncPad", 
                                "MuxZeroEnd"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(125, "sha3pad.mux_sel_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StPadIdle", "StPrefix", "StPrefixWait", 
                                "StMessage", "StMessageWait", 
                                "StPad", "StPadRun", 
                                "StPad01", "StPadFlush", 
                                "StTerminalError"};
        const char* __VenumItemValues[]
        = {"1000010", "111100", "1001100", "100101", 
                                "1111", "1111010", 
                                "11001", "1101001", 
                                "1010111", "110011"};
        tracep->declDTypeEnum(126, "sha3pad.pad_st_e", 10, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DecLcIdBlank", "DecLcIdPersonalized", "DecLcIdInvalid"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(127, "lc_ctrl_state_pkg::dec_lc_id_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMINoError", "DMIReservedError", "DMIOPFailed", 
                                "DMIBusy"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(128, "dmi_jtag.dmi_error_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Read", "WaitReadValid", "Write", 
                                "WaitWriteValid"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(129, "dmi_jtag.state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"LoSt", "HiSt"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(130, "prim_sync_reqack.rz_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"TestLogicReset", "RunTestIdle", "SelectDrScan", 
                                "CaptureDr", "ShiftDr", 
                                "Exit1Dr", "PauseDr", 
                                "Exit2Dr", "UpdateDr", 
                                "SelectIrScan", "CaptureIr", 
                                "ShiftIr", "Exit1Ir", 
                                "PauseIr", "Exit2Ir", 
                                "UpdateIr"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111"};
        tracep->declDTypeEnum(131, "dmi_jtag_tap.tap_state_e", 16, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BYPASS0", "IDCODE", "DTMCSR", "DMIACCESS", 
                                "BYPASS1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10000", "10001", "11111"};
        tracep->declDTypeEnum(132, "dmi_jtag_tap.ir_reg_e", 5, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"LcStRaw", "LcStTestUnlocked0", "LcStTestLocked0", 
                                "LcStTestUnlocked1", 
                                "LcStTestLocked1", 
                                "LcStTestUnlocked2", 
                                "LcStTestLocked2", 
                                "LcStTestUnlocked3", 
                                "LcStTestLocked3", 
                                "LcStTestUnlocked4", 
                                "LcStTestLocked4", 
                                "LcStTestUnlocked5", 
                                "LcStTestLocked5", 
                                "LcStTestUnlocked6", 
                                "LcStTestLocked6", 
                                "LcStTestUnlocked7", 
                                "LcStDev", "LcStProd", 
                                "LcStProdEnd", "LcStRma", 
                                "LcStScrap"};
        const char* __VenumItemValues[]
        = {"0", "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000010110001100011011100010110000001010011000011111001100110001100101011001000010101000001111110000010111001001101001100011101001000000111101101000111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000010110001100011011100010110000001010011000011111001100110001100101011001000010101000001111110000010111001001101001100011101001000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000010110001100011011100010110000001010011000011111001100110001100101011001000010101000001111110000010111001001101011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000010110001100011011100010110000001010011000011111001100110001100101011001000010101000001111110000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000010110001100011011100010110000001010011000011111001100110001100101011001000010101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000010110001100011011100010110000001010011000011111001100110001100111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000010110001100011011100010110000001010011000011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000010110001100011011100010110000011011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000010110001100011011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101101000010000110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000100100100100110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111000001000000110100111101110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001010010010101111100111011101010010110100111101110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101100101001101001011110010111111100111011101010010110100111101110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110001010001101101111011101001111110010111111100111011101010010110100111101110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010001010000110111111001101101111011101001111110010111111100111011101010010110100111101110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011000111100111000110110010111110110110001010001101101111011101001111110010111111100111011101010010110100111101110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "1001101100011000010110110011011100111111111010110110010001010000110001010001101101111011101001111110010111111100111011101010010110100111101110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "11011101101111100011111111011111000111100111000110110010111110110110111111001101101111011101001111110010111111100111011101010010110100111101110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110", 
                                "11011101101111100011111111011111100111111111010110110010111110110110111111001101101111011101001111110010111111100111011101010010110100111101110001101111100111100110110001101111011100110111111111011011011011111111100110011111111111011001111101011111111111000011111101101111011110111111111000001111111111100111010111101110"};
        tracep->declDTypeEnum(133, "lc_ctrl_state_pkg::lc_state_e", 21, 320, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"LcCnt0", "LcCnt1", "LcCnt2", "LcCnt3", 
                                "LcCnt4", "LcCnt5", 
                                "LcCnt6", "LcCnt7", 
                                "LcCnt8", "LcCnt9", 
                                "LcCnt10", "LcCnt11", 
                                "LcCnt12", "LcCnt13", 
                                "LcCnt14", "LcCnt15", 
                                "LcCnt16", "LcCnt17", 
                                "LcCnt18", "LcCnt19", 
                                "LcCnt20", "LcCnt21", 
                                "LcCnt22", "LcCnt23", 
                                "LcCnt24"};
        const char* __VenumItemValues[]
        = {"0", "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100100111000011000110000000101101101100101111010001100010011110000110100111100010001001000010100111111100111010000101000111110010010001011010110001001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100100111000011000110000000101101101100101111010001100010011110000110100111100010001001000010100111111100111010000101000111110010010011111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100100111000011000110000000101101101100101111010001100010011110000110100111100010001001000010100111111100111010000101000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100100111000011000110000000101101101100101111010001100010011110000110100111100010001001000010100111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100100111000011000110000000101101101100101111010001100010011110000110100111100010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100100111000011000110000000101101101100101111010001100010011110000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100100111000011000110000000101101101100101111010001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100100111000011000110000000101101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100100111000011000110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101000010000100101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001010010111111000101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011000100101000001011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010000000000100011011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001010111000000010010011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001100001000001001111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001010010011011001110011000011011111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111010000100111010001111110011111101110011000011011111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100000001100111110010100111011101111110011111101110011000011011111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010110100000010010101100011101110111110010100111011101111110011111101110011000011011111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011100100100101010111110111011010101100011101110111110010100111011101111110011111101110011000011011111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001010000011011110111101101110111110111011010101100011101110111110010100111011101111110011111101110011000011011111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111011011000011001111000111011110111101101110111110111011010101100011101110111110010100111011101111110011111101110011000011011111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110110100000011110111111011111111001111000111011110111101101110111110111011010101100011101110111110010100111011101111110011111101110011000011011111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111", 
                                "110111101110011110111111011111111001111000111011110111101101110111110111011010101100011101110111110010100111011101111110011111101110011000011011111111101000110110011000101100111011110101001111011010111111001101110010101101101111111011001110101010111101101110101111110001100111011111000110111111111010001001011011101111111100111011101111000111111011111111111010111101001011011011011111"};
        tracep->declDTypeEnum(134, "lc_ctrl_state_pkg::lc_cnt_e", 25, 384, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "IdleSt", "ClkMuxSt", "CntIncrSt", 
                                "CntProgSt", "TransCheckSt", 
                                "TokenHashSt", "FlashRmaSt", 
                                "TokenCheck0St", "TokenCheck1St", 
                                "TransProgSt", "PostTransSt", 
                                "ScrapSt", "EscalateSt", 
                                "InvalidSt"};
        const char* __VenumItemValues[]
        = {"1111011010111100", "11110101101", "1100111011001001", 
                                "11001111000111", "110001010100", 
                                "110111010110000", 
                                "1101001000111111", 
                                "1110100010001111", 
                                "10000011000000", "1101010101101111", 
                                "1000000110101011", 
                                "110110100101100", 
                                "1010100001010001", 
                                "1011110110011011", 
                                "11000101001100"};
        tracep->declDTypeEnum(135, "lc_ctrl_pkg::fsm_state_e", 15, 16, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FirstSt", "SecondSt", "WaitSt", "DoneSt"};
        const char* __VenumItemValues[]
        = {"1011011", "10010100", "11100111", "101000"};
        tracep->declDTypeEnum(136, "lc_ctrl_kmac_if.state_e", 4, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Check", "PingResp", "EscResp", 
                                "SigInt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(137, "prim_esc_receiver.state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StatusIdle", "StatusBusyExecute", "StatusBusySecWipeDmem", 
                                "StatusBusySecWipeImem", 
                                "StatusBusySecWipeInt", 
                                "StatusLocked"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "11111111"};
        tracep->declDTypeEnum(138, "otbn_pkg::status_e", 6, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"InsnSubsetBase", "InsnSubsetBignum"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(139, "otbn_pkg::insn_subset_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IsprMod", "IsprRnd", "IsprAcc", "IsprFlags", 
                                "IsprUrnd", "IsprKeyS0L", 
                                "IsprKeyS0H", "IsprKeyS1L", 
                                "IsprKeyS1H"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(140, "otbn_pkg::ispr_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OtbnStateHalt", "OtbnStateRun", "OtbnStateStall", 
                                "OtbnStateLocked"};
        const char* __VenumItemValues[]
        = {"100", "1010", "10011", "11101"};
        tracep->declDTypeEnum(141, "otbn_pkg::otbn_state_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CsrFg0", "CsrFg1", "CsrFlags", "CsrMod0", 
                                "CsrMod1", "CsrMod2", 
                                "CsrMod3", "CsrMod4", 
                                "CsrMod5", "CsrMod6", 
                                "CsrMod7", "CsrRndPrefetch", 
                                "CsrRnd", "CsrUrnd"};
        const char* __VenumItemValues[]
        = {"11111000000", "11111000001", "11111001000", 
                                "11111010000", "11111010001", 
                                "11111010010", "11111010011", 
                                "11111010100", "11111010101", 
                                "11111010110", "11111010111", 
                                "11111011000", "111111000000", 
                                "111111000001"};
        tracep->declDTypeEnum(142, "otbn_pkg::csr_e", 14, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WsrMod", "WsrRnd", "WsrUrnd", "WsrAcc", 
                                "WsrKeyS0L", "WsrKeyS0H", 
                                "WsrKeyS1L", "WsrKeyS1H"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(143, "otbn_pkg::wsr_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"InsnOpcodeBaseLoad", "InsnOpcodeBaseMemMisc", 
                                "InsnOpcodeBaseOpImm", 
                                "InsnOpcodeBaseStore", 
                                "InsnOpcodeBaseOp", 
                                "InsnOpcodeBaseLui", 
                                "InsnOpcodeBaseBranch", 
                                "InsnOpcodeBaseJalr", 
                                "InsnOpcodeBaseJal", 
                                "InsnOpcodeBaseSystem", 
                                "InsnOpcodeBignumMisc", 
                                "InsnOpcodeBignumArith", 
                                "InsnOpcodeBignumMulqacc", 
                                "InsnOpcodeBignumBaseMisc"};
        const char* __VenumItemValues[]
        = {"11", "1111", "10011", "100011", "110011", 
                                "110111", "1100011", 
                                "1100111", "1101111", 
                                "1110011", "1011", 
                                "101011", "111011", 
                                "1111011"};
        tracep->declDTypeEnum(144, "otbn_pkg::insn_opcode_e", 14, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ImmBaseBI", "ImmBaseBS", "ImmBaseBB", "ImmBaseBU", 
                                "ImmBaseBJ", "ImmBaseBL", 
                                "ImmBaseBX"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(145, "otbn_pkg::imm_b_sel_base_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ShamtSelBignumA", "ShamtSelBignumS", "ShamtSelBignumZero"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(146, "otbn_pkg::shamt_sel_bignum_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AluOpBaseAdd", "AluOpBaseSub", "AluOpBaseXor", 
                                "AluOpBaseOr", "AluOpBaseAnd", 
                                "AluOpBaseNot", "AluOpBaseSra", 
                                "AluOpBaseSrl", "AluOpBaseSll"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(147, "otbn_pkg::alu_op_base_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AluOpBignumAdd", "AluOpBignumAddc", "AluOpBignumAddm", 
                                "AluOpBignumSub", "AluOpBignumSubb", 
                                "AluOpBignumSubm", 
                                "AluOpBignumRshi", 
                                "AluOpBignumXor", "AluOpBignumOr", 
                                "AluOpBignumAnd", "AluOpBignumNot", 
                                "AluOpBignumNone"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011"};
        tracep->declDTypeEnum(148, "otbn_pkg::alu_op_bignum_e", 12, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OpASelRegister", "OpASelZero", "OpASelCurrPc"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(149, "otbn_pkg::op_a_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OpBSelRegister", "OpBSelImmediate"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(150, "otbn_pkg::op_b_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ComparisonOpBaseEq", "ComparisonOpBaseNeq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(151, "otbn_pkg::comparison_op_base_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FlagC", "FlagM", "FlagL", "FlagZ"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(152, "otbn_pkg::flag_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RfWdSelEx", "RfWdSelNextPc", "RfWdSelLsu", 
                                "RfWdSelIspr", "RfWdSelIncr", 
                                "RfWdSelMac", "RfWdSelMovSel"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(153, "otbn_pkg::rf_wd_sel_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OtbnStartStopStateInitial", "OtbnStartStopStateHalt", 
                                "OtbnStartStopStateUrndRefresh", 
                                "OtbnStartStopStateRunning", 
                                "OtbnStartStopSecureWipeWdrUrnd", 
                                "OtbnStartStopSecureWipeAccModBaseUrnd", 
                                "OtbnStartStopSecureWipeAllZero", 
                                "OtbnStartStopSecureWipeComplete", 
                                "OtbnStartStopStateLocked"};
        const char* __VenumItemValues[]
        = {"1010011", "1111001", "110", "1001000", 
                                "101100", "10000", 
                                "110101", "1011", "1101111"};
        tracep->declDTypeEnum(154, "otbn_pkg::otbn_start_stop_state_e", 9, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ScrambleCtrlIdle", "ScrambleCtrlDmemReq", 
                                "ScrambleCtrlImemReq", 
                                "ScrambleCtrlError"};
        const char* __VenumItemValues[]
        = {"10011", "11110", "1000", "101"};
        tracep->declDTypeEnum(155, "otbn_pkg::scramble_ctrl_state_e", 4, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"EVEN", "ODD"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(156, "prim_sync_reqack.sync_reqack_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DaiRead", "DaiWrite", "DaiDigest"};
        const char* __VenumItemValues[]
        = {"1", "10", "100"};
        tracep->declDTypeEnum(157, "otp_ctrl_top_specific_pkg::dai_cmd_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NoError", "MacroError", "MacroEccCorrError", 
                                "MacroEccUncorrError", 
                                "MacroWriteBlankError"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(158, "prim_otp_pkg::err_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NoError", "MacroError", "MacroEccCorrError", 
                                "MacroEccUncorrError", 
                                "MacroWriteBlankError", 
                                "AccessError", "CheckFailError", 
                                "FsmStateError"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(159, "otp_ctrl_top_specific_pkg::otp_err_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Read", "Write", "ReadRaw", "WriteRaw", 
                                "Init"};
        const char* __VenumItemValues[]
        = {"1000101", "110111", "1111001", "1100010", 
                                "101100"};
        tracep->declDTypeEnum(160, "prim_otp_pkg::cmd_e", 5, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "IdleSt", 
                                "ReadSt", "ReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"1010110110", "100010011", "1011000", "1011101001", 
                                "101101110", "110100101", 
                                "1111011111"};
        tracep->declDTypeEnum(161, "otp_ctrl_part_unbuf.state_e", 7, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DigestAddrSel", "DataAddrSel"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(162, "otp_ctrl_part_unbuf.addr_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Decrypt", "Encrypt", "LoadShadow", "Digest", 
                                "DigestInit", "DigestFinalize"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(163, "otp_ctrl_top_specific_pkg::otp_scrmbl_cmd_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StandardMode", "ChainedMode"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(164, "otp_ctrl_part_pkg::digest_mode_e", 2, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "InitDescrSt", 
                                "InitDescrWaitSt", 
                                "IdleSt", "IntegScrSt", 
                                "IntegScrWaitSt", "IntegDigClrSt", 
                                "IntegDigSt", "IntegDigPadSt", 
                                "IntegDigFinSt", "IntegDigWaitSt", 
                                "CnstyReadSt", "CnstyReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"11000001110", "110100100111", "1110110001", 
                                "110010000100", "100110101000", 
                                "10101001101", "110101011010", 
                                "100010011111", "101001000001", 
                                "11101100010", "1101010111", 
                                "11011100101", "100011110010", 
                                "1101011", "101001111100", 
                                "10110111110"};
        tracep->declDTypeEnum(165, "otp_ctrl_part_buf.state_e", 16, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ScrmblData", "OtpData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(166, "otp_ctrl_part_buf.data_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PartOffset", "DigOffset"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(167, "otp_ctrl_part_buf.base_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "IdleSt", 
                                "ReadSt", "ReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"1010110110", "100010011", "1011000", "1011101001", 
                                "101101110", "110100101", 
                                "1111011111"};
        tracep->declDTypeEnum(168, "otp_ctrl_part_unbuf.state_e", 7, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DigestAddrSel", "DataAddrSel"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(169, "otp_ctrl_part_unbuf.addr_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "IdleSt", 
                                "ReadSt", "ReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"1010110110", "100010011", "1011000", "1011101001", 
                                "101101110", "110100101", 
                                "1111011111"};
        tracep->declDTypeEnum(170, "otp_ctrl_part_unbuf.state_e", 7, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DigestAddrSel", "DataAddrSel"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(171, "otp_ctrl_part_unbuf.addr_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "IdleSt", 
                                "ReadSt", "ReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"1010110110", "100010011", "1011000", "1011101001", 
                                "101101110", "110100101", 
                                "1111011111"};
        tracep->declDTypeEnum(172, "otp_ctrl_part_unbuf.state_e", 7, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DigestAddrSel", "DataAddrSel"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(173, "otp_ctrl_part_unbuf.addr_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "IdleSt", 
                                "ReadSt", "ReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"1010110110", "100010011", "1011000", "1011101001", 
                                "101101110", "110100101", 
                                "1111011111"};
        tracep->declDTypeEnum(174, "otp_ctrl_part_unbuf.state_e", 7, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DigestAddrSel", "DataAddrSel"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(175, "otp_ctrl_part_unbuf.addr_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "InitDescrSt", 
                                "InitDescrWaitSt", 
                                "IdleSt", "IntegScrSt", 
                                "IntegScrWaitSt", "IntegDigClrSt", 
                                "IntegDigSt", "IntegDigPadSt", 
                                "IntegDigFinSt", "IntegDigWaitSt", 
                                "CnstyReadSt", "CnstyReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"11000001110", "110100100111", "1110110001", 
                                "110010000100", "100110101000", 
                                "10101001101", "110101011010", 
                                "100010011111", "101001000001", 
                                "11101100010", "1101010111", 
                                "11011100101", "100011110010", 
                                "1101011", "101001111100", 
                                "10110111110"};
        tracep->declDTypeEnum(176, "otp_ctrl_part_buf.state_e", 16, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ScrmblData", "OtpData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(177, "otp_ctrl_part_buf.data_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PartOffset", "DigOffset"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(178, "otp_ctrl_part_buf.base_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "InitDescrSt", 
                                "InitDescrWaitSt", 
                                "IdleSt", "IntegScrSt", 
                                "IntegScrWaitSt", "IntegDigClrSt", 
                                "IntegDigSt", "IntegDigPadSt", 
                                "IntegDigFinSt", "IntegDigWaitSt", 
                                "CnstyReadSt", "CnstyReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"11000001110", "110100100111", "1110110001", 
                                "110010000100", "100110101000", 
                                "10101001101", "110101011010", 
                                "100010011111", "101001000001", 
                                "11101100010", "1101010111", 
                                "11011100101", "100011110010", 
                                "1101011", "101001111100", 
                                "10110111110"};
        tracep->declDTypeEnum(179, "otp_ctrl_part_buf.state_e", 16, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ScrmblData", "OtpData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(180, "otp_ctrl_part_buf.data_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PartOffset", "DigOffset"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(181, "otp_ctrl_part_buf.base_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "InitDescrSt", 
                                "InitDescrWaitSt", 
                                "IdleSt", "IntegScrSt", 
                                "IntegScrWaitSt", "IntegDigClrSt", 
                                "IntegDigSt", "IntegDigPadSt", 
                                "IntegDigFinSt", "IntegDigWaitSt", 
                                "CnstyReadSt", "CnstyReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"11000001110", "110100100111", "1110110001", 
                                "110010000100", "100110101000", 
                                "10101001101", "110101011010", 
                                "100010011111", "101001000001", 
                                "11101100010", "1101010111", 
                                "11011100101", "100011110010", 
                                "1101011", "101001111100", 
                                "10110111110"};
        tracep->declDTypeEnum(182, "otp_ctrl_part_buf.state_e", 16, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ScrmblData", "OtpData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(183, "otp_ctrl_part_buf.data_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PartOffset", "DigOffset"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(184, "otp_ctrl_part_buf.base_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "InitDescrSt", 
                                "InitDescrWaitSt", 
                                "IdleSt", "IntegScrSt", 
                                "IntegScrWaitSt", "IntegDigClrSt", 
                                "IntegDigSt", "IntegDigPadSt", 
                                "IntegDigFinSt", "IntegDigWaitSt", 
                                "CnstyReadSt", "CnstyReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"11000001110", "110100100111", "1110110001", 
                                "110010000100", "100110101000", 
                                "10101001101", "110101011010", 
                                "100010011111", "101001000001", 
                                "11101100010", "1101010111", 
                                "11011100101", "100011110010", 
                                "1101011", "101001111100", 
                                "10110111110"};
        tracep->declDTypeEnum(185, "otp_ctrl_part_buf.state_e", 16, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ScrmblData", "OtpData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(186, "otp_ctrl_part_buf.data_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PartOffset", "DigOffset"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(187, "otp_ctrl_part_buf.base_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "InitWaitSt", "InitDescrSt", 
                                "InitDescrWaitSt", 
                                "IdleSt", "IntegScrSt", 
                                "IntegScrWaitSt", "IntegDigClrSt", 
                                "IntegDigSt", "IntegDigPadSt", 
                                "IntegDigFinSt", "IntegDigWaitSt", 
                                "CnstyReadSt", "CnstyReadWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"11000001110", "110100100111", "1110110001", 
                                "110010000100", "100110101000", 
                                "10101001101", "110101011010", 
                                "100010011111", "101001000001", 
                                "11101100010", "1101010111", 
                                "11011100101", "100011110010", 
                                "1101011", "101001111100", 
                                "10110111110"};
        tracep->declDTypeEnum(188, "otp_ctrl_part_buf.state_e", 16, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ScrmblData", "OtpData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(189, "otp_ctrl_part_buf.data_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PartOffset", "DigOffset"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(190, "otp_ctrl_part_buf.base_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitSt", "IdleSt", "ReadSt", 
                                "ReadWaitSt", "WriteCheckSt", 
                                "WriteWaitSt", "WriteSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"1100000110", "1000110011", "101110000", 
                                "10011111", "1001001101", 
                                "1111101011", "11000010", 
                                "110100101", "1110011000"};
        tracep->declDTypeEnum(191, "prim_generic_otp.state_e", 9, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "InitOtpSt", "InitPartSt", "IdleSt", 
                                "ErrorSt", "ReadSt", 
                                "ReadWaitSt", "DescrSt", 
                                "DescrWaitSt", "WriteSt", 
                                "WriteWaitSt", "ScrSt", 
                                "ScrWaitSt", "DigClrSt", 
                                "DigReadSt", "DigReadWaitSt", 
                                "DigSt", "DigPadSt", 
                                "DigFinSt", "DigWaitSt"};
        const char* __VenumItemValues[]
        = {"101111010100", "110000110010", "111111001", 
                                "111010000011", "100010001110", 
                                "100101100110", "1100000000", 
                                "11000101111", "110101011111", 
                                "110111001000", "111001111100", 
                                "10101", "10110110100", 
                                "1111001111", "1001110011", 
                                "101110111010", "11111100010", 
                                "11010011000", "110011100101", 
                                "100000101001"};
        tracep->declDTypeEnum(192, "otp_ctrl_dai.state_e", 20, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OtpData", "DaiData", "ScrmblData"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(193, "otp_ctrl_dai.data_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PartOffset", "DaiOffset"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(194, "otp_ctrl_dai.addr_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SeedData", "EntropyData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(195, "otp_ctrl_kdi.data_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "IdleSt", "DigClrSt", "DigLoadSt", 
                                "FetchEntropySt", "DigEntropySt", 
                                "DigFinSt", "DigWaitSt", 
                                "FetchNonceSt", "FinishSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"101100001", "1011011", "1101010110", "10110111", 
                                "1000001101", "100111100", 
                                "1000100010", "1110010001", 
                                "11000100", "1011111000", 
                                "1111101111"};
        tracep->declDTypeEnum(196, "otp_ctrl_kdi.state_e", 11, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "IdleSt", "WriteSt", "WriteWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"101011", "110011110", "101010001", "10000000", 
                                "11111101"};
        tracep->declDTypeEnum(197, "otp_ctrl_lci.state_e", 5, 9, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetSt", "IdleSt", "IntegWaitSt", "CnstyWaitSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"100100101", "1101110", "10110011", "111010110", 
                                "1011001"};
        tracep->declDTypeEnum(198, "otp_ctrl_lfsr_timer.state_e", 5, 9, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelEncDataOut", "SelDecDataOut", "SelDigestState", 
                                "SelEncDataOutXor", 
                                "SelDataInput"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(199, "otp_ctrl_scrmbl.data_state_sel_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelDecKeyOut", "SelEncKeyOut", "SelDecKeyInit", 
                                "SelEncKeyInit", "SelDigestConst", 
                                "SelDigestInput", "SelDigestChained"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(200, "otp_ctrl_scrmbl.key_state_sel_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IdleSt", "DecryptSt", "EncryptSt", "DigestSt", 
                                "ErrorSt"};
        const char* __VenumItemValues[]
        = {"100011001", "101101111", "10010111", "111000010", 
                                "11111000"};
        tracep->declDTypeEnum(201, "otp_ctrl_scrmbl.state_e", 5, 9, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BidirStd", "BidirTol", "BidirOd", "InputStd", 
                                "AnalogIn0", "AnalogIn1", 
                                "DualBidirTol"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(202, "prim_pad_wrapper_pkg::pad_type_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Posedge", "Negedge", "Edge", "HighTimed", 
                                "LowTimed"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(203, "pinmux_pkg::wkup_mode_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FuncSel", "LcTapSel", "RvTapSel", "DftTapSel"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(204, "pinmux_pkg::tap_strap_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelSwReq", "SelHwReq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(205, "prim_reg_cdc_arb.req_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(206, "prim_reg_cdc_arb.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Por", "Wake", "Reset"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(207, "pwrmgr_pkg::pwrup_cause_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Check", "PingResp", "EscResp", 
                                "SigInt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(208, "prim_esc_receiver.state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ResetNone", "LowPwrEntry", "HwReq", "ResetUndefined"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(209, "pwrmgr_pkg::reset_cause_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FastPwrStateLowPower", "FastPwrStateEnableClocks", 
                                "FastPwrStateReleaseLcRst", 
                                "FastPwrStateOtpInit", 
                                "FastPwrStateLcInit", 
                                "FastPwrStateStrap", 
                                "FastPwrStateAckPwrUp", 
                                "FastPwrStateRomCheckDone", 
                                "FastPwrStateRomCheckGood", 
                                "FastPwrStateActive", 
                                "FastPwrStateDisClks", 
                                "FastPwrStateFallThrough", 
                                "FastPwrStateNvmIdleChk", 
                                "FastPwrStateLowPowerPrep", 
                                "FastPwrStateNvmShutDown", 
                                "FastPwrStateResetPrep", 
                                "FastPwrStateResetWait", 
                                "FastPwrStateReqPwrDn", 
                                "FastPwrStateInvalid"};
        const char* __VenumItemValues[]
        = {"110111", "101011001110", "100111000000", 
                                "111110100010", "101001010011", 
                                "110000111010", "10101000", 
                                "10111110011", "10000000100", 
                                "1101100100", "1110010101", 
                                "11011010000", "100101111001", 
                                "10110001111", "1100001010", 
                                "11001101111", "111111111100", 
                                "111010001001", "110101010110"};
        tracep->declDTypeEnum(210, "pwrmgr_pkg::fast_pwr_state_e", 19, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SlowPwrStateReset", "SlowPwrStateLowPower", 
                                "SlowPwrStateMainPowerOn", 
                                "SlowPwrStatePwrClampOff", 
                                "SlowPwrStateClocksOn", 
                                "SlowPwrStateReqPwrUp", 
                                "SlowPwrStateIdle", 
                                "SlowPwrStateAckPwrDn", 
                                "SlowPwrStateClocksOff", 
                                "SlowPwrStatePwrClampOn", 
                                "SlowPwrStateMainPowerOff", 
                                "SlowPwrStateInvalid"};
        const char* __VenumItemValues[]
        = {"100010", "1011000111", "110101111", "110010001", 
                                "1010111100", "11011010", 
                                "1111100000", "1110101", 
                                "1101111011", "101001100", 
                                "1000001001", "1100010110"};
        tracep->declDTypeEnum(211, "pwrmgr_pkg::slow_pwr_state_e", 12, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ReadingLow", "ReadingHigh", "RomAhead", 
                                "KmacAhead", "Checking", 
                                "Done", "Invalid"};
        const char* __VenumItemValues[]
        = {"11001001", "10111001", "1110011001", "1001111001", 
                                "101011001", "1000000110", 
                                "100101001"};
        tracep->declDTypeEnum(212, "rom_ctrl_pkg::fsm_state_e", 7, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Waiting", "Checking", "Done"};
        const char* __VenumItemValues[]
        = {"100", "10010", "11001"};
        tracep->declDTypeEnum(213, "rom_ctrl_compare.state_e", 3, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PutFullData", "PutPartialData", "Get"};
        const char* __VenumItemValues[]
        = {"0", "1", "100"};
        tracep->declDTypeEnum(214, "tlul_pkg::tl_a_op_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DMINoError", "DMIReservedError", "DMIOPFailed", 
                                "DMIBusy"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(215, "dmi_jtag.dmi_error_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Read", "WaitReadValid", "Write", 
                                "WaitWriteValid"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(216, "dmi_jtag.state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"TestLogicReset", "RunTestIdle", "SelectDrScan", 
                                "CaptureDr", "ShiftDr", 
                                "Exit1Dr", "PauseDr", 
                                "Exit2Dr", "UpdateDr", 
                                "SelectIrScan", "CaptureIr", 
                                "ShiftIr", "Exit1Ir", 
                                "PauseIr", "Exit2Ir", 
                                "UpdateIr"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111"};
        tracep->declDTypeEnum(217, "dmi_jtag_tap.tap_state_e", 16, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BYPASS0", "IDCODE", "DTMCSR", "DMIACCESS", 
                                "BYPASS1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10000", "10001", "11111"};
        tracep->declDTypeEnum(218, "dmi_jtag_tap.ir_reg_e", 5, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CmdErrNone", "CmdErrBusy", "CmdErrNotSupported", 
                                "CmdErrorException", 
                                "CmdErrorHaltResume", 
                                "CmdErrorBus", "CmdErrorOther"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "111"};
        tracep->declDTypeEnum(219, "dm::cmderr_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DTM_NOP", "DTM_READ", "DTM_WRITE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(220, "dm::dtm_op_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Data0", "Data1", "Data2", "Data3", "Data4", 
                                "Data5", "Data6", "Data7", 
                                "Data8", "Data9", "Data10", 
                                "Data11", "DMControl", 
                                "DMStatus", "Hartinfo", 
                                "HaltSum1", "HAWindowSel", 
                                "HAWindow", "AbstractCS", 
                                "Command", "AbstractAuto", 
                                "DevTreeAddr0", "DevTreeAddr1", 
                                "DevTreeAddr2", "DevTreeAddr3", 
                                "NextDM", "ProgBuf0", 
                                "ProgBuf1", "ProgBuf2", 
                                "ProgBuf3", "ProgBuf4", 
                                "ProgBuf5", "ProgBuf6", 
                                "ProgBuf7", "ProgBuf8", 
                                "ProgBuf9", "ProgBuf10", 
                                "ProgBuf11", "ProgBuf12", 
                                "ProgBuf13", "ProgBuf14", 
                                "ProgBuf15", "AuthData", 
                                "HaltSum2", "HaltSum3", 
                                "SBAddress3", "SBCS", 
                                "SBAddress0", "SBAddress1", 
                                "SBAddress2", "SBData0", 
                                "SBData1", "SBData2", 
                                "SBData3", "HaltSum0"};
        const char* __VenumItemValues[]
        = {"100", "101", "110", "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110", 
                                "101111", "110000", 
                                "110100", "110101", 
                                "110111", "111000", 
                                "111001", "111010", 
                                "111011", "111100", 
                                "111101", "111110", 
                                "111111", "1000000"};
        tracep->declDTypeEnum(221, "dm::dm_csr_e", 55, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Go", "Resume", "CmdExecuting"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(222, "dm_mem.state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Read", "Write", "WaitRead", "WaitWrite"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(223, "dm::sba_state_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MuBi32True", "MuBi32False"};
        const char* __VenumItemValues[]
        = {"10010110100101101001011010010110", "1101001011010010110100101101001"};
        tracep->declDTypeEnum(224, "prim_mubi_pkg::mubi32_t", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FwMode", "FlashMode", "PassThrough"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(225, "spi_device_pkg::spi_mode_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SingleIO", "DualIO", "QuadIO"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(226, "spi_device_pkg::io_mode_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DpNone", "DpReadCmd", "DpReadStatus", "DpReadSFDP", 
                                "DpReadJEDEC", "DpUpload", 
                                "DpEn4B", "DpEx4B", 
                                "DpWrEn", "DpWrDi", 
                                "DpUnknown"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "100", "1000", "10000", 
                                "100000", "1000000", 
                                "10000000", "100000000", 
                                "1000000000"};
        tracep->declDTypeEnum(227, "spi_device_pkg::sel_datapath_e", 11, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StStatus", "StSfdp", "StJedec", 
                                "StReadCmd", "StUpload", 
                                "StAddr4B", "StWrEn", 
                                "StWait"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(228, "spi_cmdparse.st_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StCC", "StJedecId", "StDevId"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(229, "spid_jedec.st_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StFilter", "StWait", "StDriving", 
                                "StHighZ", "StAddress", 
                                "StMByte"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(230, "spi_passthrough.passthrough_st_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AddrDisabled", "AddrCfg", "Addr3B", "Addr4B"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(231, "spi_device_pkg::addr_mode_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MainReset", "MainAddress", "MainMByte", 
                                "MainDummy", "MainOutput", 
                                "MainError"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(232, "spi_readcmd.main_st_e", 6, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StActive"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(233, "spid_readbuffer.st_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StPush", "StActive"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(234, "spid_readsram.st_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AddrInput", "AddrContinuous"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(235, "spid_readsram.addr_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StAddr", "StWait", "StStartByte", 
                                "StReadFifo", "StReadHwReg", 
                                "StWrite", "StInvalid", 
                                "StEnd"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(236, "spi_tpm.st_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RegAccess", "RegIntEn", "RegIntVect", "RegIntSts", 
                                "RegIntfCap", "RegSts", 
                                "RegHashStart", "RegId", 
                                "RegRid", "HwRegEnd"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(237, "spi_tpm.hw_reg_idx_e", 10, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Write", "Read"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(238, "spi_tpm.cmd_type_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelWait", "SelStart", "SelInvalid", "SelHwReg", 
                                "SelRdFifo"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(239, "spi_tpm.tpm_data_sel_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StActive"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(240, "spid_status.st_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StAddress", "StPayload"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(241, "spid_upload.st_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StPassThru", "StWaitRd", "StWriteCmd", 
                                "StWrReadBackInit", 
                                "StWrReadBack", "StWrReadBackDWait", 
                                "StRdReadBack", "StRdReadBackDWait", 
                                "StByteWrReadBackInit", 
                                "StByteWrReadBack", 
                                "StByteWrReadBackDWait"};
        const char* __VenumItemValues[]
        = {"1111110", "10", "11110001", "10011001", 
                                "1111", "110000", "10101100", 
                                "11000000", "1010111", 
                                "11100111", "11111111"};
        tracep->declDTypeEnum(242, "tlul_sram_byte.state_e", 11, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"LowLevel", "HighLevel", "EdgeToLow", "EdgeToHigh"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(243, "sysrst_ctrl_pkg::event_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IdleSt", "DebounceSt", "DetectSt", "StableSt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(244, "sysrst_ctrl_detect.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IdleSt", "DebounceSt", "DetectSt", "StableSt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(245, "sysrst_ctrl_detect.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IdleSt", "DebounceSt", "DetectSt", "StableSt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(246, "sysrst_ctrl_detect.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IdleSt", "DebounceSt", "DetectSt", "StableSt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(247, "sysrst_ctrl_detect.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IdleSt", "DebounceSt", "DetectSt", "StableSt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(248, "sysrst_ctrl_detect.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IdleSt", "DebounceSt", "DetectSt", "StableSt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(249, "sysrst_ctrl_detect.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IdleSt", "DebounceSt", "DetectSt", "StableSt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(250, "sysrst_ctrl_detect.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SelSwReq", "SelHwReq"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(251, "prim_reg_cdc_arb.req_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StWait"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(252, "prim_reg_cdc_arb.state_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StRcvdIn", "StSendData", "StWaitTxEnd", 
                                "StWaitAckStart", "StWaitAck"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(253, "usb_fs_nb_in_pe.state_in_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"UsbPidTypeSpecial", "UsbPidTypeToken", 
                                "UsbPidTypeHandshake", 
                                "UsbPidTypeData"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(254, "usb_consts_pkg::usb_pid_type_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"UsbPidOut", "UsbPidIn", "UsbPidSof", "UsbPidSetup", 
                                "UsbPidData0", "UsbPidData1", 
                                "UsbPidData2", "UsbPidMData", 
                                "UsbPidAck", "UsbPidNak", 
                                "UsbPidStall", "UsbPidNyet", 
                                "UsbPidPre"};
        const char* __VenumItemValues[]
        = {"1", "1001", "101", "1101", "11", "1011", 
                                "111", "1111", "10", 
                                "1010", "1110", "110", 
                                "1100"};
        tracep->declDTypeEnum(255, "usb_consts_pkg::usb_pid_e", 13, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StRcvdOut", "StRcvdDataStart", 
                                "StRcvdDataEnd", "StRcvdIsoDataEnd"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(256, "usb_fs_nb_out_pe.state_out_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Sync", "Pid", "DataOrCrc160", "Crc161", 
                                "Eop", "OscTest"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(257, "usb_fs_tx.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OsIdle", "OsWaitByte", "OsTransmit"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(258, "usb_fs_tx.out_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"LinkDisconnected", "LinkPowered", "LinkPoweredSuspended", 
                                "LinkActiveNoSOF", 
                                "LinkActive", "LinkSuspended", 
                                "LinkResuming"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "101", "11", "100", "110"};
        tracep->declDTypeEnum(259, "usbdev_linkstate.link_state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NoRst", "RstCnt", "RstPend"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(260, "usbdev_linkstate.link_rst_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Active", "InactCnt", "InactPend"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(261, "usbdev_linkstate.link_inac_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ERQ_REQ0", "ERQ_ACK0", "ERQ_IDLE"};
        const char* __VenumItemValues[]
        = {"1", "11", "0"};
        tracep->declDTypeEnum(262, "ast_entropy.erq_sm_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RGLS_CLDPU", "RGLS_VCMON", "RGLS_VCM2A", 
                                "RGLS_VCAON", "RGLS_VCA2M", 
                                "RGLS_BROUT"};
        const char* __VenumItemValues[]
        = {"0", "1", "11", "111", "101", "110"};
        tracep->declDTypeEnum(263, "rglts_pdm_3p3v.rgls_sm_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SwTestStatusUnderReset", "SwTestStatusBooted", 
                                "SwTestStatusInBootRom", 
                                "SwTestStatusInBootRomHalt", 
                                "SwTestStatusInTest", 
                                "SwTestStatusInWfi", 
                                "SwTestStatusPassed", 
                                "SwTestStatusFailed"};
        const char* __VenumItemValues[]
        = {"0", "1011000000000100", "1011000010010000", 
                                "1011000001010111", 
                                "100001101010100", 
                                "1110100011110", "1001000000001101", 
                                "1011101010101101"};
        tracep->declDTypeEnum(264, "sw_test_status_pkg::sw_test_status_e", 8, 16, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BRK_CHK", "BRK_WAIT"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(265, "uart_core.break_st_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"AcqData", "AcqStart", "AcqStop", "AcqRestart", 
                                "AcqNack", "AcqNackStart", 
                                "AcqNackStop"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(266, "i2c_pkg::i2c_acq_byte_id_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StBusFree", "StBusBusyLow", "StBusBusyHigh", 
                                "StBusBusyStop"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(267, "i2c_bus_monitor.bus_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"tSetupStart", "tHoldStart", "tClockStart", 
                                "tClockLow", "tClockPulse", 
                                "tClockHigh", "tHoldBit", 
                                "tClockStop", "tSetupStop", 
                                "tNoDelay"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(268, "i2c_controller_fsm.tcount_sel_e", 10, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Active", "PopFmtFifo", "SetupStart", 
                                "HoldStart", "ClockStart", 
                                "SetupStop", "HoldStop", 
                                "ClockStop", "ClockLow", 
                                "ClockPulse", "HoldBit", 
                                "ClockLowAck", "ClockPulseAck", 
                                "HoldDevAck", "ReadClockLow", 
                                "ReadClockPulse", "ReadHoldBit", 
                                "HostClockLowAck", 
                                "HostClockPulseAck", 
                                "HostHoldBitAck"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100"};
        tracep->declDTypeEnum(269, "i2c_controller_fsm.state_e", 21, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"tSetupData", "tHoldData", "tNoDelay"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(270, "i2c_target_fsm.tcount_sel_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "AcquireStart", "AddrRead", "AddrAckWait", 
                                "AddrAckSetup", "AddrAckPulse", 
                                "AddrAckHold", "TransmitWait", 
                                "TransmitSetup", "TransmitPulse", 
                                "TransmitHold", "TransmitAck", 
                                "TransmitAckPulse", 
                                "WaitForStop", "AcquireByte", 
                                "AcquireAckWait", "AcquireAckSetup", 
                                "AcquireAckPulse", 
                                "AcquireAckHold", "StretchAddrAck", 
                                "StretchAddrAckSetup", 
                                "StretchAddr", "StretchTx", 
                                "StretchTxSetup", "StretchAcqFull", 
                                "StretchAcqSetup"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001"};
        tracep->declDTypeEnum(271, "i2c_target_fsm.state_e", 26, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "WaitLead", "InternalClkLow", "InternalClkHigh", 
                                "WaitTrail", "WaitIdle", 
                                "CSBSwitch", "IdleCSBActive"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(272, "spi_host_fsm.spi_host_st_e", 8, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Disabled", "EndPointClear", "Idle", "DataWait", 
                                "AckPls", "Error"};
        const char* __VenumItemValues[]
        = {"100110010", "110001110", "1011100", "11101011", 
                                "100101", "111010001"};
        tracep->declDTypeEnum(273, "edn_ack_sm.state_e", 6, 9, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "BootLoadIns", "BootInsAckWait", 
                                "BootLoadGen", "BootGenAckWait", 
                                "BootPulse", "BootDone", 
                                "BootLoadUni", "BootUniAckWait", 
                                "AutoLoadIns", "AutoFirstAckWait", 
                                "AutoAckWait", "AutoDispatch", 
                                "AutoCaptGenCnt", "AutoSendGenCmd", 
                                "AutoCaptReseedCnt", 
                                "AutoSendReseedCmd", 
                                "SWPortMode", "RejectCsrngEntropy", 
                                "Error"};
        const char* __VenumItemValues[]
        = {"11000001", "111000111", "1111001", "11", 
                                "1110111", "10101001", 
                                "11110000", "100110101", 
                                "101100", "110111100", 
                                "110100011", "10010010", 
                                "101100001", "100001110", 
                                "111011101", "10111111", 
                                "1101010", "10010101", 
                                "11000", "101111110"};
        tracep->declDTypeEnum(274, "edn_pkg::state_e", 20, 9, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "AlertHsPhase1", "AlertHsPhase2", 
                                "PingHsPhase1", "PingHsPhase2", 
                                "Pause0", "Pause1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(275, "prim_alert_sender.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "AlertHsPhase1", "AlertHsPhase2", 
                                "PingHsPhase1", "PingHsPhase2", 
                                "Pause0", "Pause1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(276, "prim_alert_sender.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "AlertHsPhase1", "AlertHsPhase2", 
                                "PingHsPhase1", "PingHsPhase2", 
                                "Pause0", "Pause1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(277, "prim_alert_sender.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "HsAckWait", "Pause0", "Pause1", 
                                "InitReq", "InitAckWait"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(278, "prim_alert_receiver.state_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Reset", "Idle", "WaitForParent", "WaitForChild", 
                                "WaitForSrcRelease", 
                                "WaitForChildRelease", 
                                "Error", "FsmError"};
        const char* __VenumItemValues[]
        = {"10001", "100011", "111101", "1111", "100100", 
                                "111010", "10110", 
                                "1000"};
        tracep->declDTypeEnum(279, "rstmgr_cnsty_chk.state_e", 8, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Reset", "Idle", "WaitForParent", "WaitForChild", 
                                "WaitForSrcRelease", 
                                "WaitForChildRelease", 
                                "Error", "FsmError"};
        const char* __VenumItemValues[]
        = {"10001", "100011", "111101", "1111", "100100", 
                                "111010", "10110", 
                                "1000"};
        tracep->declDTypeEnum(280, "rstmgr_cnsty_chk.state_e", 8, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "AlertHsPhase1", "AlertHsPhase2", 
                                "PingHsPhase1", "PingHsPhase2", 
                                "Pause0", "Pause1"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(281, "prim_alert_sender.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StActive", "StOutstanding", "StFlush", 
                                "StError", "StErrorOutstanding"};
        const char* __VenumItemValues[]
        = {"100100001", "11100111", "1001100", "10111010", 
                                "100010110"};
        tracep->declDTypeEnum(282, "tlul_lc_gate.state_e", 5, 9, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StCtrlRead", "StCtrlProg", "StCtrl", 
                                "StDisable"};
        const char* __VenumItemValues[]
        = {"1011011110", "10100110", "1111101101", 
                                "1101000010", "111011"};
        tracep->declDTypeEnum(283, "flash_phy_core.state_e", 5, 10, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StIdle", "StPrePack", "StPackData", "StPostPack", 
                                "StCalcPlainEcc", "StReqFlash", 
                                "StWaitFlash", "StCalcMask", 
                                "StScrambleData", "StCalcEcc", 
                                "StDisabled"};
        const char* __VenumItemValues[]
        = {"11111111110", "1110111", "10100100011", 
                                "11010000101", "1101011011", 
                                "1010110010", "100111000", 
                                "1110", "11101001", 
                                "111010100", "10001000000"};
        tracep->declDTypeEnum(284, "flash_phy_prog.state_e", 11, 11, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Filler", "Actual"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(285, "flash_phy_prog.data_sel_e", 2, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StEraseIdle", "StEraseBusy", "StEraseSuspend"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(286, "flash_phy_erase.erase_state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IsStd", "IsSkewed", "SigInt"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(287, "prim_diff_decode.state_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"Idle", "Flush", "ArbGnt", "SendSOP", "SendMOP", 
                                "GenCmdChk", "CmdAck", 
                                "GenReq", "GenArbGnt", 
                                "GenSOP", "Error"};
        const char* __VenumItemValues[]
        = {"11110101", "1011011", "11100", "1", "1010110", 
                                "10001101", "11000000", 
                                "10010011", "11101110", 
                                "10111010", "1100111"};
        tracep->declDTypeEnum(288, "csrng_cmd_stage.state_e", 11, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PC_BOOT", "PC_JUMP", "PC_EXC", "PC_ERET", 
                                "PC_DRET", "PC_BP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(289, "ibex_pkg::pc_sel_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"EXC_PC_EXC", "EXC_PC_IRQ", "EXC_PC_DBD", 
                                "EXC_PC_DBG_EXC"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(290, "ibex_pkg::exc_pc_sel_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALU_ADD", "ALU_SUB", "ALU_XOR", "ALU_OR", 
                                "ALU_AND", "ALU_XNOR", 
                                "ALU_ORN", "ALU_ANDN", 
                                "ALU_SRA", "ALU_SRL", 
                                "ALU_SLL", "ALU_SRO", 
                                "ALU_SLO", "ALU_ROR", 
                                "ALU_ROL", "ALU_GREV", 
                                "ALU_GORC", "ALU_SHFL", 
                                "ALU_UNSHFL", "ALU_XPERM_N", 
                                "ALU_XPERM_B", "ALU_XPERM_H", 
                                "ALU_SH1ADD", "ALU_SH2ADD", 
                                "ALU_SH3ADD", "ALU_LT", 
                                "ALU_LTU", "ALU_GE", 
                                "ALU_GEU", "ALU_EQ", 
                                "ALU_NE", "ALU_MIN", 
                                "ALU_MINU", "ALU_MAX", 
                                "ALU_MAXU", "ALU_PACK", 
                                "ALU_PACKU", "ALU_PACKH", 
                                "ALU_SEXTB", "ALU_SEXTH", 
                                "ALU_CLZ", "ALU_CTZ", 
                                "ALU_CPOP", "ALU_SLT", 
                                "ALU_SLTU", "ALU_CMOV", 
                                "ALU_CMIX", "ALU_FSL", 
                                "ALU_FSR", "ALU_BSET", 
                                "ALU_BCLR", "ALU_BINV", 
                                "ALU_BEXT", "ALU_BCOMPRESS", 
                                "ALU_BDECOMPRESS", 
                                "ALU_BFP", "ALU_CLMUL", 
                                "ALU_CLMULR", "ALU_CLMULH", 
                                "ALU_CRC32_B", "ALU_CRC32C_B", 
                                "ALU_CRC32_H", "ALU_CRC32C_H", 
                                "ALU_CRC32_W", "ALU_CRC32C_W"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110", 
                                "101111", "110000", 
                                "110001", "110010", 
                                "110011", "110100", 
                                "110101", "110110", 
                                "110111", "111000", 
                                "111001", "111010", 
                                "111011", "111100", 
                                "111101", "111110", 
                                "111111", "1000000"};
        tracep->declDTypeEnum(291, "ibex_pkg::alu_op_e", 65, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MD_OP_MULL", "MD_OP_MULH", "MD_OP_DIV", 
                                "MD_OP_REM"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(292, "ibex_pkg::md_op_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CSR_OP_READ", "CSR_OP_WRITE", "CSR_OP_SET", 
                                "CSR_OP_CLEAR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(293, "ibex_pkg::csr_op_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"CSR_MVENDORID", "CSR_MARCHID", "CSR_MIMPID", 
                                "CSR_MHARTID", "CSR_MCONFIGPTR", 
                                "CSR_MSTATUS", "CSR_MISA", 
                                "CSR_MIE", "CSR_MTVEC", 
                                "CSR_MCOUNTEREN", "CSR_MSTATUSH", 
                                "CSR_MENVCFG", "CSR_MENVCFGH", 
                                "CSR_MSCRATCH", "CSR_MEPC", 
                                "CSR_MCAUSE", "CSR_MTVAL", 
                                "CSR_MIP", "CSR_PMPCFG0", 
                                "CSR_PMPCFG1", "CSR_PMPCFG2", 
                                "CSR_PMPCFG3", "CSR_PMPADDR0", 
                                "CSR_PMPADDR1", "CSR_PMPADDR2", 
                                "CSR_PMPADDR3", "CSR_PMPADDR4", 
                                "CSR_PMPADDR5", "CSR_PMPADDR6", 
                                "CSR_PMPADDR7", "CSR_PMPADDR8", 
                                "CSR_PMPADDR9", "CSR_PMPADDR10", 
                                "CSR_PMPADDR11", "CSR_PMPADDR12", 
                                "CSR_PMPADDR13", "CSR_PMPADDR14", 
                                "CSR_PMPADDR15", "CSR_SCONTEXT", 
                                "CSR_MSECCFG", "CSR_MSECCFGH", 
                                "CSR_TSELECT", "CSR_TDATA1", 
                                "CSR_TDATA2", "CSR_TDATA3", 
                                "CSR_MCONTEXT", "CSR_MSCONTEXT", 
                                "CSR_DCSR", "CSR_DPC", 
                                "CSR_DSCRATCH0", "CSR_DSCRATCH1", 
                                "CSR_MCOUNTINHIBIT", 
                                "CSR_MHPMEVENT3", "CSR_MHPMEVENT4", 
                                "CSR_MHPMEVENT5", "CSR_MHPMEVENT6", 
                                "CSR_MHPMEVENT7", "CSR_MHPMEVENT8", 
                                "CSR_MHPMEVENT9", "CSR_MHPMEVENT10", 
                                "CSR_MHPMEVENT11", 
                                "CSR_MHPMEVENT12", 
                                "CSR_MHPMEVENT13", 
                                "CSR_MHPMEVENT14", 
                                "CSR_MHPMEVENT15", 
                                "CSR_MHPMEVENT16", 
                                "CSR_MHPMEVENT17", 
                                "CSR_MHPMEVENT18", 
                                "CSR_MHPMEVENT19", 
                                "CSR_MHPMEVENT20", 
                                "CSR_MHPMEVENT21", 
                                "CSR_MHPMEVENT22", 
                                "CSR_MHPMEVENT23", 
                                "CSR_MHPMEVENT24", 
                                "CSR_MHPMEVENT25", 
                                "CSR_MHPMEVENT26", 
                                "CSR_MHPMEVENT27", 
                                "CSR_MHPMEVENT28", 
                                "CSR_MHPMEVENT29", 
                                "CSR_MHPMEVENT30", 
                                "CSR_MHPMEVENT31", 
                                "CSR_MCYCLE", "CSR_MINSTRET", 
                                "CSR_MHPMCOUNTER3", 
                                "CSR_MHPMCOUNTER4", 
                                "CSR_MHPMCOUNTER5", 
                                "CSR_MHPMCOUNTER6", 
                                "CSR_MHPMCOUNTER7", 
                                "CSR_MHPMCOUNTER8", 
                                "CSR_MHPMCOUNTER9", 
                                "CSR_MHPMCOUNTER10", 
                                "CSR_MHPMCOUNTER11", 
                                "CSR_MHPMCOUNTER12", 
                                "CSR_MHPMCOUNTER13", 
                                "CSR_MHPMCOUNTER14", 
                                "CSR_MHPMCOUNTER15", 
                                "CSR_MHPMCOUNTER16", 
                                "CSR_MHPMCOUNTER17", 
                                "CSR_MHPMCOUNTER18", 
                                "CSR_MHPMCOUNTER19", 
                                "CSR_MHPMCOUNTER20", 
                                "CSR_MHPMCOUNTER21", 
                                "CSR_MHPMCOUNTER22", 
                                "CSR_MHPMCOUNTER23", 
                                "CSR_MHPMCOUNTER24", 
                                "CSR_MHPMCOUNTER25", 
                                "CSR_MHPMCOUNTER26", 
                                "CSR_MHPMCOUNTER27", 
                                "CSR_MHPMCOUNTER28", 
                                "CSR_MHPMCOUNTER29", 
                                "CSR_MHPMCOUNTER30", 
                                "CSR_MHPMCOUNTER31", 
                                "CSR_MCYCLEH", "CSR_MINSTRETH", 
                                "CSR_MHPMCOUNTER3H", 
                                "CSR_MHPMCOUNTER4H", 
                                "CSR_MHPMCOUNTER5H", 
                                "CSR_MHPMCOUNTER6H", 
                                "CSR_MHPMCOUNTER7H", 
                                "CSR_MHPMCOUNTER8H", 
                                "CSR_MHPMCOUNTER9H", 
                                "CSR_MHPMCOUNTER10H", 
                                "CSR_MHPMCOUNTER11H", 
                                "CSR_MHPMCOUNTER12H", 
                                "CSR_MHPMCOUNTER13H", 
                                "CSR_MHPMCOUNTER14H", 
                                "CSR_MHPMCOUNTER15H", 
                                "CSR_MHPMCOUNTER16H", 
                                "CSR_MHPMCOUNTER17H", 
                                "CSR_MHPMCOUNTER18H", 
                                "CSR_MHPMCOUNTER19H", 
                                "CSR_MHPMCOUNTER20H", 
                                "CSR_MHPMCOUNTER21H", 
                                "CSR_MHPMCOUNTER22H", 
                                "CSR_MHPMCOUNTER23H", 
                                "CSR_MHPMCOUNTER24H", 
                                "CSR_MHPMCOUNTER25H", 
                                "CSR_MHPMCOUNTER26H", 
                                "CSR_MHPMCOUNTER27H", 
                                "CSR_MHPMCOUNTER28H", 
                                "CSR_MHPMCOUNTER29H", 
                                "CSR_MHPMCOUNTER30H", 
                                "CSR_MHPMCOUNTER31H", 
                                "CSR_CPUCTRLSTS", "CSR_SECURESEED"};
        const char* __VenumItemValues[]
        = {"111100010001", "111100010010", "111100010011", 
                                "111100010100", "111100010101", 
                                "1100000000", "1100000001", 
                                "1100000100", "1100000101", 
                                "1100000110", "1100010000", 
                                "1100001010", "1100011010", 
                                "1101000000", "1101000001", 
                                "1101000010", "1101000011", 
                                "1101000100", "1110100000", 
                                "1110100001", "1110100010", 
                                "1110100011", "1110110000", 
                                "1110110001", "1110110010", 
                                "1110110011", "1110110100", 
                                "1110110101", "1110110110", 
                                "1110110111", "1110111000", 
                                "1110111001", "1110111010", 
                                "1110111011", "1110111100", 
                                "1110111101", "1110111110", 
                                "1110111111", "10110101000", 
                                "11101000111", "11101010111", 
                                "11110100000", "11110100001", 
                                "11110100010", "11110100011", 
                                "11110101000", "11110101010", 
                                "11110110000", "11110110001", 
                                "11110110010", "11110110011", 
                                "1100100000", "1100100011", 
                                "1100100100", "1100100101", 
                                "1100100110", "1100100111", 
                                "1100101000", "1100101001", 
                                "1100101010", "1100101011", 
                                "1100101100", "1100101101", 
                                "1100101110", "1100101111", 
                                "1100110000", "1100110001", 
                                "1100110010", "1100110011", 
                                "1100110100", "1100110101", 
                                "1100110110", "1100110111", 
                                "1100111000", "1100111001", 
                                "1100111010", "1100111011", 
                                "1100111100", "1100111101", 
                                "1100111110", "1100111111", 
                                "101100000000", "101100000010", 
                                "101100000011", "101100000100", 
                                "101100000101", "101100000110", 
                                "101100000111", "101100001000", 
                                "101100001001", "101100001010", 
                                "101100001011", "101100001100", 
                                "101100001101", "101100001110", 
                                "101100001111", "101100010000", 
                                "101100010001", "101100010010", 
                                "101100010011", "101100010100", 
                                "101100010101", "101100010110", 
                                "101100010111", "101100011000", 
                                "101100011001", "101100011010", 
                                "101100011011", "101100011100", 
                                "101100011101", "101100011110", 
                                "101100011111", "101110000000", 
                                "101110000010", "101110000011", 
                                "101110000100", "101110000101", 
                                "101110000110", "101110000111", 
                                "101110001000", "101110001001", 
                                "101110001010", "101110001011", 
                                "101110001100", "101110001101", 
                                "101110001110", "101110001111", 
                                "101110010000", "101110010001", 
                                "101110010010", "101110010011", 
                                "101110010100", "101110010101", 
                                "101110010110", "101110010111", 
                                "101110011000", "101110011001", 
                                "101110011010", "101110011011", 
                                "101110011100", "101110011101", 
                                "101110011110", "101110011111", 
                                "11111000000", "11111000001"};
        tracep->declDTypeEnum(294, "ibex_pkg::csr_num_e", 145, 12, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WB_INSTR_LOAD", "WB_INSTR_STORE", "WB_INSTR_OTHER"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(295, "ibex_pkg::wb_instr_type_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PRIV_LVL_M", "PRIV_LVL_H", "PRIV_LVL_S", 
                                "PRIV_LVL_U"};
        const char* __VenumItemValues[]
        = {"11", "10", "1", "0"};
        tracep->declDTypeEnum(296, "ibex_pkg::priv_lvl_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DBG_CAUSE_NONE", "DBG_CAUSE_EBREAK", "DBG_CAUSE_TRIGGER", 
                                "DBG_CAUSE_HALTREQ", 
                                "DBG_CAUSE_STEP"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(297, "ibex_pkg::dbg_cause_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MD_IDLE", "MD_ABS_A", "MD_ABS_B", "MD_COMP", 
                                "MD_LAST", "MD_CHANGE_SIGN", 
                                "MD_FINISH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(298, "ibex_multdiv_fast.md_fsm_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MULL", "MULH"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(299, "ibex_multdiv_fast.mult_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"PMP_ACC_EXEC", "PMP_ACC_WRITE", "PMP_ACC_READ"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(300, "ibex_pkg::pmp_req_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RF_WD_EX", "RF_WD_CSR"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(301, "ibex_pkg::rf_wd_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OP_A_REG_A", "OP_A_FWD", "OP_A_CURRPC", 
                                "OP_A_IMM"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(302, "ibex_pkg::op_a_sel_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OP_B_REG_B", "OP_B_IMM"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(303, "ibex_pkg::op_b_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IMM_B_I", "IMM_B_S", "IMM_B_B", "IMM_B_U", 
                                "IMM_B_J", "IMM_B_INCR_PC", 
                                "IMM_B_INCR_ADDR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(304, "ibex_pkg::imm_b_sel_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IMM_A_Z", "IMM_A_ZERO"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(305, "ibex_pkg::imm_a_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FIRST_CYCLE", "MULTI_CYCLE"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(306, "ibex_id_stage.id_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RESET", "BOOT_SET", "WAIT_SLEEP", "SLEEP", 
                                "FIRST_FETCH", "DECODE", 
                                "FLUSH", "IRQ_TAKEN", 
                                "DBG_TAKEN_IF", "DBG_TAKEN_ID"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(307, "ibex_pkg::ctrl_fsm_e", 10, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NMI_INT_CAUSE_ECC"};
        const char* __VenumItemValues[]
        = {"0"};
        tracep->declDTypeEnum(308, "ibex_pkg::nmi_int_cause_e", 1, 5, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OPCODE_LOAD", "OPCODE_MISC_MEM", "OPCODE_OP_IMM", 
                                "OPCODE_AUIPC", "OPCODE_STORE", 
                                "OPCODE_OP", "OPCODE_LUI", 
                                "OPCODE_BRANCH", "OPCODE_JALR", 
                                "OPCODE_JAL", "OPCODE_SYSTEM"};
        const char* __VenumItemValues[]
        = {"11", "1111", "10011", "10111", "100011", 
                                "110011", "110111", 
                                "1100011", "1100111", 
                                "1101111", "1110011"};
        tracep->declDTypeEnum(309, "ibex_pkg::opcode_e", 11, 7, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"OUT_OF_RESET", "AWAIT_SCRAMBLE_KEY", "INVAL_CACHE", 
                                "IDLE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(310, "ibex_icache.inval_state_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT_GNT_MIS", "WAIT_RVALID_MIS", 
                                "WAIT_GNT", "WAIT_RVALID_MIS_GNTS_DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(311, "ibex_load_store_unit.ls_fsm_e", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"EVEN", "ODD"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(312, "prim_sync_reqack.sync_reqack_fsm_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"StReset", "StInit", "StIdle", "StRead", 
                                "StProg", "StErase", 
                                "StErSuspend"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(313, "prim_generic_flash_bank.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vsim___024root__trace_decl_types(VerilatedFst* tracep) {
    Vsim___024root__traceDeclTypesSub0(tracep);
}
