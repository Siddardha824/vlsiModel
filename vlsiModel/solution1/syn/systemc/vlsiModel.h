// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _vlsiModel_HH_
#define _vlsiModel_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "k2c_dense_1.h"
#include "k2c_dense_3.h"
#include "k2c_dense_2.h"
#include "k2c_dense.h"
#include "vlsiModel_dense_oxdS.h"
#include "vlsiModel_dense_kyd2.h"
#include "vlsiModel_dense_bAem.h"
#include "vlsiModel_dense_1DeQ.h"
#include "vlsiModel_dense_1Ffa.h"
#include "vlsiModel_dense_2IfE.h"
#include "vlsiModel_dense_2KfY.h"
#include "vlsiModel_dense_3Mgi.h"
#include "vlsiModel_dense_3OgC.h"
#include "vlsiModel_dense_kQgW.h"

namespace ap_rtl {

struct vlsiModel : public sc_module {
    // Port declarations 31
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<17> > dense_input_input_array_address0;
    sc_out< sc_logic > dense_input_input_array_ce0;
    sc_in< sc_lv<32> > dense_input_input_array_q0;
    sc_in< sc_lv<64> > dense_input_input_ndim;
    sc_in< sc_lv<64> > dense_input_input_numel;
    sc_out< sc_lv<3> > dense_input_input_shape_address0;
    sc_out< sc_logic > dense_input_input_shape_ce0;
    sc_in< sc_lv<64> > dense_input_input_shape_q0;
    sc_out< sc_lv<17> > dense_3_output_array_address0;
    sc_out< sc_logic > dense_3_output_array_ce0;
    sc_out< sc_logic > dense_3_output_array_we0;
    sc_out< sc_lv<32> > dense_3_output_array_d0;
    sc_in< sc_lv<32> > dense_3_output_array_q0;
    sc_in< sc_lv<64> > dense_3_output_ndim;
    sc_in< sc_lv<64> > dense_3_output_numel;
    sc_out< sc_lv<3> > dense_3_output_shape_address0;
    sc_out< sc_logic > dense_3_output_shape_ce0;
    sc_out< sc_logic > dense_3_output_shape_we0;
    sc_out< sc_lv<64> > dense_3_output_shape_d0;
    sc_in< sc_lv<64> > dense_3_output_shape_q0;
    sc_out< sc_lv<3> > dense_3_output_shape_address1;
    sc_out< sc_logic > dense_3_output_shape_ce1;
    sc_out< sc_logic > dense_3_output_shape_we1;
    sc_out< sc_lv<64> > dense_3_output_shape_d1;
    sc_in< sc_lv<64> > dense_3_output_shape_q1;
    sc_signal< sc_lv<64> > ap_var_for_const0;


    // Module declarations
    vlsiModel(sc_module_name name);
    SC_HAS_PROCESS(vlsiModel);

