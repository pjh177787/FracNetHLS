-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cbil_rom is 
    generic(
             DWIDTH     : integer := 64; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 90
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of pg_conv3x3_tile_cbil_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111001110011001010000001110100000000000000000000000000000000000", 
    1 => "0000000000000000100000000000000000000000000000000000000000000000", 
    2 => "0000000000010011000100000000000000000000000000000000000000000000", 
    3 => "0111110001101010111111101011001100000000000000000000000000000000", 
    4 => "0111111111110100001101011111111100000000000000000000000000000000", 
    5 => "1111111111111111101111001011111100000000000000000000000000000000", 
    6 => "1001101011011101000000000000000000000000000000000000000000000000", 
    7 => "1100001110111110000000000000000000000000000000000000000000000000", 
    8 => "0101001010000011000000000000000000000000000000000000000000000000", 
    9 => "1101111100111010000000000000000000000000000000000000000000000000", 
    10 => "1110101100111101000000000000000000000000000000000000000000000000", 
    11 => "0111001101111010000000000000000000000000000000000000000000000000", 
    12 => "0001001111111001000000000000000000000000000000000000000000000000", 
    13 => "0010011000110000000000000000000000000000000000000000000000000000", 
    14 => "1000001011001000000000000000000000000000000000000000000000000000", 
    15 => "1111000011110000000000000000000000000000000000000000000000000000", 
    16 => "0000101110001101000000000000000000000000000000000000000000000000", 
    17 => "1101001111110100000000000000000000000000000000000000000000000000", 
    18 => "0001010101111011000000000000000000000000000000000000000000000000", 
    19 => "1011010010111011000000000000000000000000000000000000000000000000", 
    20 => "1010011101100010000000000000000000000000000000000000000000000000", 
    21 => "0010010111110101000000000000000000000000000000000000000000000000", 
    22 => "0011111111001010101011100101101000000000000000000000000000000000", 
    23 => "0100010001101011011001111010001100000000000000000000000000000000", 
    24 => "0110000000001110000000010101011000000000000000000000000000000000", 
    25 => "0011010100111011000101110110101100000000000000000000000000000000", 
    26 => "0001000111101101000000101110111100000000000000000000000000000000", 
    27 => "0110010101100011111111111000101100000000000000000000000000000000", 
    28 => "0000110000110101000001100101101100000000000000000000000000000000", 
    29 => "1000101010110111010111001010010100000000000000000000000000000000", 
    30 => "1011110010001101001011101011110100000000000000000000000000000000", 
    31 => "1001110001010001111110111001000100000000000000000000000000000000", 
    32 => "0011011001100100110000001000010100000000000000000000000000000000", 
    33 => "1000101000100001110101100010110100000000000000000000000000000000", 
    34 => "0101110111001001101110001010100100000000000000000000000000000000", 
    35 => "0111001000001000000100010110001000000000000000000000000000000000", 
    36 => "1001100100011001001010111011011100000000000000000000000000000000", 
    37 => "0000000101011011000000110110101100000000000000000000000000000000", 
    38 => "0011110111001010000101010100011100000000000000000000000000000000", 
    39 => "0101110000100001100111001100100000000000000000000000000000000000", 
    40 => "1000111110101011011111010000110100000000000000000000000000000000", 
    41 => "1101011111010010101100000111011100000000000000000000000000000000", 
    42 => "1010011110011011100000010100110000000000000000000000000000000000", 
    43 => "0101001001110110011000100000010100000000000000000000000000000000", 
    44 => "0101100101100101100000011111100100000000000000000000000000000000", 
    45 => "1010100100001001000000110001101100000000000000000000000000000000", 
    46 => "1010101110010010000001010001100000000000000000000000000000000000", 
    47 => "1000110010101001101000010010101000000000000000000000000000000000", 
    48 => "0000101101000001110111110101100100000000000000000000000000000000", 
    49 => "1010111100000010000001011101101100000000000000000000000000000000", 
    50 => "0110101110010010011101000111000101111011001111100111000101111011", 
    51 => "0101111001100101010101000110010101111010101001100111100111000100", 
    52 => "0100010100100111001100101111010000001011110110011111111010111011", 
    53 => "0100000111101000110001000100111000110101100000001000000111111111", 
    54 => "0111101001010011110111000111100001101010010000101111111100111100", 
    55 => "0101011110011010001000100010110101011101101100100000000000000100", 
    56 => "1010111100001100101011010001001110100110001111110010101101010110", 
    57 => "0101110001001101011000100001010011011110100101000111011010010111", 
    58 => "1100101101010100101011010110001110000101100100111110100101110110", 
    59 => "1001001100111100101101010101101001000111010000010011101101011100", 
    60 => "1001010100111111100101101010000100010010011001110100101011100110", 
    61 => "1110101110100010100001100100100011111010011011110000111000001001", 
    62 => "0001111000010101100001001011000000001100000110011000110100001110", 
    63 => "1111000110000011010000100111101111100101000110111000010000010010", 
    64 => "1101001001101101010100011010011111100001100101000100011010000111", 
    65 => "0001110011000010001011101001110101111000000010101010110010010001", 
    66 => "0000111011100111101010101000011111100101001001100000011110110111", 
    67 => "0100011011001110110100101100010000100101110010101001000100010011", 
    68 => "0011010100001011001110010100010111110100000000000010001101011000", 
    69 => "1000001001110010111101011010101010110000111001011101010010001000", 
    70 => "1111011011101101010100010001011110111110000100101100000111100101", 
    71 => "1101111011000100010111011111010110101110011010001111101111110100", 
    72 => "0111001101010011111110000011100010110110111001000001111101011000", 
    73 => "0000101101111111000111100100110001001111011110000101101000101110", 
    74 => "0010111110000110101111010000001100111011110101101111001110010010", 
    75 => "1111100001000000100111110001001000101010000110110011100010100010", 
    76 => "1000001010000000000010110011011010101011100111011110000000000110", 
    77 => "0001010011100110011110000101001011100010101001111110000011011010", 
    78 => "0001000010101111010000100110001011101010101011101001101000000100", 
    79 => "0000101110111100111011000100101011011000111100010000110110001000", 
    80 => "0111100011111001100111101110100101101000100111011100111011101110", 
    81 => "1101100110001011101011000000110010111100111001011111001010110110", 
    82 => "1000001111010011011001001001110111111110100011110001010010011000", 
    83 => "1111111000011001011011111010000010001011001110001100100011110110", 
    84 => "1000011000110101111100100100010111010111101000000100000010101001", 
    85 => "0001010111111100001101011111001110000110001001001010100011101100", 
    86 => "1011110011000111111001111001011010001100111000011000110100001000", 
    87 => "0101010111000011011110110100000101000110100111100110110000111100", 
    88 => "0111000110001010001010011010010000001101010011111010001101010100", 
    89 => "1001101001010001010011001010011001000110100101001001101110001011" );


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

entity pg_conv3x3_tile_cbil is
    generic (
        DataWidth : INTEGER := 64;
        AddressRange : INTEGER := 90;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of pg_conv3x3_tile_cbil is
    component pg_conv3x3_tile_cbil_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cbil_rom_U :  component pg_conv3x3_tile_cbil_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

