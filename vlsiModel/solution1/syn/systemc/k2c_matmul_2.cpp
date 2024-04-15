// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "k2c_matmul_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic k2c_matmul_2::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic k2c_matmul_2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state1 = "1";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state2 = "10";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state3 = "100";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state4 = "1000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state5 = "10000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state6 = "100000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state7 = "1000000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state8 = "10000000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state9 = "100000000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state10 = "1000000000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state11 = "10000000000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state12 = "100000000000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state13 = "1000000000000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state14 = "10000000000000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state15 = "100000000000000";
const sc_lv<16> k2c_matmul_2::ap_ST_fsm_state16 = "1000000000000000";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_1 = "1";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_2 = "10";
const sc_lv<1> k2c_matmul_2::ap_const_lv1_1 = "1";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_3 = "11";
const sc_lv<1> k2c_matmul_2::ap_const_lv1_0 = "0";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_4 = "100";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_5 = "101";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_6 = "110";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_9 = "1001";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_E = "1110";
const sc_lv<17> k2c_matmul_2::ap_const_lv17_0 = "00000000000000000";
const sc_lv<64> k2c_matmul_2::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_F = "1111";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_8 = "1000";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_A = "1010";
const sc_lv<32> k2c_matmul_2::ap_const_lv32_7 = "111";
const sc_lv<17> k2c_matmul_2::ap_const_lv17_1 = "1";
const sc_lv<64> k2c_matmul_2::ap_const_lv64_1 = "1";
const bool k2c_matmul_2::ap_const_boolean_1 = true;

