// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_affine_matmul_HH_
#define _k2c_affine_matmul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "vlsiModel_fadd_32cud.h"
#include "vlsiModel_fmul_32dEe.h"
#include "vlsiModel_mul_64sbkb.h"
#include "vlsiModel_mul_muleOg.h"
#include "vlsiModel_mac_mulfYi.h"

namespace ap_rtl {

struct k2c_affine_matmul : public sc_module {
    // Port declarations 23
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<17> > C_address0;
    sc_out< sc_logic > C_ce0;
    sc_out< sc_logic > C_we0;
    sc_out< sc_lv<32> > C_d0;
    sc_in< sc_lv<32> > C_q0;
    sc_out< sc_lv<17> > A_address0;
    sc_out< sc_logic > A_ce0;
    sc_in< sc_lv<32> > A_q0;
    sc_out< sc_lv<17> > B_address0;
    sc_out< sc_logic > B_ce0;
    sc_in< sc_lv<32> > B_q0;
    sc_out< sc_lv<17> > d_address0;
    sc_out< sc_logic > d_ce0;
    sc_in< sc_lv<32> > d_q0;
    sc_in< sc_lv<64> > outrows;
    sc_in< sc_lv<64> > outcols;
    sc_in< sc_lv<64> > innerdim;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_affine_matmul(sc_module_name name);
    SC_HAS_PROCESS(k2c_affine_matmul);

    ~k2c_affine_matmul();

    sc_trace_file* mVcdFile;

