// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_dense_3_HH_
#define _k2c_dense_3_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "k2c_dot.h"
#include "k2c_affine_matmul.h"
#include "k2c_relu_func.h"
#include "vlsiModel_fadd_32cud.h"
#include "vlsiModel_mul_64sbkb.h"

namespace ap_rtl {

struct k2c_dense_3 : public sc_module {
    // Port declarations 32
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<17> > output_array_address0;
    sc_out< sc_logic > output_array_ce0;
    sc_out< sc_logic > output_array_we0;
    sc_out< sc_lv<32> > output_array_d0;
    sc_in< sc_lv<32> > output_array_q0;
    sc_in< sc_lv<64> > output_numel_read;
    sc_out< sc_lv<17> > input_array_address0;
    sc_out< sc_logic > input_array_ce0;
    sc_in< sc_lv<32> > input_array_q0;
    sc_in< sc_lv<64> > input_ndim_read;
    sc_in< sc_lv<64> > input_numel_read;
    sc_out< sc_lv<3> > input_shape_address0;
    sc_out< sc_logic > input_shape_ce0;
    sc_in< sc_lv<64> > input_shape_q0;
    sc_out< sc_lv<17> > kernel_array_address0;
    sc_out< sc_logic > kernel_array_ce0;
    sc_in< sc_lv<32> > kernel_array_q0;
    sc_in< sc_lv<64> > kernel_ndim_read;
    sc_in< sc_lv<64> > kernel_numel_read;
    sc_out< sc_lv<3> > kernel_shape_address0;
    sc_out< sc_logic > kernel_shape_ce0;
    sc_in< sc_lv<64> > kernel_shape_q0;
    sc_out< sc_lv<17> > bias_array_address0;
    sc_out< sc_logic > bias_array_ce0;
    sc_in< sc_lv<32> > bias_array_q0;
    sc_in< sc_lv<64> > bias_numel_read;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_dense_3(sc_module_name name);
    SC_HAS_PROCESS(k2c_dense_3);

    ~k2c_dense_3();

    sc_trace_file* mVcdFile;

