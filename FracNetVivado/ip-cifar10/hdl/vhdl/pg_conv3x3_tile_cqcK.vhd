-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cqcK_rom is 
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


architecture rtl of pg_conv3x3_tile_cqcK_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111111111111011111110110001001000000000000000000000000000000000", 
    1 => "1010100000000010100100011011011000000000000000000000000000000000", 
    2 => "1111111111110111011111101101111000000000000000000000000000000000", 
    3 => "0000000000000100000000000011001000000000000000000000000000000000", 
    4 => "0111111001111111101111111110010000000000000000000000000000000000", 
    5 => "0011111111110111111101111101110000000000000000000000000000000000", 
    6 => "1001110101111000000000000000000000000000000000000000000000000000", 
    7 => "0000111100001111000000000000000000000000000000000000000000000000", 
    8 => "0010111011101010000000000000000000000000000000000000000000000000", 
    9 => "0010111100000010000000000000000000000000000000000000000000000000", 
    10 => "0000111110111100000000000000000000000000000000000000000000000000", 
    11 => "1110010100100101000000000000000000000000000000000000000000000000", 
    12 => "0010001000010000000000000000000000000000000000000000000000000000", 
    13 => "1101100110011000000000000000000000000000000000000000000000000000", 
    14 => "0110101100110001000000000000000000000000000000000000000000000000", 
    15 => "1011110100001000000000000000000000000000000000000000000000000000", 
    16 => "0101010001001011000000000000000000000000000000000000000000000000", 
    17 => "1111100101010010000000000000000000000000000000000000000000000000", 
    18 => "0110111010100110000000000000000000000000000000000000000000000000", 
    19 => "1001001000100101000000000000000000000000000000000000000000000000", 
    20 => "0010011110110110000000000000000000000000000000000000000000000000", 
    21 => "0111001001000101000000000000000000000000000000000000000000000000", 
    22 => "1101100111011000001000010101110100000000000000000000000000000000", 
    23 => "1010011111101110110110011111000000000000000000000000000000000000", 
    24 => "1100000000101111000000000110011100000000000000000000000000000000", 
    25 => "1101001011000000111011101010011000000000000000000000000000000000", 
    26 => "0101100110000111011100010100011100000000000000000000000000000000", 
    27 => "1010111111110000001101010101100100000000000000000000000000000000", 
    28 => "1110101011100110011000101000011000000000000000000000000000000000", 
    29 => "0101101110001001110111001111000100000000000000000000000000000000", 
    30 => "1111010100011011000000100001100100000000000000000000000000000000", 
    31 => "1000001111011100000001110101101000000000000000000000000000000000", 
    32 => "0111101001100100101011001111011000000000000000000000000000000000", 
    33 => "0010110000001100101101000111011100000000000000000000000000000000", 
    34 => "0100011101001100110111010011101000000000000000000000000000000000", 
    35 => "1110011101010011110101011001101000000000000000000000000000000000", 
    36 => "0010010111011011001011011011111100000000000000000000000000000000", 
    37 => "0001001111001001100110011100100100000000000000000000000000000000", 
    38 => "1110010010111000011011000101001100000000000000000000000000000000", 
    39 => "1101111011110011101111101101100000000000000000000000000000000000", 
    40 => "0000110111111011000111100011101000000000000000000000000000000000", 
    41 => "0100000000101100111000101000010000000000000000000000000000000000", 
    42 => "1101110110110100100111010001001000000000000000000000000000000000", 
    43 => "0010011101100011110101010110011000000000000000000000000000000000", 
    44 => "1100001011000100010110001000110100000000000000000000000000000000", 
    45 => "0101100011111100011100011110111000000000000000000000000000000000", 
    46 => "1000000001100100010101000011100100000000000000000000000000000000", 
    47 => "1110100001111111011011101001001100000000000000000000000000000000", 
    48 => "0101100110011011110110110101101100000000000000000000000000000000", 
    49 => "1100010000000101001110110100100100000000000000000000000000000000", 
    50 => "0111101101011111111111100011000001000011101001111011011100100000", 
    51 => "1000110111100100111000010000011001110001100010111110010110000110", 
    52 => "1101101011000100011000111101101001001011110011001010111111111011", 
    53 => "0001101011011111110100101100011100000110010011011011101101000001", 
    54 => "0100111101110010001110100001101001011000110110110010100000010010", 
    55 => "1100010110100010100010010001011010010110110010000010100111000110", 
    56 => "1111000101001100110000011000011010011101100011001100001101000111", 
    57 => "0100100110101100011010001111100001110011111011010110000001101001", 
    58 => "1000010110100111101010110100100010111000001110110010100111001110", 
    59 => "0001000100011000100100011011011010110110101010010100000101000101", 
    60 => "1111001101100101000100001010101111110111100110010101111110010011", 
    61 => "1000100101011010110101000000101110001111110000001111101100101000", 
    62 => "0001001001011000101100111001111110100110000111001100100000110101", 
    63 => "1101100011101101010111000100001110011001011101111111100011010010", 
    64 => "1010101101111110010000011100011111011111111111010110000101001101", 
    65 => "1001010110000011010000001100010110011110010110110001111111000011", 
    66 => "0011100001010010110110000000100111111010100101011101000010101111", 
    67 => "1101101011111000100011010011110111110010101000111100010000000100", 
    68 => "1001001100100110010100010001001010111010011001100101101101010001", 
    69 => "0110010101011010111100011001000101011111101100011101000111101001", 
    70 => "1110010010111101001110010010111000110101101100111011001001100101", 
    71 => "1100111000000100100001101111111010000101011110010010110101100011", 
    72 => "0010101100010010100101111001010000000000001001111001101111110010", 
    73 => "1010000111111010101000010100011001100000111000000111001011110001", 
    74 => "0100110111000010010110010111110001011000000100011110110011101111", 
    75 => "1000011100000111111101000111101010000110110000010010110100001011", 
    76 => "0001101101000111010100000010000011111101101111111100001100001001", 
    77 => "0000011000001001011100011000011001100000000001101110010111110111", 
    78 => "1101001110011011101000000000001110110001111100011000000110101110", 
    79 => "0111011101111010001000010001111011011101101100010001101011111000", 
    80 => "1011000100011100001010000000010100001100011101001010100111001010", 
    81 => "1001001100100001010010011001111000000111001100000111010001101110", 
    82 => "1101001010101101110100001101011010101011100011111110010010010111", 
    83 => "1111000001110001010000000101000101101111111001100010001010111110", 
    84 => "0001010110001000110111001010101100101010100011101011111101110110", 
    85 => "1010001010001110010101111010001010010110010000010001001101000101", 
    86 => "0001001101001011011000000101111101111110100101101111000111100101", 
    87 => "0010111011101101111101011000011010001101011110100110101101000001", 
    88 => "1011110110101110101110101000011001100111000010101100100100001000", 
    89 => "1100010001101010100100010111111110110010001100011100010010101010" );


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

entity pg_conv3x3_tile_cqcK is
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

architecture arch of pg_conv3x3_tile_cqcK is
    component pg_conv3x3_tile_cqcK_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cqcK_rom_U :  component pg_conv3x3_tile_cqcK_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