    ~vlsiModel();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    vlsiModel_dense_oxdS* dense_output_array_U;
    vlsiModel_dense_kyd2* dense_kernel_array_U;
    vlsiModel_dense_oxdS* dense_kernel_array_0_U;
    vlsiModel_dense_bAem* dense_bias_array_U;
    vlsiModel_dense_oxdS* dense_bias_array_1_U;
    vlsiModel_dense_oxdS* dense_1_output_array_U;
    vlsiModel_dense_1DeQ* dense_1_kernel_array_U;
    vlsiModel_dense_oxdS* dense_1_kernel_array_6_U;
    vlsiModel_dense_1Ffa* dense_1_bias_array_U;
    vlsiModel_dense_oxdS* dense_1_bias_array_7_U;
    vlsiModel_dense_oxdS* dense_2_output_array_U;
    vlsiModel_dense_2IfE* dense_2_kernel_array_U;
    vlsiModel_dense_oxdS* dense_2_kernel_array_4_U;
    vlsiModel_dense_2KfY* dense_2_bias_array_U;
    vlsiModel_dense_oxdS* dense_2_bias_array_5_U;
    vlsiModel_dense_3Mgi* dense_3_kernel_array_U;
    vlsiModel_dense_oxdS* dense_3_kernel_array_2_U;
    vlsiModel_dense_3OgC* dense_3_bias_array_U;
    vlsiModel_dense_oxdS* dense_3_bias_array_3_U;
    vlsiModel_dense_kQgW* dense_kernel_shape_U;
    vlsiModel_dense_kQgW* dense_output_shape_U;
    vlsiModel_dense_kQgW* dense_1_kernel_shape_U;
    vlsiModel_dense_kQgW* dense_1_output_shape_U;
    vlsiModel_dense_kQgW* dense_2_kernel_shape_U;
    vlsiModel_dense_kQgW* dense_2_output_shape_U;
    vlsiModel_dense_kQgW* dense_3_kernel_shape_U;
    k2c_dense_1* grp_k2c_dense_1_fu_788;
    k2c_dense_3* grp_k2c_dense_3_fu_813;
    k2c_dense_2* grp_k2c_dense_2_fu_837;
    k2c_dense* grp_k2c_dense_fu_861;
    sc_signal< sc_lv<41> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > dense_output_ndim;
    sc_signal< sc_lv<64> > dense_output_numel;
    sc_signal< sc_lv<17> > dense_output_array_address0;
    sc_signal< sc_logic > dense_output_array_ce0;
    sc_signal< sc_logic > dense_output_array_we0;
    sc_signal< sc_lv<32> > dense_output_array_d0;
    sc_signal< sc_lv<32> > dense_output_array_q0;
    sc_signal< sc_lv<17> > dense_kernel_array_address0;
    sc_signal< sc_logic > dense_kernel_array_ce0;
    sc_signal< sc_lv<32> > dense_kernel_array_q0;
    sc_signal< sc_lv<17> > dense_kernel_array_0_address0;
    sc_signal< sc_logic > dense_kernel_array_0_ce0;
    sc_signal< sc_logic > dense_kernel_array_0_we0;
    sc_signal< sc_lv<32> > dense_kernel_array_0_q0;
    sc_signal< sc_lv<7> > dense_bias_array_address0;
    sc_signal< sc_logic > dense_bias_array_ce0;
    sc_signal< sc_lv<32> > dense_bias_array_q0;
    sc_signal< sc_lv<17> > dense_bias_array_1_address0;
    sc_signal< sc_logic > dense_bias_array_1_ce0;
    sc_signal< sc_logic > dense_bias_array_1_we0;
    sc_signal< sc_lv<32> > dense_bias_array_1_q0;
    sc_signal< sc_lv<64> > dense_1_output_ndim;
    sc_signal< sc_lv<64> > dense_1_output_numel;
    sc_signal< sc_lv<17> > dense_1_output_array_address0;
    sc_signal< sc_logic > dense_1_output_array_ce0;
    sc_signal< sc_logic > dense_1_output_array_we0;
    sc_signal< sc_lv<32> > dense_1_output_array_d0;
    sc_signal< sc_lv<32> > dense_1_output_array_q0;
    sc_signal< sc_lv<64> > dense_1_kernel_ndim;
    sc_signal< sc_lv<64> > dense_1_kernel_numel;
    sc_signal< sc_lv<13> > dense_1_kernel_array_address0;
    sc_signal< sc_logic > dense_1_kernel_array_ce0;
    sc_signal< sc_lv<32> > dense_1_kernel_array_q0;
    sc_signal< sc_lv<17> > dense_1_kernel_array_6_address0;
    sc_signal< sc_logic > dense_1_kernel_array_6_ce0;
    sc_signal< sc_logic > dense_1_kernel_array_6_we0;
    sc_signal< sc_lv<32> > dense_1_kernel_array_6_q0;
    sc_signal< sc_lv<64> > dense_1_bias_numel;
    sc_signal< sc_lv<6> > dense_1_bias_array_address0;
    sc_signal< sc_logic > dense_1_bias_array_ce0;
    sc_signal< sc_lv<32> > dense_1_bias_array_q0;
    sc_signal< sc_lv<17> > dense_1_bias_array_7_address0;
    sc_signal< sc_logic > dense_1_bias_array_7_ce0;
    sc_signal< sc_logic > dense_1_bias_array_7_we0;
    sc_signal< sc_lv<32> > dense_1_bias_array_7_q0;
    sc_signal< sc_lv<64> > dense_2_output_ndim;
    sc_signal< sc_lv<64> > dense_2_output_numel;
    sc_signal< sc_lv<17> > dense_2_output_array_address0;
    sc_signal< sc_logic > dense_2_output_array_ce0;
    sc_signal< sc_logic > dense_2_output_array_we0;
    sc_signal< sc_lv<32> > dense_2_output_array_d0;
    sc_signal< sc_lv<32> > dense_2_output_array_q0;
    sc_signal< sc_lv<64> > dense_2_kernel_ndim;
    sc_signal< sc_lv<64> > dense_2_kernel_numel;
    sc_signal< sc_lv<11> > dense_2_kernel_array_address0;
    sc_signal< sc_logic > dense_2_kernel_array_ce0;
    sc_signal< sc_lv<32> > dense_2_kernel_array_q0;
    sc_signal< sc_lv<17> > dense_2_kernel_array_4_address0;
    sc_signal< sc_logic > dense_2_kernel_array_4_ce0;
    sc_signal< sc_logic > dense_2_kernel_array_4_we0;
    sc_signal< sc_lv<32> > dense_2_kernel_array_4_q0;
    sc_signal< sc_lv<64> > dense_2_bias_numel;
    sc_signal< sc_lv<5> > dense_2_bias_array_address0;
    sc_signal< sc_logic > dense_2_bias_array_ce0;
    sc_signal< sc_lv<32> > dense_2_bias_array_q0;
    sc_signal< sc_lv<17> > dense_2_bias_array_5_address0;
    sc_signal< sc_logic > dense_2_bias_array_5_ce0;
    sc_signal< sc_logic > dense_2_bias_array_5_we0;
    sc_signal< sc_lv<32> > dense_2_bias_array_5_q0;
    sc_signal< sc_lv<64> > dense_3_kernel_ndim;
    sc_signal< sc_lv<64> > dense_3_kernel_numel;
    sc_signal< sc_lv<8> > dense_3_kernel_array_address0;
    sc_signal< sc_logic > dense_3_kernel_array_ce0;
    sc_signal< sc_lv<32> > dense_3_kernel_array_q0;
    sc_signal< sc_lv<17> > dense_3_kernel_array_2_address0;
    sc_signal< sc_logic > dense_3_kernel_array_2_ce0;
    sc_signal< sc_logic > dense_3_kernel_array_2_we0;
    sc_signal< sc_lv<32> > dense_3_kernel_array_2_q0;
    sc_signal< sc_lv<4> > dense_3_bias_array_address0;
    sc_signal< sc_logic > dense_3_bias_array_ce0;
    sc_signal< sc_lv<32> > dense_3_bias_array_q0;
    sc_signal< sc_lv<17> > dense_3_bias_array_3_address0;
    sc_signal< sc_logic > dense_3_bias_array_3_ce0;
    sc_signal< sc_logic > dense_3_bias_array_3_we0;
    sc_signal< sc_lv<32> > dense_3_bias_array_3_q0;
    sc_signal< sc_lv<64> > dense_3_bias_numel;
    sc_signal< sc_lv<3> > dense_kernel_shape_address0;
    sc_signal< sc_logic > dense_kernel_shape_ce0;
    sc_signal< sc_logic > dense_kernel_shape_we0;
    sc_signal< sc_lv<64> > dense_kernel_shape_d0;
    sc_signal< sc_lv<64> > dense_kernel_shape_q0;
    sc_signal< sc_lv<3> > dense_kernel_shape_address1;
    sc_signal< sc_logic > dense_kernel_shape_ce1;
    sc_signal< sc_logic > dense_kernel_shape_we1;
    sc_signal< sc_lv<3> > dense_output_shape_address0;
    sc_signal< sc_logic > dense_output_shape_ce0;
    sc_signal< sc_logic > dense_output_shape_we0;
    sc_signal< sc_lv<64> > dense_output_shape_d0;
    sc_signal< sc_lv<64> > dense_output_shape_q0;
    sc_signal< sc_lv<3> > dense_output_shape_address1;
    sc_signal< sc_logic > dense_output_shape_ce1;
    sc_signal< sc_logic > dense_output_shape_we1;
    sc_signal< sc_lv<3> > dense_1_kernel_shape_address0;
    sc_signal< sc_logic > dense_1_kernel_shape_ce0;
    sc_signal< sc_logic > dense_1_kernel_shape_we0;
    sc_signal< sc_lv<64> > dense_1_kernel_shape_d0;
    sc_signal< sc_lv<64> > dense_1_kernel_shape_q0;
    sc_signal< sc_lv<3> > dense_1_kernel_shape_address1;
    sc_signal< sc_logic > dense_1_kernel_shape_ce1;
    sc_signal< sc_logic > dense_1_kernel_shape_we1;
    sc_signal< sc_lv<3> > dense_1_output_shape_address0;
    sc_signal< sc_logic > dense_1_output_shape_ce0;
    sc_signal< sc_logic > dense_1_output_shape_we0;
    sc_signal< sc_lv<64> > dense_1_output_shape_d0;
    sc_signal< sc_lv<64> > dense_1_output_shape_q0;
    sc_signal< sc_lv<3> > dense_1_output_shape_address1;
    sc_signal< sc_logic > dense_1_output_shape_ce1;
    sc_signal< sc_logic > dense_1_output_shape_we1;
    sc_signal< sc_lv<3> > dense_2_kernel_shape_address0;
    sc_signal< sc_logic > dense_2_kernel_shape_ce0;
    sc_signal< sc_logic > dense_2_kernel_shape_we0;
    sc_signal< sc_lv<64> > dense_2_kernel_shape_d0;
    sc_signal< sc_lv<64> > dense_2_kernel_shape_q0;
    sc_signal< sc_lv<3> > dense_2_kernel_shape_address1;
    sc_signal< sc_logic > dense_2_kernel_shape_ce1;
    sc_signal< sc_logic > dense_2_kernel_shape_we1;
    sc_signal< sc_lv<3> > dense_2_output_shape_address0;
    sc_signal< sc_logic > dense_2_output_shape_ce0;
    sc_signal< sc_logic > dense_2_output_shape_we0;
    sc_signal< sc_lv<64> > dense_2_output_shape_d0;
    sc_signal< sc_lv<64> > dense_2_output_shape_q0;
    sc_signal< sc_lv<3> > dense_2_output_shape_address1;
    sc_signal< sc_logic > dense_2_output_shape_ce1;
    sc_signal< sc_logic > dense_2_output_shape_we1;
    sc_signal< sc_lv<3> > dense_3_kernel_shape_address0;
    sc_signal< sc_logic > dense_3_kernel_shape_ce0;
    sc_signal< sc_logic > dense_3_kernel_shape_we0;
    sc_signal< sc_lv<64> > dense_3_kernel_shape_d0;
    sc_signal< sc_lv<64> > dense_3_kernel_shape_q0;
    sc_signal< sc_lv<3> > dense_3_kernel_shape_address1;
    sc_signal< sc_logic > dense_3_kernel_shape_ce1;
    sc_signal< sc_logic > dense_3_kernel_shape_we1;
    sc_signal< sc_lv<64> > reg_895;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_lv<64> > reg_901;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_lv<7> > z11_fu_930_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > z10_cast_fu_936_p1;
    sc_signal< sc_lv<64> > z10_cast_reg_1257;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<17> > z10_1_fu_947_p2;
    sc_signal< sc_lv<17> > z10_1_reg_1265;
    sc_signal< sc_lv<1> > tmp_2_fu_941_p2;
    sc_signal< sc_lv<64> > z9_cast9_fu_953_p1;
    sc_signal< sc_lv<64> > z9_cast9_reg_1275;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<7> > z9_1_fu_964_p2;
    sc_signal< sc_lv<7> > z9_1_reg_1283;
    sc_signal< sc_lv<1> > tmp_4_fu_958_p2;
    sc_signal< sc_lv<6> > z8_1_fu_993_p2;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > z7_cast7_fu_1011_p1;
    sc_signal< sc_lv<64> > z7_cast7_reg_1301;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<13> > z7_1_fu_1022_p2;
    sc_signal< sc_lv<13> > z7_1_reg_1309;
    sc_signal< sc_lv<1> > tmp_8_fu_1016_p2;
    sc_signal< sc_lv<64> > z6_cast6_fu_1034_p1;
    sc_signal< sc_lv<64> > z6_cast6_reg_1319;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<6> > z6_1_fu_1045_p2;
    sc_signal< sc_lv<6> > z6_1_reg_1327;
    sc_signal< sc_lv<1> > tmp_s_fu_1039_p2;
    sc_signal< sc_lv<5> > z5_1_fu_1074_p2;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<64> > z4_cast4_fu_1092_p1;
    sc_signal< sc_lv<64> > z4_cast4_reg_1345;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<11> > z4_1_fu_1103_p2;
    sc_signal< sc_lv<11> > z4_1_reg_1353;
    sc_signal< sc_lv<1> > tmp_3_fu_1097_p2;
    sc_signal< sc_lv<64> > z3_cast3_fu_1115_p1;
    sc_signal< sc_lv<64> > z3_cast3_reg_1363;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<5> > z3_1_fu_1126_p2;
    sc_signal< sc_lv<5> > z3_1_reg_1371;
    sc_signal< sc_lv<1> > tmp_5_fu_1120_p2;
    sc_signal< sc_lv<64> > z2_cast2_fu_1144_p1;
    sc_signal< sc_lv<64> > z2_cast2_reg_1381;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_lv<8> > z2_1_fu_1155_p2;
    sc_signal< sc_lv<8> > z2_1_reg_1389;
    sc_signal< sc_lv<1> > tmp_7_fu_1149_p2;
    sc_signal< sc_lv<64> > z1_cast1_fu_1161_p1;
    sc_signal< sc_lv<64> > z1_cast1_reg_1399;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<4> > z1_1_fu_1172_p2;
    sc_signal< sc_lv<4> > z1_1_reg_1407;
    sc_signal< sc_lv<1> > tmp_9_fu_1166_p2;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_ap_ready;
    sc_signal< sc_lv<17> > grp_k2c_dense_1_fu_788_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_1_fu_788_output_array_d0;
    sc_signal< sc_lv<17> > grp_k2c_dense_1_fu_788_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_1_fu_788_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_input_shape_ce0;
    sc_signal< sc_lv<17> > grp_k2c_dense_1_fu_788_kernel_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_kernel_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_1_fu_788_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_kernel_shape_ce0;
    sc_signal< sc_lv<17> > grp_k2c_dense_1_fu_788_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_bias_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_ap_ready;
    sc_signal< sc_lv<17> > grp_k2c_dense_3_fu_813_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_3_fu_813_output_array_d0;
    sc_signal< sc_lv<17> > grp_k2c_dense_3_fu_813_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_3_fu_813_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_input_shape_ce0;
    sc_signal< sc_lv<17> > grp_k2c_dense_3_fu_813_kernel_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_kernel_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_3_fu_813_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_kernel_shape_ce0;
    sc_signal< sc_lv<17> > grp_k2c_dense_3_fu_813_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_bias_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_ap_ready;
    sc_signal< sc_lv<17> > grp_k2c_dense_2_fu_837_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_2_fu_837_output_array_d0;
    sc_signal< sc_lv<17> > grp_k2c_dense_2_fu_837_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_2_fu_837_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_input_shape_ce0;
    sc_signal< sc_lv<17> > grp_k2c_dense_2_fu_837_kernel_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_kernel_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_2_fu_837_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_kernel_shape_ce0;
    sc_signal< sc_lv<17> > grp_k2c_dense_2_fu_837_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_bias_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_ap_ready;
    sc_signal< sc_lv<17> > grp_k2c_dense_fu_861_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_fu_861_output_array_d0;
    sc_signal< sc_lv<17> > grp_k2c_dense_fu_861_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_fu_861_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_input_shape_ce0;
    sc_signal< sc_lv<17> > grp_k2c_dense_fu_861_kernel_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_kernel_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_fu_861_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_kernel_shape_ce0;
    sc_signal< sc_lv<17> > grp_k2c_dense_fu_861_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_bias_array_ce0;
    sc_signal< sc_lv<7> > z_reg_667;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_fu_924_p2;
    sc_signal< sc_lv<17> > z10_reg_678;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<7> > z9_reg_689;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<6> > z8_reg_700;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<1> > tmp_6_fu_987_p2;
    sc_signal< sc_lv<13> > z7_reg_711;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<6> > z6_reg_722;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<5> > z5_reg_733;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<1> > tmp_1_fu_1068_p2;
    sc_signal< sc_lv<11> > z4_reg_744;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<5> > z3_reg_755;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<8> > z2_reg_766;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<4> > z1_reg_777;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_788_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_logic > grp_k2c_dense_3_fu_813_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_837_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_logic > grp_k2c_dense_fu_861_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_lv<64> > z_cast_fu_919_p1;
    sc_signal< sc_lv<64> > z8_cast8_fu_982_p1;
    sc_signal< sc_lv<64> > z5_cast5_fu_1063_p1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_lv<41> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<41> ap_ST_fsm_state1;
    static const sc_lv<41> ap_ST_fsm_state2;
    static const sc_lv<41> ap_ST_fsm_state3;
    static const sc_lv<41> ap_ST_fsm_state4;
    static const sc_lv<41> ap_ST_fsm_state5;
    static const sc_lv<41> ap_ST_fsm_state6;
    static const sc_lv<41> ap_ST_fsm_state7;
    static const sc_lv<41> ap_ST_fsm_state8;
    static const sc_lv<41> ap_ST_fsm_state9;
    static const sc_lv<41> ap_ST_fsm_state10;
    static const sc_lv<41> ap_ST_fsm_state11;
    static const sc_lv<41> ap_ST_fsm_state12;
    static const sc_lv<41> ap_ST_fsm_state13;
    static const sc_lv<41> ap_ST_fsm_state14;
    static const sc_lv<41> ap_ST_fsm_state15;
    static const sc_lv<41> ap_ST_fsm_state16;
    static const sc_lv<41> ap_ST_fsm_state17;
    static const sc_lv<41> ap_ST_fsm_state18;
    static const sc_lv<41> ap_ST_fsm_state19;
    static const sc_lv<41> ap_ST_fsm_state20;
    static const sc_lv<41> ap_ST_fsm_state21;
    static const sc_lv<41> ap_ST_fsm_state22;
    static const sc_lv<41> ap_ST_fsm_state23;
    static const sc_lv<41> ap_ST_fsm_state24;
    static const sc_lv<41> ap_ST_fsm_state25;
    static const sc_lv<41> ap_ST_fsm_state26;
    static const sc_lv<41> ap_ST_fsm_state27;
    static const sc_lv<41> ap_ST_fsm_state28;
    static const sc_lv<41> ap_ST_fsm_state29;
    static const sc_lv<41> ap_ST_fsm_state30;
    static const sc_lv<41> ap_ST_fsm_state31;
    static const sc_lv<41> ap_ST_fsm_state32;
    static const sc_lv<41> ap_ST_fsm_state33;
    static const sc_lv<41> ap_ST_fsm_state34;
    static const sc_lv<41> ap_ST_fsm_state35;
    static const sc_lv<41> ap_ST_fsm_state36;
    static const sc_lv<41> ap_ST_fsm_state37;
    static const sc_lv<41> ap_ST_fsm_state38;
    static const sc_lv<41> ap_ST_fsm_state39;
    static const sc_lv<41> ap_ST_fsm_state40;
    static const sc_lv<41> ap_ST_fsm_state41;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<17> ap_const_lv17_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_64;
    static const sc_lv<64> ap_const_lv64_32;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_1388;
    static const sc_lv<64> ap_const_lv64_19;
    static const sc_lv<64> ap_const_lv64_4E2;
    static const sc_lv<64> ap_const_lv64_FA;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<64> ap_const_lv64_310;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<7> ap_const_lv7_64;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<17> ap_const_lv17_13240;
    static const sc_lv<17> ap_const_lv17_1;
    static const sc_lv<6> ap_const_lv6_32;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<13> ap_const_lv13_1388;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<11> ap_const_lv11_4E2;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<8> ap_const_lv8_FA;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
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
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_dense_1_bias_array_7_address0();
    void thread_dense_1_bias_array_7_ce0();
    void thread_dense_1_bias_array_7_we0();
    void thread_dense_1_bias_array_address0();
    void thread_dense_1_bias_array_ce0();
    void thread_dense_1_kernel_array_6_address0();
    void thread_dense_1_kernel_array_6_ce0();
    void thread_dense_1_kernel_array_6_we0();
    void thread_dense_1_kernel_array_address0();
    void thread_dense_1_kernel_array_ce0();
    void thread_dense_1_kernel_shape_address0();
    void thread_dense_1_kernel_shape_address1();
    void thread_dense_1_kernel_shape_ce0();
    void thread_dense_1_kernel_shape_ce1();
    void thread_dense_1_kernel_shape_d0();
    void thread_dense_1_kernel_shape_we0();
    void thread_dense_1_kernel_shape_we1();
    void thread_dense_1_output_array_address0();
    void thread_dense_1_output_array_ce0();
    void thread_dense_1_output_array_d0();
    void thread_dense_1_output_array_we0();
    void thread_dense_1_output_shape_address0();
    void thread_dense_1_output_shape_address1();
    void thread_dense_1_output_shape_ce0();
    void thread_dense_1_output_shape_ce1();
    void thread_dense_1_output_shape_d0();
    void thread_dense_1_output_shape_we0();
    void thread_dense_1_output_shape_we1();
    void thread_dense_2_bias_array_5_address0();
    void thread_dense_2_bias_array_5_ce0();
    void thread_dense_2_bias_array_5_we0();
    void thread_dense_2_bias_array_address0();
    void thread_dense_2_bias_array_ce0();
    void thread_dense_2_kernel_array_4_address0();
    void thread_dense_2_kernel_array_4_ce0();
    void thread_dense_2_kernel_array_4_we0();
    void thread_dense_2_kernel_array_address0();
    void thread_dense_2_kernel_array_ce0();
    void thread_dense_2_kernel_shape_address0();
    void thread_dense_2_kernel_shape_address1();
    void thread_dense_2_kernel_shape_ce0();
    void thread_dense_2_kernel_shape_ce1();
    void thread_dense_2_kernel_shape_d0();
    void thread_dense_2_kernel_shape_we0();
    void thread_dense_2_kernel_shape_we1();
    void thread_dense_2_output_array_address0();
    void thread_dense_2_output_array_ce0();
    void thread_dense_2_output_array_d0();
    void thread_dense_2_output_array_we0();
    void thread_dense_2_output_shape_address0();
    void thread_dense_2_output_shape_address1();
    void thread_dense_2_output_shape_ce0();
    void thread_dense_2_output_shape_ce1();
    void thread_dense_2_output_shape_d0();
    void thread_dense_2_output_shape_we0();
    void thread_dense_2_output_shape_we1();
    void thread_dense_3_bias_array_3_address0();
    void thread_dense_3_bias_array_3_ce0();
    void thread_dense_3_bias_array_3_we0();
    void thread_dense_3_bias_array_address0();
    void thread_dense_3_bias_array_ce0();
    void thread_dense_3_kernel_array_2_address0();
    void thread_dense_3_kernel_array_2_ce0();
    void thread_dense_3_kernel_array_2_we0();
    void thread_dense_3_kernel_array_address0();
    void thread_dense_3_kernel_array_ce0();
    void thread_dense_3_kernel_shape_address0();
    void thread_dense_3_kernel_shape_address1();
    void thread_dense_3_kernel_shape_ce0();
    void thread_dense_3_kernel_shape_ce1();
    void thread_dense_3_kernel_shape_d0();
    void thread_dense_3_kernel_shape_we0();
    void thread_dense_3_kernel_shape_we1();
    void thread_dense_3_output_array_address0();
    void thread_dense_3_output_array_ce0();
    void thread_dense_3_output_array_d0();
    void thread_dense_3_output_array_we0();
    void thread_dense_3_output_shape_address0();
    void thread_dense_3_output_shape_address1();
    void thread_dense_3_output_shape_ce0();
    void thread_dense_3_output_shape_ce1();
    void thread_dense_3_output_shape_d0();
    void thread_dense_3_output_shape_d1();
    void thread_dense_3_output_shape_we0();
    void thread_dense_3_output_shape_we1();
    void thread_dense_bias_array_1_address0();
    void thread_dense_bias_array_1_ce0();
    void thread_dense_bias_array_1_we0();
    void thread_dense_bias_array_address0();
    void thread_dense_bias_array_ce0();
    void thread_dense_input_input_array_address0();
    void thread_dense_input_input_array_ce0();
    void thread_dense_input_input_shape_address0();
    void thread_dense_input_input_shape_ce0();
    void thread_dense_kernel_array_0_address0();
    void thread_dense_kernel_array_0_ce0();
    void thread_dense_kernel_array_0_we0();
    void thread_dense_kernel_array_address0();
    void thread_dense_kernel_array_ce0();
    void thread_dense_kernel_shape_address0();
    void thread_dense_kernel_shape_address1();
    void thread_dense_kernel_shape_ce0();
    void thread_dense_kernel_shape_ce1();
    void thread_dense_kernel_shape_d0();
    void thread_dense_kernel_shape_we0();
    void thread_dense_kernel_shape_we1();
    void thread_dense_output_array_address0();
    void thread_dense_output_array_ce0();
    void thread_dense_output_array_d0();
    void thread_dense_output_array_we0();
    void thread_dense_output_shape_address0();
    void thread_dense_output_shape_address1();
    void thread_dense_output_shape_ce0();
    void thread_dense_output_shape_ce1();
    void thread_dense_output_shape_d0();
    void thread_dense_output_shape_we0();
    void thread_dense_output_shape_we1();
    void thread_grp_k2c_dense_1_fu_788_ap_start();
    void thread_grp_k2c_dense_2_fu_837_ap_start();
    void thread_grp_k2c_dense_3_fu_813_ap_start();
    void thread_grp_k2c_dense_fu_861_ap_start();
    void thread_tmp_1_fu_1068_p2();
    void thread_tmp_2_fu_941_p2();
    void thread_tmp_3_fu_1097_p2();
    void thread_tmp_4_fu_958_p2();
    void thread_tmp_5_fu_1120_p2();
    void thread_tmp_6_fu_987_p2();
    void thread_tmp_7_fu_1149_p2();
    void thread_tmp_8_fu_1016_p2();
    void thread_tmp_9_fu_1166_p2();
    void thread_tmp_fu_924_p2();
    void thread_tmp_s_fu_1039_p2();
    void thread_z10_1_fu_947_p2();
    void thread_z10_cast_fu_936_p1();
    void thread_z11_fu_930_p2();
    void thread_z1_1_fu_1172_p2();
    void thread_z1_cast1_fu_1161_p1();
    void thread_z2_1_fu_1155_p2();
    void thread_z2_cast2_fu_1144_p1();
    void thread_z3_1_fu_1126_p2();
    void thread_z3_cast3_fu_1115_p1();
    void thread_z4_1_fu_1103_p2();
    void thread_z4_cast4_fu_1092_p1();
    void thread_z5_1_fu_1074_p2();
    void thread_z5_cast5_fu_1063_p1();
    void thread_z6_1_fu_1045_p2();
    void thread_z6_cast6_fu_1034_p1();
    void thread_z7_1_fu_1022_p2();
    void thread_z7_cast7_fu_1011_p1();
    void thread_z8_1_fu_993_p2();
    void thread_z8_cast8_fu_982_p1();
    void thread_z9_1_fu_964_p2();
    void thread_z9_cast9_fu_953_p1();
    void thread_z_cast_fu_919_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