    vlsiModel_fadd_32cud<1,5,32,32,32>* vlsiModel_fadd_32cud_U46;
    vlsiModel_fmul_32dEe<1,3,32,32,32>* vlsiModel_fmul_32dEe_U47;
    vlsiModel_mul_64sbkb<1,2,64,64,64>* vlsiModel_mul_64sbkb_U48;
    vlsiModel_mul_muleOg<1,1,18,18,18>* vlsiModel_mul_muleOg_U49;
    vlsiModel_mul_muleOg<1,1,18,18,18>* vlsiModel_mul_muleOg_U50;
    vlsiModel_mac_mulfYi<1,1,18,18,18,18>* vlsiModel_mac_mulfYi_U51;
    sc_signal< sc_lv<23> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > reg_158;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<32> > grp_fu_150_p2;
    sc_signal< sc_lv<32> > reg_163;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > grp_fu_168_p2;
    sc_signal< sc_lv<64> > tmp_reg_301;
    sc_signal< sc_lv<17> > p_1_fu_184_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<18> > tmp_77_fu_190_p1;
    sc_signal< sc_lv<18> > tmp_77_reg_314;
    sc_signal< sc_lv<1> > exitcond3_fu_179_p2;
    sc_signal< sc_lv<18> > tmp_78_fu_193_p1;
    sc_signal< sc_lv<18> > tmp_78_reg_320;
    sc_signal< sc_lv<64> > i_64_fu_205_p2;
    sc_signal< sc_lv<64> > i_64_reg_328;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<18> > outrowidx_fu_265_p2;
    sc_signal< sc_lv<18> > outrowidx_reg_333;
    sc_signal< sc_lv<1> > exitcond2_fu_200_p2;
    sc_signal< sc_lv<18> > inneridx_fu_270_p2;
    sc_signal< sc_lv<18> > inneridx_reg_338;
    sc_signal< sc_lv<18> > tmp_80_fu_211_p1;
    sc_signal< sc_lv<18> > tmp_80_reg_343;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > j_12_fu_220_p2;
    sc_signal< sc_lv<64> > j_12_reg_351;
    sc_signal< sc_lv<17> > C_addr_5_reg_356;
    sc_signal< sc_lv<1> > exitcond1_fu_215_p2;
    sc_signal< sc_lv<64> > k_3_fu_245_p2;
    sc_signal< sc_lv<64> > k_3_reg_364;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > exitcond_fu_240_p2;
    sc_signal< sc_lv<32> > A_load_reg_384;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > B_load_reg_389;
    sc_signal< sc_lv<32> > grp_fu_154_p2;
    sc_signal< sc_lv<32> > tmp_9_reg_394;
    sc_signal< sc_lv<32> > d_load_reg_399;
    sc_signal< sc_lv<17> > p_reg_104;
    sc_signal< sc_lv<64> > i_reg_115;
    sc_signal< sc_lv<64> > j_reg_126;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<64> > k_reg_139;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<64> > p_cast_fu_174_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_231_p1;
    sc_signal< sc_lv<64> > sum5_cast_fu_256_p1;
    sc_signal< sc_lv<64> > sum8_cast_fu_261_p1;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > grp_fu_150_p1;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > tmp_77_fu_190_p0;
    sc_signal< sc_lv<64> > exitcond2_fu_200_p1;
    sc_signal< sc_lv<64> > exitcond1_fu_215_p1;
    sc_signal< sc_lv<18> > sum2_fu_226_p2;
    sc_signal< sc_lv<18> > tmp_81_fu_236_p1;
    sc_signal< sc_lv<18> > sum5_fu_251_p2;
    sc_signal< sc_lv<18> > grp_fu_275_p3;
    sc_signal< sc_lv<18> > tmp_79_fu_196_p1;
    sc_signal< sc_lv<23> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<23> ap_ST_fsm_state1;
    static const sc_lv<23> ap_ST_fsm_state2;
    static const sc_lv<23> ap_ST_fsm_state3;
    static const sc_lv<23> ap_ST_fsm_state4;
    static const sc_lv<23> ap_ST_fsm_state5;
    static const sc_lv<23> ap_ST_fsm_state6;
    static const sc_lv<23> ap_ST_fsm_state7;
    static const sc_lv<23> ap_ST_fsm_state8;
    static const sc_lv<23> ap_ST_fsm_state9;
    static const sc_lv<23> ap_ST_fsm_state10;
    static const sc_lv<23> ap_ST_fsm_state11;
    static const sc_lv<23> ap_ST_fsm_state12;
    static const sc_lv<23> ap_ST_fsm_state13;
    static const sc_lv<23> ap_ST_fsm_state14;
    static const sc_lv<23> ap_ST_fsm_state15;
    static const sc_lv<23> ap_ST_fsm_state16;
    static const sc_lv<23> ap_ST_fsm_state17;
    static const sc_lv<23> ap_ST_fsm_state18;
    static const sc_lv<23> ap_ST_fsm_state19;
    static const sc_lv<23> ap_ST_fsm_state20;
    static const sc_lv<23> ap_ST_fsm_state21;
    static const sc_lv<23> ap_ST_fsm_state22;
    static const sc_lv<23> ap_ST_fsm_state23;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<17> ap_const_lv17_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<17> ap_const_lv17_1;
    static const sc_lv<64> ap_const_lv64_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_A_address0();
    void thread_A_ce0();
    void thread_B_address0();
    void thread_B_ce0();
    void thread_C_address0();
    void thread_C_ce0();
    void thread_C_d0();
    void thread_C_we0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_d_address0();
    void thread_d_ce0();
    void thread_exitcond1_fu_215_p1();
    void thread_exitcond1_fu_215_p2();
    void thread_exitcond2_fu_200_p1();
    void thread_exitcond2_fu_200_p2();
    void thread_exitcond3_fu_179_p2();
    void thread_exitcond_fu_240_p2();
    void thread_grp_fu_150_p1();
    void thread_i_64_fu_205_p2();
    void thread_j_12_fu_220_p2();
    void thread_k_3_fu_245_p2();
    void thread_p_1_fu_184_p2();
    void thread_p_cast_fu_174_p1();
    void thread_sum2_cast_fu_231_p1();
    void thread_sum2_fu_226_p2();
    void thread_sum5_cast_fu_256_p1();
    void thread_sum5_fu_251_p2();
    void thread_sum8_cast_fu_261_p1();
    void thread_tmp_77_fu_190_p0();
    void thread_tmp_77_fu_190_p1();
    void thread_tmp_78_fu_193_p1();
    void thread_tmp_79_fu_196_p1();
    void thread_tmp_80_fu_211_p1();
    void thread_tmp_81_fu_236_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
