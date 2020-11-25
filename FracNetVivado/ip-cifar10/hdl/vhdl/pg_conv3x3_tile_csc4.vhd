-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_csc4_rom is 
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


architecture rtl of pg_conv3x3_tile_csc4_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101110010111011010100100111001000000000000000000000000000000000", 
    1 => "1111111111111111111111111111110000000000000000000000000000000000", 
    2 => "1111000000100001011100001111010000000000000000000000000000000000", 
    3 => "1100100000101001000000100111010100000000000000000000000000000000", 
    4 => "1111111111111111111111111110011100000000000000000000000000000000", 
    5 => "1111111111111111111111111111111100000000000000000000000000000000", 
    6 => "1011100101111011000000000000000000000000000000000000000000000000", 
    7 => "1111100100010000000000000000000000000000000000000000000000000000", 
    8 => "0011101101100011000000000000000000000000000000000000000000000000", 
    9 => "0101000110110010000000000000000000000000000000000000000000000000", 
    10 => "0011110110100111000000000000000000000000000000000000000000000000", 
    11 => "0111011110000110000000000000000000000000000000000000000000000000", 
    12 => "0010001000100101000000000000000000000000000000000000000000000000", 
    13 => "1110010100111111000000000000000000000000000000000000000000000000", 
    14 => "0111000101110001000000000000000000000000000000000000000000000000", 
    15 => "1001010111110000000000000000000000000000000000000000000000000000", 
    16 => "1101000001011010000000000000000000000000000000000000000000000000", 
    17 => "0010010101010010000000000000000000000000000000000000000000000000", 
    18 => "0010010001110000000000000000000000000000000000000000000000000000", 
    19 => "1100000000100100000000000000000000000000000000000000000000000000", 
    20 => "0010111110110001000000000000000000000000000000000000000000000000", 
    21 => "0010111011001001000000000000000000000000000000000000000000000000", 
    22 => "1110110111111000010001010101001000000000000000000000000000000000", 
    23 => "0001000000100101001000101000011100000000000000000000000000000000", 
    24 => "0110100001100001101010001011010100000000000000000000000000000000", 
    25 => "0001100000110101001100010100100100000000000000000000000000000000", 
    26 => "0111110101110000010011010101101000000000000000000000000000000000", 
    27 => "0011000000000100000100100000011100000000000000000000000000000000", 
    28 => "0011000001100101011000101000011000000000000000000000000000000000", 
    29 => "1001010101011010100001110100101100000000000000000000000000000000", 
    30 => "0011000010001000010111101011110100000000000000000000000000000000", 
    31 => "1110000000000100011000001000010100000000000000000000000000000000", 
    32 => "1010001111100100101001011111011000000000000000000000000000000000", 
    33 => "1000000011011001100100000000000100000000000000000000000000000000", 
    34 => "0100101000000000111110111001101000000000000000000000000000000000", 
    35 => "1111001000000100001011001011011100000000000000000000000000000000", 
    36 => "0000010111111011001111011111101100000000000000000000000000000000", 
    37 => "0100010000100110011101010111011000000000000000000000000000000000", 
    38 => "1110011011011100011111010011100000000000000000000000000000000000", 
    39 => "0100000011000110111110110011101100000000000000000000000000000000", 
    40 => "0101000110111011001001111111111100000000000000000000000000000000", 
    41 => "1010010110001101100011010100100000000000000000000000000000000000", 
    42 => "1101001000000000100110111001001000000000000000000000000000000000", 
    43 => "1011011110110011010100100000111000000000000000000000000000000000", 
    44 => "0000110000001100110111100000001000000000000000000000000000000000", 
    45 => "0010101010101001101010100011010000000000000000000000000000000000", 
    46 => "1001000000110100011100001010100100000000000000000000000000000000", 
    47 => "0111000100000110001000101011011100000000000000000000000000000000", 
    48 => "0000100110010001001000100010001100000000000000000000000000000000", 
    49 => "1101001011000001000010100001000100000000000000000000000000000000", 
    50 => "0111000001111011100110111111000000110011010001011001011110000010", 
    51 => "1101000011011100110011101000001111000010010100001101111010001110", 
    52 => "1101110011011100010101110100101000001101110011001010111101011111", 
    53 => "0101111110011100001111111011101101111111010101000100111001010010", 
    54 => "0001000111011011001110100110100000000101100010111010011011010010", 
    55 => "1001101111101000100101010000001010101101110000011111010100000000", 
    56 => "1110100000010010011111101000010111001000000001001100101011111101", 
    57 => "1010100011001111100000000010011011101000100011001000001110010110", 
    58 => "0010010101101111001110100101110011101001100110110010000110001100", 
    59 => "0001011000010001101000001110011010100000100110001100100001000001", 
    60 => "1011001000101101010100001000000111111010000011111111000010010101", 
    61 => "1000110101111111110001101010111101011110010100110000100100101010", 
    62 => "1000011010100101010001110000110111101100101000100111001010101001", 
    63 => "1111110011101111011010010101001110111000011101101111011010010101", 
    64 => "0101000100010001001110100100011001101101101000101101011010101111", 
    65 => "1110000001000010000110001011001010001011110000111000100010010011", 
    66 => "0010011010011100111101001011110101000111000110011000000011000010", 
    67 => "1111011111110000100110101000110011000010100000110001111000001010", 
    68 => "0000001100110111110111011000101111101010001001000101101101010000", 
    69 => "1010111111111100111111011101100101011111101101111100000111011111", 
    70 => "0111100010110111100000010110001101100000111100011011000011101001", 
    71 => "1010001101101001111000001000101010010000110100110101100001001001", 
    72 => "1011101010100110110111001011110000111010100011111101001010111110", 
    73 => "0110111101111101101101001110011001101101101100010101010010011000", 
    74 => "0001110101001011010000110111110001011001000100101100111111101100", 
    75 => "1000010000011110010100111001101111111011001100100100011100001011", 
    76 => "0011111000110111011011010000000000101110010110011000100000011011", 
    77 => "0010001001111000100000011010011100101011000111010100000010010011", 
    78 => "1100100100011101000010000011111001110101101100011011100111101011", 
    79 => "0101111001111011001010111001110110101000011110010111001011010111", 
    80 => "1011101111000001100100000000010100010110101011001110110101101000", 
    81 => "1101101001100001101101000010111001000111011101111111110001100110", 
    82 => "1001001011101101100010001110010000101001101100111011100001110000", 
    83 => "1100101001110000110101010111110100000111000111100010110111010000", 
    84 => "1011110111001100110110100110101000000110010010010011110100100001", 
    85 => "1010001010101110110101111011101000000110010011010001011100011001", 
    86 => "0000101001011001001111001110111000001100100001111000000101110100", 
    87 => "1010101100100001111101010001010001101101011100100111001111001001", 
    88 => "0011010001000100101111100001111001100100000010011000110100001010", 
    89 => "0000011000111001100110001010011110100011000110010100100110101000" );


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

entity pg_conv3x3_tile_csc4 is
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

architecture arch of pg_conv3x3_tile_csc4 is
    component pg_conv3x3_tile_csc4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_csc4_rom_U :  component pg_conv3x3_tile_csc4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