k2c_matmul_2::k2c_matmul_2(sc_module_name name) : sc_module(name), mVcdFile(0) {
    vlsiModel_fadd_32cud_U159 = new vlsiModel_fadd_32cud<1,5,32,32,32>("vlsiModel_fadd_32cud_U159");
    vlsiModel_fadd_32cud_U159->clk(ap_clk);
    vlsiModel_fadd_32cud_U159->reset(ap_rst);
    vlsiModel_fadd_32cud_U159->din0(C_load_reg_405);
    vlsiModel_fadd_32cud_U159->din1(tmp_7_reg_400);
    vlsiModel_fadd_32cud_U159->ce(ap_var_for_const0);
    vlsiModel_fadd_32cud_U159->dout(grp_fu_137_p2);
    vlsiModel_fmul_32dEe_U160 = new vlsiModel_fmul_32dEe<1,3,32,32,32>("vlsiModel_fmul_32dEe_U160");
    vlsiModel_fmul_32dEe_U160->clk(ap_clk);
    vlsiModel_fmul_32dEe_U160->reset(ap_rst);
    vlsiModel_fmul_32dEe_U160->din0(B_load_2_reg_390);
    vlsiModel_fmul_32dEe_U160->din1(B_load_reg_395);
    vlsiModel_fmul_32dEe_U160->ce(ap_var_for_const0);
    vlsiModel_fmul_32dEe_U160->dout(grp_fu_141_p2);
    vlsiModel_mul_64sbkb_U161 = new vlsiModel_mul_64sbkb<1,2,64,64,64>("vlsiModel_mul_64sbkb_U161");
    vlsiModel_mul_64sbkb_U161->clk(ap_clk);
    vlsiModel_mul_64sbkb_U161->reset(ap_rst);
    vlsiModel_mul_64sbkb_U161->din0(outcols);
    vlsiModel_mul_64sbkb_U161->din1(outrows);
    vlsiModel_mul_64sbkb_U161->ce(ap_var_for_const0);
    vlsiModel_mul_64sbkb_U161->dout(grp_fu_145_p2);
    vlsiModel_mul_muleOg_U162 = new vlsiModel_mul_muleOg<1,1,18,18,18>("vlsiModel_mul_muleOg_U162");
    vlsiModel_mul_muleOg_U162->din0(outrowidx_fu_262_p0);
    vlsiModel_mul_muleOg_U162->din1(tmp_13_reg_316);
    vlsiModel_mul_muleOg_U162->dout(outrowidx_fu_262_p2);
    vlsiModel_mul_mulrcU_U163 = new vlsiModel_mul_mulrcU<1,1,10,10,10>("vlsiModel_mul_mulrcU_U163");
    vlsiModel_mul_mulrcU_U163->din0(inneridx_fu_267_p0);
    vlsiModel_mul_mulrcU_U163->din1(tmp_14_reg_321);
    vlsiModel_mul_mulrcU_U163->dout(inneridx_fu_267_p2);
    vlsiModel_mac_mulsc4_U164 = new vlsiModel_mac_mulsc4<1,1,10,10,10,10>("vlsiModel_mac_mulsc4_U164");
    vlsiModel_mac_mulsc4_U164->din0(tmp_19_fu_198_p1);
    vlsiModel_mac_mulsc4_U164->din1(tmp_15_reg_326);
    vlsiModel_mac_mulsc4_U164->din2(tmp_16_reg_331);
    vlsiModel_mac_mulsc4_U164->dout(grp_fu_272_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_B_address0);
    sensitive << ( B_addr_reg_362 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_B_address1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( sum3_cast_fu_247_p1 );

    SC_METHOD(thread_B_ce0);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_B_ce1);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_C_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( C_addr_2_reg_385 );
    sensitive << ( ap_CS_fsm_state16 );
    sensitive << ( a_cast_fu_151_p1 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_C_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state16 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_C_d0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_8_reg_410 );
    sensitive << ( ap_CS_fsm_state16 );

    SC_METHOD(thread_C_we0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond3_fu_156_p2 );
    sensitive << ( ap_CS_fsm_state16 );

    SC_METHOD(thread_a10_fu_161_p2);
    sensitive << ( a_reg_93 );

    SC_METHOD(thread_a_cast_fu_151_p1);
    sensitive << ( a_reg_93 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state11);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state15);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state16);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( exitcond2_fu_187_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( exitcond2_fu_187_p2 );

    SC_METHOD(thread_exitcond1_fu_202_p2);
    sensitive << ( innerdim );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( k_reg_115 );

    SC_METHOD(thread_exitcond2_fu_187_p1);
    sensitive << ( outrows );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_exitcond2_fu_187_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( i_reg_104 );
    sensitive << ( exitcond2_fu_187_p1 );

    SC_METHOD(thread_exitcond3_fu_156_p2);
    sensitive << ( tmp_reg_303 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( a_cast_fu_151_p1 );

    SC_METHOD(thread_exitcond_fu_231_p1);
    sensitive << ( outcols );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_exitcond_fu_231_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( j_reg_126 );
    sensitive << ( exitcond_fu_231_p1 );

    SC_METHOD(thread_i_4_fu_192_p2);
    sensitive << ( i_reg_104 );

    SC_METHOD(thread_inneridx_fu_267_p0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( i_reg_104 );

    SC_METHOD(thread_j_2_fu_236_p2);
    sensitive << ( j_reg_126 );

    SC_METHOD(thread_k_2_fu_207_p2);
    sensitive << ( k_reg_115 );

    SC_METHOD(thread_outrowidx_fu_262_p0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( i_reg_104 );

    SC_METHOD(thread_sum2_cast_fu_257_p1);
    sensitive << ( sum2_fu_252_p2 );

    SC_METHOD(thread_sum2_fu_252_p2);
    sensitive << ( outrowidx_reg_344 );
    sensitive << ( tmp_20_fu_223_p1 );

    SC_METHOD(thread_sum3_cast_fu_247_p1);
    sensitive << ( sum3_fu_242_p2 );

    SC_METHOD(thread_sum3_fu_242_p2);
    sensitive << ( tmp1_reg_367 );
    sensitive << ( tmp_21_fu_227_p1 );

    SC_METHOD(thread_sum_cast_fu_218_p1);
    sensitive << ( sum_fu_213_p2 );

    SC_METHOD(thread_sum_fu_213_p2);
    sensitive << ( inneridx_reg_349 );
    sensitive << ( tmp_19_fu_198_p1 );

    SC_METHOD(thread_tmp_13_fu_167_p0);
    sensitive << ( outcols );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp_13_fu_167_p1);
    sensitive << ( tmp_13_fu_167_p0 );

    SC_METHOD(thread_tmp_14_fu_170_p1);
    sensitive << ( innerdim );

    SC_METHOD(thread_tmp_15_fu_173_p0);
    sensitive << ( outcols );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp_15_fu_173_p1);
    sensitive << ( tmp_15_fu_173_p0 );

    SC_METHOD(thread_tmp_16_fu_176_p1);
    sensitive << ( B_offset );

    SC_METHOD(thread_tmp_19_fu_198_p1);
    sensitive << ( k_reg_115 );

    SC_METHOD(thread_tmp_20_fu_223_p1);
    sensitive << ( j_reg_126 );

    SC_METHOD(thread_tmp_21_fu_227_p1);
    sensitive << ( j_reg_126 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond3_fu_156_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( exitcond2_fu_187_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond1_fu_202_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( exitcond_fu_231_p2 );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "0000000000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "k2c_matmul_2_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, C_address0, "(port)C_address0");
    sc_trace(mVcdFile, C_ce0, "(port)C_ce0");
    sc_trace(mVcdFile, C_we0, "(port)C_we0");
    sc_trace(mVcdFile, C_d0, "(port)C_d0");
    sc_trace(mVcdFile, C_q0, "(port)C_q0");
    sc_trace(mVcdFile, B_address0, "(port)B_address0");
    sc_trace(mVcdFile, B_ce0, "(port)B_ce0");
    sc_trace(mVcdFile, B_q0, "(port)B_q0");
    sc_trace(mVcdFile, B_address1, "(port)B_address1");
    sc_trace(mVcdFile, B_ce1, "(port)B_ce1");
    sc_trace(mVcdFile, B_q1, "(port)B_q1");
    sc_trace(mVcdFile, B_offset, "(port)B_offset");
    sc_trace(mVcdFile, outrows, "(port)outrows");
    sc_trace(mVcdFile, outcols, "(port)outcols");
    sc_trace(mVcdFile, innerdim, "(port)innerdim");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, grp_fu_145_p2, "grp_fu_145_p2");
    sc_trace(mVcdFile, tmp_reg_303, "tmp_reg_303");
    sc_trace(mVcdFile, a10_fu_161_p2, "a10_fu_161_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_13_fu_167_p1, "tmp_13_fu_167_p1");
    sc_trace(mVcdFile, tmp_13_reg_316, "tmp_13_reg_316");
    sc_trace(mVcdFile, exitcond3_fu_156_p2, "exitcond3_fu_156_p2");
    sc_trace(mVcdFile, tmp_14_fu_170_p1, "tmp_14_fu_170_p1");
    sc_trace(mVcdFile, tmp_14_reg_321, "tmp_14_reg_321");
    sc_trace(mVcdFile, tmp_15_fu_173_p1, "tmp_15_fu_173_p1");
    sc_trace(mVcdFile, tmp_15_reg_326, "tmp_15_reg_326");
    sc_trace(mVcdFile, tmp_16_fu_176_p1, "tmp_16_fu_176_p1");
    sc_trace(mVcdFile, tmp_16_reg_331, "tmp_16_reg_331");
    sc_trace(mVcdFile, i_4_fu_192_p2, "i_4_fu_192_p2");
    sc_trace(mVcdFile, i_4_reg_339, "i_4_reg_339");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, outrowidx_fu_262_p2, "outrowidx_fu_262_p2");
    sc_trace(mVcdFile, outrowidx_reg_344, "outrowidx_reg_344");
    sc_trace(mVcdFile, exitcond2_fu_187_p2, "exitcond2_fu_187_p2");
    sc_trace(mVcdFile, inneridx_fu_267_p2, "inneridx_fu_267_p2");
    sc_trace(mVcdFile, inneridx_reg_349, "inneridx_reg_349");
    sc_trace(mVcdFile, k_2_fu_207_p2, "k_2_fu_207_p2");
    sc_trace(mVcdFile, k_2_reg_357, "k_2_reg_357");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, B_addr_reg_362, "B_addr_reg_362");
    sc_trace(mVcdFile, exitcond1_fu_202_p2, "exitcond1_fu_202_p2");
    sc_trace(mVcdFile, grp_fu_272_p3, "grp_fu_272_p3");
    sc_trace(mVcdFile, tmp1_reg_367, "tmp1_reg_367");
    sc_trace(mVcdFile, j_2_fu_236_p2, "j_2_fu_236_p2");
    sc_trace(mVcdFile, j_2_reg_375, "j_2_reg_375");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, exitcond_fu_231_p2, "exitcond_fu_231_p2");
    sc_trace(mVcdFile, C_addr_2_reg_385, "C_addr_2_reg_385");
    sc_trace(mVcdFile, B_load_2_reg_390, "B_load_2_reg_390");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, B_load_reg_395, "B_load_reg_395");
    sc_trace(mVcdFile, grp_fu_141_p2, "grp_fu_141_p2");
    sc_trace(mVcdFile, tmp_7_reg_400, "tmp_7_reg_400");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, C_load_reg_405, "C_load_reg_405");
    sc_trace(mVcdFile, grp_fu_137_p2, "grp_fu_137_p2");
    sc_trace(mVcdFile, tmp_8_reg_410, "tmp_8_reg_410");
    sc_trace(mVcdFile, ap_CS_fsm_state15, "ap_CS_fsm_state15");
    sc_trace(mVcdFile, a_reg_93, "a_reg_93");
    sc_trace(mVcdFile, i_reg_104, "i_reg_104");
    sc_trace(mVcdFile, k_reg_115, "k_reg_115");
    sc_trace(mVcdFile, j_reg_126, "j_reg_126");
    sc_trace(mVcdFile, ap_CS_fsm_state16, "ap_CS_fsm_state16");
    sc_trace(mVcdFile, a_cast_fu_151_p1, "a_cast_fu_151_p1");
    sc_trace(mVcdFile, sum_cast_fu_218_p1, "sum_cast_fu_218_p1");
    sc_trace(mVcdFile, sum3_cast_fu_247_p1, "sum3_cast_fu_247_p1");
    sc_trace(mVcdFile, sum2_cast_fu_257_p1, "sum2_cast_fu_257_p1");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, ap_CS_fsm_state11, "ap_CS_fsm_state11");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, tmp_13_fu_167_p0, "tmp_13_fu_167_p0");
    sc_trace(mVcdFile, tmp_15_fu_173_p0, "tmp_15_fu_173_p0");
    sc_trace(mVcdFile, exitcond2_fu_187_p1, "exitcond2_fu_187_p1");
    sc_trace(mVcdFile, tmp_19_fu_198_p1, "tmp_19_fu_198_p1");
    sc_trace(mVcdFile, sum_fu_213_p2, "sum_fu_213_p2");
    sc_trace(mVcdFile, exitcond_fu_231_p1, "exitcond_fu_231_p1");
    sc_trace(mVcdFile, tmp_21_fu_227_p1, "tmp_21_fu_227_p1");
    sc_trace(mVcdFile, sum3_fu_242_p2, "sum3_fu_242_p2");
    sc_trace(mVcdFile, tmp_20_fu_223_p1, "tmp_20_fu_223_p1");
    sc_trace(mVcdFile, sum2_fu_252_p2, "sum2_fu_252_p2");
    sc_trace(mVcdFile, outrowidx_fu_262_p0, "outrowidx_fu_262_p0");
    sc_trace(mVcdFile, inneridx_fu_267_p0, "inneridx_fu_267_p0");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

