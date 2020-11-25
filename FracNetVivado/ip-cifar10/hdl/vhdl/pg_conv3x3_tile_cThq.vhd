-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cThq_rom is 
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


architecture rtl of pg_conv3x3_tile_cThq_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1000000000010000110000100001110100000000000000000000000000000000", 
    1 => "1011111111111010101111111110000100000000000000000000000000000000", 
    2 => "1111111111111111111111111111111100000000000000000000000000000000", 
    3 => "0110011110111011000110001100001100000000000000000000000000000000", 
    4 => "1001000000001010100100111001000000000000000000000000000000000000", 
    5 => "1111111111111111111111111111110000000000000000000000000000000000", 
    6 => "0110000011000001000000000000000000000000000000000000000000000000", 
    7 => "1111100001100011000000000000000000000000000000000000000000000000", 
    8 => "0110001011011000000000000000000000000000000000000000000000000000", 
    9 => "0010000010000011000000000000000000000000000000000000000000000000", 
    10 => "0110011010111110000000000000000000000000000000000000000000000000", 
    11 => "0001101011000110000000000000000000000000000000000000000000000000", 
    12 => "1000011010011110000000000000000000000000000000000000000000000000", 
    13 => "0001000111010111000000000000000000000000000000000000000000000000", 
    14 => "1001100111100011000000000000000000000000000000000000000000000000", 
    15 => "0000101111000001000000000000000000000000000000000000000000000000", 
    16 => "1000111111001111000000000000000000000000000000000000000000000000", 
    17 => "0000010010001010000000000000000000000000000000000000000000000000", 
    18 => "0110010011000101000000000000000000000000000000000000000000000000", 
    19 => "0001001101000001000000000000000000000000000000000000000000000000", 
    20 => "1001000010110001000000000000000000000000000000000000000000000000", 
    21 => "1111110001110100000000000000000000000000000000000000000000000000", 
    22 => "0010100011001101000000001110011000000000000000000000000000000000", 
    23 => "0011100001101100001110000100100000000000000000000000000000000000", 
    24 => "0010111110001000101111000001110000000000000000000000000000000000", 
    25 => "1010110111011110110111000001100000000000000000000000000000000000", 
    26 => "1111110001010011111011101100111100000000000000000000000000000000", 
    27 => "0011011001001101000000101100101100000000000000000000000000000000", 
    28 => "1011010001001101100011110001111000000000000000000000000000000000", 
    29 => "1110000011110101011011101100011100000000000000000000000000000000", 
    30 => "0110110111010011000011010100101000000000000000000000000000000000", 
    31 => "0000011010101101110000101000010100000000000000000000000000000000", 
    32 => "0111110101110111110100100110011100000000000000000000000000000000", 
    33 => "1101000001111000100010101111011100000000000000000000000000000000", 
    34 => "1111001110101101010100111011101100000000000000000000000000000000", 
    35 => "0001000010101100001010101001111100000000000000000000000000000000", 
    36 => "1000000111001000010111110000100100000000000000000000000000000000", 
    37 => "0011100110111011100111110100110000000000000000000000000000000000", 
    38 => "0011111110100101111010010000100100000000000000000000000000000000", 
    39 => "0010001001001010101000101000111000000000000000000000000000000000", 
    40 => "1001101011100000000111100000100000000000000000000000000000000000", 
    41 => "0001110111100011110010010000100000000000000000000000000000000000", 
    42 => "1111010100011001001000001111010000000000000000000000000000000000", 
    43 => "0010001101100001100101011100011000000000000000000000000000000000", 
    44 => "0001110101110010011000001010010100000000000000000000000000000000", 
    45 => "1111110000100100010000001000001100000000000000000000000000000000", 
    46 => "0101000001100100110100000000010100000000000000000000000000000000", 
    47 => "1000000110101101001000001000011000000000000000000000000000000000", 
    48 => "1001000011011110011101111000011100000000000000000000000000000000", 
    49 => "0000111100010100000110011010111100000000000000000000000000000000", 
    50 => "1111000101011001000001010010011100101001101010010000010101101111", 
    51 => "1000011110100100110100100010111000001100101111100001001100001100", 
    52 => "0010001100111000111001011110011000101011111000101010000111000100", 
    53 => "1001010110100001100100111011010000010100100000000001100101001000", 
    54 => "1001101101001110011101011001010111010011000010101011111000110100", 
    55 => "1011100001001011011000111010001110110001001011100001010110100111", 
    56 => "0101110101111011001011100101000100001101010010100001111000001010", 
    57 => "1100010101011110011010101100010010110110010110100110100000110100", 
    58 => "1010110101100100011101110110011101110100110111110110010101100010", 
    59 => "0111010000111100000010110101000101111111111001100011011010011101", 
    60 => "0011011011010110000100110111101101111110001010110111001001001010", 
    61 => "0111101000010011100011001100110110010010100011000110000011001110", 
    62 => "0111000111001111000111010001000000100011000001100011010010100101", 
    63 => "1100000000001110010101110011010011101011001111100110010000100001", 
    64 => "1001010100011110110001110000010100000110001101000000101101001100", 
    65 => "0011000100011111101001100001111101011110010100000000101101110101", 
    66 => "1001111010001111011011101011000100100011001001010110010110100000", 
    67 => "0100101111110000110100000000111011111101110000000000111110001000", 
    68 => "0001101101010101101111100000101101100011110101000101100100111110", 
    69 => "1110110010010100100101010011101111110111101101010001111100001011", 
    70 => "0000100110100010101101100011000110010010000111101010110100100110", 
    71 => "0100000001011101000011000101010000111000111110001011100001110101", 
    72 => "0011111111000011101000000100010000000011010001100110001001110100", 
    73 => "1111010110000100000010000011011111111101101110000010110100101011", 
    74 => "0000010000001110010101110011001110001111011111000010001110001101", 
    75 => "0011001001110000100100000011011110011011011001001110001100111111", 
    76 => "1111100010011001000110110001000011011010000111010100011001110100", 
    77 => "0000001111110111001110011010001011001000010010010101010111010001", 
    78 => "0111000001110101111101001110101101100011110101110100000011011010", 
    79 => "1000100011011010101111100111011000100010110001011000000000010100", 
    80 => "0011011100010010101110101000011110101100000100010000110000001001", 
    81 => "1101100010010100000010101001111111101100101101110011100100000011", 
    82 => "1101111001110010011101100000010101100110011000110100011001100101", 
    83 => "0001101001000001111000100011011100010011010110011001000110111000", 
    84 => "1001001110010011011111000100101101001011010110010111100100101000", 
    85 => "1000110000110000110000010101011011011100000000010000110011001011", 
    86 => "0000110000010100010001010010100010110010100110110000111101011111", 
    87 => "0100001110101011100100111111101111000001100011101001000011101101", 
    88 => "0111010010100000110110000000101111000111110100010001101100101100", 
    89 => "1011101010011000100001000110111001100000111010111110000100100001" );


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

entity pg_conv3x3_tile_cThq is
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

architecture arch of pg_conv3x3_tile_cThq is
    component pg_conv3x3_tile_cThq_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cThq_rom_U :  component pg_conv3x3_tile_cThq_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