    k2c_dot* grp_k2c_dot_fu_173;
    k2c_affine_matmul* grp_k2c_affine_matmul_fu_198;
    k2c_relu_func* grp_k2c_relu_func_fu_214;
    vlsiModel_fadd_32cud<1,5,32,32,32>* vlsiModel_fadd_32cud_U100;
    vlsiModel_mul_64sbkb<1,2,64,64,64>* vlsiModel_mul_64sbkb_U101;
    sc_signal< sc_lv<17> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > tmp_fu_225_p2;
    sc_signal< sc_lv<1> > tmp_reg_337;
    sc_signal< sc_lv<64> > tmp_4_fu_231_p2;
    sc_signal< sc_lv<64> > tmp_4_reg_341;
    sc_signal< sc_lv<1> > icmp_fu_248_p2;
    sc_signal< sc_lv<1> > icmp_reg_346;
    sc_signal< sc_lv<64> > j_fu_268_p2;
    sc_signal< sc_lv<64> > j_reg_367;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > exitcond_i_fu_263_p2;
    sc_signal< sc_lv<17> > output_array_addr_reg_377;
    sc_signal< sc_lv<64> > i_fu_289_p2;
    sc_signal< sc_lv<32> > bias_array_load_reg_387;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > output_array_load_reg_392;
    sc_signal< sc_lv<32> > grp_fu_221_p2;
    sc_signal< sc_lv<32> > tmp_26_i_reg_397;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<64> > outrows1_fu_294_p3;
    sc_signal< sc_lv<64> > outrows1_reg_402;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > outcols_reg_408;
    sc_signal< sc_lv<64> > innerdim_reg_419;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<64> > grp_fu_301_p2;
    sc_signal< sc_lv<64> > outsize_reg_424;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_ap_idle;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_ap_ready;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_ap_done;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_ap_start;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_ap_done;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_ap_idle;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_ap_ready;
    sc_signal< sc_lv<17> > grp_k2c_dot_fu_173_C_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_C_array_ce0;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_C_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_fu_173_C_array_d0;
    sc_signal< sc_lv<17> > grp_k2c_dot_fu_173_A_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_A_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dot_fu_173_A_shape_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_A_shape_ce0;
    sc_signal< sc_lv<17> > grp_k2c_dot_fu_173_B_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_B_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dot_fu_173_B_shape_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_B_shape_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_ap_start;
    sc_signal< sc_lv<17> > grp_k2c_affine_matmul_fu_198_C_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_C_ce0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_C_we0;
    sc_signal< sc_lv<32> > grp_k2c_affine_matmul_fu_198_C_d0;
    sc_signal< sc_lv<17> > grp_k2c_affine_matmul_fu_198_A_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_A_ce0;
    sc_signal< sc_lv<17> > grp_k2c_affine_matmul_fu_198_B_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_B_ce0;
    sc_signal< sc_lv<17> > grp_k2c_affine_matmul_fu_198_d_address0;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_d_ce0;
    sc_signal< sc_logic > grp_k2c_relu_func_fu_214_ap_start;
    sc_signal< sc_logic > grp_k2c_relu_func_fu_214_ap_done;
    sc_signal< sc_logic > grp_k2c_relu_func_fu_214_ap_idle;
    sc_signal< sc_logic > grp_k2c_relu_func_fu_214_ap_ready;
    sc_signal< sc_lv<17> > grp_k2c_relu_func_fu_214_x_address0;
    sc_signal< sc_logic > grp_k2c_relu_func_fu_214_x_ce0;
    sc_signal< sc_logic > grp_k2c_relu_func_fu_214_x_we0;
    sc_signal< sc_lv<32> > grp_k2c_relu_func_fu_214_x_d0;
    sc_signal< sc_lv<64> > grp_k2c_relu_func_fu_214_size;
    sc_signal< sc_lv<64> > i_i_reg_149;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > j_i_reg_161;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_i_fu_254_p2;
    sc_signal< sc_logic > grp_k2c_dot_fu_173_ap_start_reg;
    sc_signal< sc_logic > grp_k2c_affine_matmul_fu_198_ap_start_reg;
    sc_signal< sc_logic > grp_k2c_relu_func_fu_214_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > tmp_i_cast_fu_284_p1;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<63> > tmp_67_fu_238_p4;
    sc_signal< sc_lv<18> > tmp_69_fu_274_p1;
    sc_signal< sc_lv<18> > tmp_68_fu_259_p1;
    sc_signal< sc_lv<18> > tmp_i_38_fu_278_p2;
    sc_signal< sc_logic > grp_fu_301_ce;
    sc_signal< bool > ap_block_state17_on_subcall_done;
    sc_signal< sc_lv<17> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<17> ap_ST_fsm_state1;
    static const sc_lv<17> ap_ST_fsm_state2;
    static const sc_lv<17> ap_ST_fsm_state3;
    static const sc_lv<17> ap_ST_fsm_state4;
    static const sc_lv<17> ap_ST_fsm_state5;
    static const sc_lv<17> ap_ST_fsm_state6;
    static const sc_lv<17> ap_ST_fsm_state7;
    static const sc_lv<17> ap_ST_fsm_state8;
    static const sc_lv<17> ap_ST_fsm_state9;
    static const sc_lv<17> ap_ST_fsm_state10;
    static const sc_lv<17> ap_ST_fsm_state11;
    static const sc_lv<17> ap_ST_fsm_state12;
    static const sc_lv<17> ap_ST_fsm_state13;
    static const sc_lv<17> ap_ST_fsm_state14;
    static const sc_lv<17> ap_ST_fsm_state15;
    static const sc_lv<17> ap_ST_fsm_state16;
    static const sc_lv<17> ap_ST_fsm_state17;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<63> ap_const_lv63_0;
    static const bool ap_const_boolean_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_state17_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_bias_array_address0();
    void thread_bias_array_ce0();
    void thread_exitcond_i_fu_263_p2();
    void thread_grp_fu_301_ce();
    void thread_grp_k2c_affine_matmul_fu_198_ap_start();
    void thread_grp_k2c_dot_fu_173_ap_start();
    void thread_grp_k2c_relu_func_fu_214_ap_start();
    void thread_grp_k2c_relu_func_fu_214_size();
    void thread_i_fu_289_p2();
    void thread_icmp_fu_248_p2();
    void thread_input_array_address0();
    void thread_input_array_ce0();
    void thread_input_shape_address0();
    void thread_input_shape_ce0();
    void thread_j_fu_268_p2();
    void thread_kernel_array_address0();
    void thread_kernel_array_ce0();
    void thread_kernel_shape_address0();
    void thread_kernel_shape_ce0();
    void thread_output_array_address0();
    void thread_output_array_ce0();
    void thread_output_array_d0();
    void thread_output_array_we0();
    void thread_outrows1_fu_294_p3();
    void thread_tmp_4_fu_231_p2();
    void thread_tmp_67_fu_238_p4();
    void thread_tmp_68_fu_259_p1();
    void thread_tmp_69_fu_274_p1();
    void thread_tmp_fu_225_p2();
    void thread_tmp_i_38_fu_278_p2();
    void thread_tmp_i_cast_fu_284_p1();
    void thread_tmp_i_fu_254_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