k2c_matmul_2::~k2c_matmul_2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete vlsiModel_fadd_32cud_U159;
    delete vlsiModel_fmul_32dEe_U160;
    delete vlsiModel_mul_64sbkb_U161;
    delete vlsiModel_mul_muleOg_U162;
    delete vlsiModel_mul_mulrcU_U163;
    delete vlsiModel_mac_mulsc4_U164;
}

void k2c_matmul_2::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void k2c_matmul_2::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(exitcond3_fu_156_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        a_reg_93 = a10_fu_161_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_reg_93 = ap_const_lv17_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(exitcond1_fu_202_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        i_reg_104 = i_4_reg_339.read();
    } else if ((esl_seteq<1,1,1>(exitcond3_fu_156_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        i_reg_104 = ap_const_lv64_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_202_p2.read(), ap_const_lv1_0))) {
        j_reg_126 = ap_const_lv64_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        j_reg_126 = j_2_reg_375.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_fu_231_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        k_reg_115 = k_2_reg_357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(exitcond2_fu_187_p2.read(), ap_const_lv1_0))) {
        k_reg_115 = ap_const_lv64_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(exitcond1_fu_202_p2.read(), ap_const_lv1_0))) {
        B_addr_reg_362 =  (sc_lv<9>) (sum_cast_fu_218_p1.read());
        tmp1_reg_367 = grp_fu_272_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        B_load_2_reg_390 = B_q0.read();
        B_load_reg_395 = B_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(exitcond_fu_231_p2.read(), ap_const_lv1_0))) {
        C_addr_2_reg_385 =  (sc_lv<17>) (sum2_cast_fu_257_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        C_load_reg_405 = C_q0.read();
        tmp_7_reg_400 = grp_fu_141_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        i_4_reg_339 = i_4_fu_192_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(exitcond2_fu_187_p2.read(), ap_const_lv1_0))) {
        inneridx_reg_349 = inneridx_fu_267_p2.read();
        outrowidx_reg_344 = outrowidx_fu_262_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        j_2_reg_375 = j_2_fu_236_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        k_2_reg_357 = k_2_fu_207_p2.read();
    }
    if ((esl_seteq<1,1,1>(exitcond3_fu_156_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        tmp_13_reg_316 = tmp_13_fu_167_p1.read();
        tmp_14_reg_321 = tmp_14_fu_170_p1.read();
        tmp_15_reg_326 = tmp_15_fu_173_p1.read();
        tmp_16_reg_331 = tmp_16_fu_176_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        tmp_8_reg_410 = grp_fu_137_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        tmp_reg_303 = grp_fu_145_p2.read();
    }
}

void k2c_matmul_2::thread_B_address0() {
    B_address0 = B_addr_reg_362.read();
}

void k2c_matmul_2::thread_B_address1() {
    B_address1 =  (sc_lv<9>) (sum3_cast_fu_247_p1.read());
}

void k2c_matmul_2::thread_B_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        B_ce0 = ap_const_logic_1;
    } else {
        B_ce0 = ap_const_logic_0;
    }
}

