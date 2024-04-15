-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity vlsiModel_dense_bAem_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 100
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of vlsiModel_dense_bAem_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111101111000000000000011011011", 
    1 => "10111100010010100001001110100111", 
    2 => "00111101101001010101111100100000", 
    3 => "00111101101011111101101100000101", 
    4 => "10111101011101011001100011111001", 
    5 => "00111101010101000100111100001101", 
    6 => "10111101010111000101110101100010", 
    7 => "10111101110111010100000001111010", 
    8 => "10111100100010001010010110011010", 
    9 => "00111101111110011100010100000010", 
    10 => "00111101001100011010010111101001", 
    11 => "00111101000011111111111001010101", 
    12 => "10111010100110010100111101100110", 
    13 => "00111100111000101100100100010100", 
    14 => "10111100101100000010101111110010", 
    15 => "00111101010101010101001100000110", 
    16 => "00111100101100001100000001000100", 
    17 => "10111101010101111110010100100010", 
    18 => "00111101010011010110010001011011", 
    19 => "00111100110100101001010110111000", 
    20 => "00111101010110110110011010011101", 
    21 => "00111101000101011010000000110001", 
    22 => "10111100101000010001011001000001", 
    23 => "00111101000111000100111001010111", 
    24 => "00111101101111001111101110011011", 
    25 => "00111100111110010111010010101000", 
    26 => "00111101001001001110110010011001", 
    27 => "00111101110001100010000010001100", 
    28 => "10111101111100100011110110111110", 
    29 => "00111101011111000011010110110100", 
    30 => "00111101000111110101110110010001", 
    31 => "10111011100001000010011100010001", 
    32 => "10111101110001100001011010100000", 
    33 => "00111101100000110001000011101011", 
    34 => "00111101110011010111101010110101", 
    35 => "00111101110101111110110111010011", 
    36 => "00111101100101111100110100110101", 
    37 => "00111101000010111011010001001011", 
    38 => "00111101101101011000101010010000", 
    39 => "10111101000011001100100000000111", 
    40 => "00111101110001100111010000110010", 
    41 => "00111101000010110101111010010111", 
    42 => "00111100000010111010011001100100", 
    43 => "00111100101100100011001101111011", 
    44 => "00111101011001100100101000100110", 
    45 => "00111101000100010000001110110011", 
    46 => "10111101011100100101010100111100", 
    47 => "00111101101100011100110110011001", 
    48 => "00111101001000111101110111001011", 
    49 => "00111100010110011010001110001111", 
    50 => "10111101001111110010100010000101", 
    51 => "10111011110111000100001001110110", 
    52 => "00111100110101110111000011101100", 
    53 => "00111100101101011101100011111101", 
    54 => "10111100101101100101100100110010", 
    55 => "00111100100110101101110100011111", 
    56 => "00111101100011010000001000001100", 
    57 => "00111101101111000101010010011110", 
    58 => "10111100110001110000100011111001", 
    59 => "00111011010101010000110110000101", 
    60 => "00111100110011001010001110010011", 
    61 => "00111100001110000011000000010110", 
    62 => "00111011000111001000001001011011", 
    63 => "00111100001101010011010010100000", 
    64 => "10111110000011111110101000110111", 
    65 => "00111100111100100010100101101110", 
    66 => "10111101011100110001001100011111", 
    67 => "00111100110110011101111110000010", 
    68 => "10111101010110111101100101010101", 
    69 => "00111101011110001111100011010100", 
    70 => "00111101010110011001010001010111", 
    71 => "00111101001110110101101111110000", 
    72 => "00111100011011001100000001001110", 
    73 => "00111011010000000111101011011110", 
    74 => "00111100111011001110000101010010", 
    75 => "00111101110100011000110010011100", 
    76 => "10111100011001010001001100010111", 
    77 => "10111101000111010010111010011011", 
    78 => "00111001011011001111101010110010", 
    79 => "10111100010001111100001101010000", 
    80 => "10111101000101111000010110110110", 
    81 => "00111101000101101100001101100100", 
    82 => "00111101001111010010101100000110", 
    83 => "00111110000110100110001111011010", 
    84 => "00111101000010111110110101010011", 
    85 => "10111100100110110100100000110010", 
    86 => "10111101100101111101010101010111", 
    87 => "00111101100010101110001110111111", 
    88 => "10111101111000110111010101100010", 
    89 => "00111100110011011111010101101110", 
    90 => "10111100100001100000011110100110", 
    91 => "00111110000101000101110001101100", 
    92 => "00111101011000100111011110110111", 
    93 => "00111101011101111010010010000010", 
    94 => "10111101010110111111010010010001", 
    95 => "00111101110100010101011001101001", 
    96 => "10111101010011001010011011100011", 
    97 => "00111100100000011001011001100010", 
    98 => "00111100111000000111101011111101", 
    99 => "00111101110111111000001011111111" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity vlsiModel_dense_bAem is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 100;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of vlsiModel_dense_bAem is
    component vlsiModel_dense_bAem_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    vlsiModel_dense_bAem_rom_U :  component vlsiModel_dense_bAem_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


