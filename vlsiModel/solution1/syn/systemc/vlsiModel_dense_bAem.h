// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __vlsiModel_dense_bAem_H__
#define __vlsiModel_dense_bAem_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct vlsiModel_dense_bAem_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 100;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(vlsiModel_dense_bAem_ram) {
        ram[0] = "0b00111101111000000000000011011011";
        ram[1] = "0b10111100010010100001001110100111";
        ram[2] = "0b00111101101001010101111100100000";
        ram[3] = "0b00111101101011111101101100000101";
        ram[4] = "0b10111101011101011001100011111001";
        ram[5] = "0b00111101010101000100111100001101";
        ram[6] = "0b10111101010111000101110101100010";
        ram[7] = "0b10111101110111010100000001111010";
        ram[8] = "0b10111100100010001010010110011010";
        ram[9] = "0b00111101111110011100010100000010";
        ram[10] = "0b00111101001100011010010111101001";
        ram[11] = "0b00111101000011111111111001010101";
        ram[12] = "0b10111010100110010100111101100110";
        ram[13] = "0b00111100111000101100100100010100";
        ram[14] = "0b10111100101100000010101111110010";
        ram[15] = "0b00111101010101010101001100000110";
        ram[16] = "0b00111100101100001100000001000100";
        ram[17] = "0b10111101010101111110010100100010";
        ram[18] = "0b00111101010011010110010001011011";
        ram[19] = "0b00111100110100101001010110111000";
        ram[20] = "0b00111101010110110110011010011101";
        ram[21] = "0b00111101000101011010000000110001";
        ram[22] = "0b10111100101000010001011001000001";
        ram[23] = "0b00111101000111000100111001010111";
        ram[24] = "0b00111101101111001111101110011011";
        ram[25] = "0b00111100111110010111010010101000";
        ram[26] = "0b00111101001001001110110010011001";
        ram[27] = "0b00111101110001100010000010001100";
        ram[28] = "0b10111101111100100011110110111110";
        ram[29] = "0b00111101011111000011010110110100";
        ram[30] = "0b00111101000111110101110110010001";
        ram[31] = "0b10111011100001000010011100010001";
        ram[32] = "0b10111101110001100001011010100000";
        ram[33] = "0b00111101100000110001000011101011";
        ram[34] = "0b00111101110011010111101010110101";
        ram[35] = "0b00111101110101111110110111010011";
        ram[36] = "0b00111101100101111100110100110101";
        ram[37] = "0b00111101000010111011010001001011";
        ram[38] = "0b00111101101101011000101010010000";
        ram[39] = "0b10111101000011001100100000000111";
        ram[40] = "0b00111101110001100111010000110010";
        ram[41] = "0b00111101000010110101111010010111";
        ram[42] = "0b00111100000010111010011001100100";
        ram[43] = "0b00111100101100100011001101111011";
        ram[44] = "0b00111101011001100100101000100110";
        ram[45] = "0b00111101000100010000001110110011";
        ram[46] = "0b10111101011100100101010100111100";
        ram[47] = "0b00111101101100011100110110011001";
        ram[48] = "0b00111101001000111101110111001011";
        ram[49] = "0b00111100010110011010001110001111";
        ram[50] = "0b10111101001111110010100010000101";
        ram[51] = "0b10111011110111000100001001110110";
        ram[52] = "0b00111100110101110111000011101100";
        ram[53] = "0b00111100101101011101100011111101";
        ram[54] = "0b10111100101101100101100100110010";
        ram[55] = "0b00111100100110101101110100011111";
        ram[56] = "0b00111101100011010000001000001100";
        ram[57] = "0b00111101101111000101010010011110";
        ram[58] = "0b10111100110001110000100011111001";
        ram[59] = "0b00111011010101010000110110000101";
        ram[60] = "0b00111100110011001010001110010011";
        ram[61] = "0b00111100001110000011000000010110";
        ram[62] = "0b00111011000111001000001001011011";
        ram[63] = "0b00111100001101010011010010100000";
        ram[64] = "0b10111110000011111110101000110111";
        ram[65] = "0b00111100111100100010100101101110";
        ram[66] = "0b10111101011100110001001100011111";
        ram[67] = "0b00111100110110011101111110000010";
        ram[68] = "0b10111101010110111101100101010101";
        ram[69] = "0b00111101011110001111100011010100";
        ram[70] = "0b00111101010110011001010001010111";
        ram[71] = "0b00111101001110110101101111110000";
        ram[72] = "0b00111100011011001100000001001110";
        ram[73] = "0b00111011010000000111101011011110";
        ram[74] = "0b00111100111011001110000101010010";
        ram[75] = "0b00111101110100011000110010011100";
        ram[76] = "0b10111100011001010001001100010111";
        ram[77] = "0b10111101000111010010111010011011";
        ram[78] = "0b00111001011011001111101010110010";
        ram[79] = "0b10111100010001111100001101010000";
        ram[80] = "0b10111101000101111000010110110110";
        ram[81] = "0b00111101000101101100001101100100";
        ram[82] = "0b00111101001111010010101100000110";
        ram[83] = "0b00111110000110100110001111011010";
        ram[84] = "0b00111101000010111110110101010011";
        ram[85] = "0b10111100100110110100100000110010";
        ram[86] = "0b10111101100101111101010101010111";
        ram[87] = "0b00111101100010101110001110111111";
        ram[88] = "0b10111101111000110111010101100010";
        ram[89] = "0b00111100110011011111010101101110";
        ram[90] = "0b10111100100001100000011110100110";
        ram[91] = "0b00111110000101000101110001101100";
        ram[92] = "0b00111101011000100111011110110111";
        ram[93] = "0b00111101011101111010010010000010";
        ram[94] = "0b10111101010110111111010010010001";
        ram[95] = "0b00111101110100010101011001101001";
        ram[96] = "0b10111101010011001010011011100011";
        ram[97] = "0b00111100100000011001011001100010";
        ram[98] = "0b00111100111000000111101011111101";
        ram[99] = "0b00111101110111111000001011111111";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(vlsiModel_dense_bAem) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 100;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


vlsiModel_dense_bAem_ram* meminst;


SC_CTOR(vlsiModel_dense_bAem) {
meminst = new vlsiModel_dense_bAem_ram("vlsiModel_dense_bAem_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~vlsiModel_dense_bAem() {
    delete meminst;
}


};//endmodule
#endif