void k2c_matmul_2::thread_B_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        B_ce1 = ap_const_logic_1;
    } else {
        B_ce1 = ap_const_logic_0;
    }
}

void k2c_matmul_2::thread_C_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        C_address0 = C_addr_2_reg_385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        C_address0 =  (sc_lv<17>) (a_cast_fu_151_p1.read());
    } else {
        C_address0 = "XXXXXXXXXXXXXXXXX";
    }
}

void k2c_matmul_2::thread_C_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        C_ce0 = ap_const_logic_1;
    } else {
        C_ce0 = ap_const_logic_0;
    }
}

void k2c_matmul_2::thread_C_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        C_d0 = tmp_8_reg_410.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        C_d0 = ap_const_lv32_0;
    } else {
        C_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_matmul_2::thread_C_we0() {
    if (((esl_seteq<1,1,1>(exitcond3_fu_156_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()))) {
        C_we0 = ap_const_logic_1;
    } else {
        C_we0 = ap_const_logic_0;
    }
}

void k2c_matmul_2::thread_a10_fu_161_p2() {
    a10_fu_161_p2 = (!a_reg_93.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(a_reg_93.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void k2c_matmul_2::thread_a_cast_fu_151_p1() {
    a_cast_fu_151_p1 = esl_zext<64,17>(a_reg_93.read());
}

void k2c_matmul_2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void k2c_matmul_2::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void k2c_matmul_2::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void k2c_matmul_2::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void k2c_matmul_2::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void k2c_matmul_2::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void k2c_matmul_2::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void k2c_matmul_2::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void k2c_matmul_2::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void k2c_matmul_2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void k2c_matmul_2::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void k2c_matmul_2::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void k2c_matmul_2::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void k2c_matmul_2::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(exitcond2_fu_187_p2.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void k2c_matmul_2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void k2c_matmul_2::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(exitcond2_fu_187_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void k2c_matmul_2::thread_exitcond1_fu_202_p2() {
    exitcond1_fu_202_p2 = (!k_reg_115.read().is_01() || !innerdim.read().is_01())? sc_lv<1>(): sc_lv<1>(k_reg_115.read() == innerdim.read());
}

void k2c_matmul_2::thread_exitcond2_fu_187_p1() {
    exitcond2_fu_187_p1 = outrows.read();
}

void k2c_matmul_2::thread_exitcond2_fu_187_p2() {
    exitcond2_fu_187_p2 = (!i_reg_104.read().is_01() || !exitcond2_fu_187_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(i_reg_104.read() == exitcond2_fu_187_p1.read());
}

void k2c_matmul_2::thread_exitcond3_fu_156_p2() {
    exitcond3_fu_156_p2 = (!a_cast_fu_151_p1.read().is_01() || !tmp_reg_303.read().is_01())? sc_lv<1>(): sc_lv<1>(a_cast_fu_151_p1.read() == tmp_reg_303.read());
}

void k2c_matmul_2::thread_exitcond_fu_231_p1() {
    exitcond_fu_231_p1 = outcols.read();
}

void k2c_matmul_2::thread_exitcond_fu_231_p2() {
    exitcond_fu_231_p2 = (!j_reg_126.read().is_01() || !exitcond_fu_231_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(j_reg_126.read() == exitcond_fu_231_p1.read());
}

void k2c_matmul_2::thread_i_4_fu_192_p2() {
    i_4_fu_192_p2 = (!ap_const_lv64_1.is_01() || !i_reg_104.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ap_const_lv64_1) + sc_biguint<64>(i_reg_104.read()));
}

void k2c_matmul_2::thread_inneridx_fu_267_p0() {
    inneridx_fu_267_p0 = i_reg_104.read().range(10-1, 0);
}

void k2c_matmul_2::thread_j_2_fu_236_p2() {
    j_2_fu_236_p2 = (!ap_const_lv64_1.is_01() || !j_reg_126.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ap_const_lv64_1) + sc_biguint<64>(j_reg_126.read()));
}

void k2c_matmul_2::thread_k_2_fu_207_p2() {
    k_2_fu_207_p2 = (!ap_const_lv64_1.is_01() || !k_reg_115.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ap_const_lv64_1) + sc_biguint<64>(k_reg_115.read()));
}

void k2c_matmul_2::thread_outrowidx_fu_262_p0() {
    outrowidx_fu_262_p0 = i_reg_104.read().range(18-1, 0);
}

void k2c_matmul_2::thread_sum2_cast_fu_257_p1() {
    sum2_cast_fu_257_p1 = esl_zext<64,18>(sum2_fu_252_p2.read());
}

void k2c_matmul_2::thread_sum2_fu_252_p2() {
    sum2_fu_252_p2 = (!tmp_20_fu_223_p1.read().is_01() || !outrowidx_reg_344.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_20_fu_223_p1.read()) + sc_bigint<18>(outrowidx_reg_344.read()));
}

void k2c_matmul_2::thread_sum3_cast_fu_247_p1() {
    sum3_cast_fu_247_p1 = esl_zext<64,10>(sum3_fu_242_p2.read());
}

void k2c_matmul_2::thread_sum3_fu_242_p2() {
    sum3_fu_242_p2 = (!tmp1_reg_367.read().is_01() || !tmp_21_fu_227_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp1_reg_367.read()) + sc_biguint<10>(tmp_21_fu_227_p1.read()));
}

void k2c_matmul_2::thread_sum_cast_fu_218_p1() {
    sum_cast_fu_218_p1 = esl_zext<64,10>(sum_fu_213_p2.read());
}

void k2c_matmul_2::thread_sum_fu_213_p2() {
    sum_fu_213_p2 = (!tmp_19_fu_198_p1.read().is_01() || !inneridx_reg_349.read().is_01())? sc_lv<10>(): (sc_bigint<10>(tmp_19_fu_198_p1.read()) + sc_bigint<10>(inneridx_reg_349.read()));
}

void k2c_matmul_2::thread_tmp_13_fu_167_p0() {
    tmp_13_fu_167_p0 = outcols.read();
}

void k2c_matmul_2::thread_tmp_13_fu_167_p1() {
    tmp_13_fu_167_p1 = tmp_13_fu_167_p0.read().range(18-1, 0);
}

void k2c_matmul_2::thread_tmp_14_fu_170_p1() {
    tmp_14_fu_170_p1 = innerdim.read().range(10-1, 0);
}

void k2c_matmul_2::thread_tmp_15_fu_173_p0() {
    tmp_15_fu_173_p0 = outcols.read();
}

void k2c_matmul_2::thread_tmp_15_fu_173_p1() {
    tmp_15_fu_173_p1 = tmp_15_fu_173_p0.read().range(10-1, 0);
}

void k2c_matmul_2::thread_tmp_16_fu_176_p1() {
    tmp_16_fu_176_p1 = B_offset.read().range(10-1, 0);
}

void k2c_matmul_2::thread_tmp_19_fu_198_p1() {
    tmp_19_fu_198_p1 = k_reg_115.read().range(10-1, 0);
}

void k2c_matmul_2::thread_tmp_20_fu_223_p1() {
    tmp_20_fu_223_p1 = j_reg_126.read().range(18-1, 0);
}

void k2c_matmul_2::thread_tmp_21_fu_227_p1() {
    tmp_21_fu_227_p1 = j_reg_126.read().range(10-1, 0);
}

void k2c_matmul_2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(exitcond3_fu_156_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(exitcond2_fu_187_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(exitcond1_fu_202_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(exitcond_fu_231_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
            break;
    }
}

}

