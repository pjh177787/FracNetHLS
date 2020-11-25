-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cg8j_rom is 
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


architecture rtl of pg_conv3x3_tile_cg8j_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000001000001010100001111101100000000000000000000000000000000", 
    1 => "0000000000000000000000000000000000000000000000000000000000000000", 
    2 => "0000000001000000000001010000000100000000000000000000000000000000", 
    3 => "0011111111111111111101101111111100000000000000000000000000000000", 
    4 => "0000000000000000000000000000001100000000000000000000000000000000", 
    5 => "0000000000000000000000000100000000000000000000000000000000000000", 
    6 => "0000011101100011000000000000000000000000000000000000000000000000", 
    7 => "0011010101110001000000000000000000000000000000000000000000000000", 
    8 => "0101011000000010000000000000000000000000000000000000000000000000", 
    9 => "1001101101110101000000000000000000000000000000000000000000000000", 
    10 => "0100100110010000000000000000000000000000000000000000000000000000", 
    11 => "1101100100011111000000000000000000000000000000000000000000000000", 
    12 => "1000111000000011000000000000000000000000000000000000000000000000", 
    13 => "1000100101001001000000000000000000000000000000000000000000000000", 
    14 => "1000100011111010000000000000000000000000000000000000000000000000", 
    15 => "1010101111000110000000000000000000000000000000000000000000000000", 
    16 => "0100011010011010000000000000000000000000000000000000000000000000", 
    17 => "0101000101011001000000000000000000000000000000000000000000000000", 
    18 => "1110011101000110000000000000000000000000000000000000000000000000", 
    19 => "0110110001001010000000000000000000000000000000000000000000000000", 
    20 => "0111111001001001000000000000000000000000000000000000000000000000", 
    21 => "0010101011100001000000000000000000000000000000000000000000000000", 
    22 => "0100001000100100110000100100010000000000000000000000000000000000", 
    23 => "1100001001100110011000000110010100000000000000000000000000000000", 
    24 => "0011100101010011011100000100000100000000000000000000000000000000", 
    25 => "1101100011111001100010000111000100000000000000000000000000000000", 
    26 => "1010001000000110001000011110011000000000000000000000000000000000", 
    27 => "1100111011000010111110010111110000000000000000000000000000000000", 
    28 => "1100101011101001110110001010010100000000000000000000000000000000", 
    29 => "1110001010110100011000001111010100000000000000000000000000000000", 
    30 => "0011100001001000001010001011000100000000000000000000000000000000", 
    31 => "1110111110110111111001111010110000000000000000000000000000000000", 
    32 => "1010101001000101101011100001100000000000000000000000000000000000", 
    33 => "0001101010001010101110001010101100000000000000000000000000000000", 
    34 => "1010001100011110000111010010111100000000000000000000000000000000", 
    35 => "1011100000010101110000101010010100000000000000000000000000000000", 
    36 => "1111111010111110111011111110110000000000000000000000000000000000", 
    37 => "1100001000000000011001101011000100000000000000000000000000000000", 
    38 => "1001111011001100100110001111100000000000000000000000000000000000", 
    39 => "0010111010101101110111011000100000000000000000000000000000000000", 
    40 => "1011010110010111111011000100110000000000000000000000000000000000", 
    41 => "1011101010111100111111010010110100000000000000000000000000000000", 
    42 => "1101001001100000001011101011001100000000000000000000000000000000", 
    43 => "0110110001000001010101001011101000000000000000000000000000000000", 
    44 => "1110100001101110111000101101000100000000000000000000000000000000", 
    45 => "1010101110000101110110111001101100000000000000000000000000000000", 
    46 => "1110000001101000001000000010011000000000000000000000000000000000", 
    47 => "0101010001010100000010100100101100000000000000000000000000000000", 
    48 => "0111001000000000001010001101100100000000000000000000000000000000", 
    49 => "1110010010000001000110010000001000000000000000000000000000000000", 
    50 => "0011100010001110111110001010100011001001000111111101100001100010", 
    51 => "0101110110011110110101010000011001101100100000101001010101000010", 
    52 => "1110001110011110100101110010111010100111100000101100001101101100", 
    53 => "0011110000110001000111110110000100001000000000011001101111000000", 
    54 => "1100011011111000110000001110110111000100011100000100100101101000", 
    55 => "0000001000100100011101001110001011000010001100010101001011101010", 
    56 => "1101111110110000100111010001101101111101101100101101010101101011", 
    57 => "0001000110101110110001010000001010110110110001111001100111110100", 
    58 => "0110110011011011101100110100000011000110000001101111110101000000", 
    59 => "0111000011100100010000111100000100111000101011000101011011000000", 
    60 => "0001110111110011010101100111100101000010011010101100100001011100", 
    61 => "0100010000111010010101000010011000000001011111100010001000110110", 
    62 => "1000110110101111110000000001100111000010001000111010100100011101", 
    63 => "0010110011111011100111110100110100001010110001111010100010110001", 
    64 => "0010000010011010101010101110010000110001100110011011100110110100", 
    65 => "0011011010000101000101000010111101000101101101110001000100001010", 
    66 => "1001000100010111101011000101111110001001101100110111001001001100", 
    67 => "1100100010110101100011100101001010000110001100010111101011110101", 
    68 => "1000010011001110010000010001100001100010100011001101000010110001", 
    69 => "1001010010011100000001100010101111110001000011010010110110001111", 
    70 => "1110101111010111000111001000100100111000011010010101000001011100", 
    71 => "1011001010110111101001000101100101101110100100110011110101111101", 
    72 => "1010010100001100001001100101100111000011010111101100110100111111", 
    73 => "1011000101111110100001101110010111011110000110100110101001101000", 
    74 => "1100100010010010001101101010001111100101111111110001100000110111", 
    75 => "0001101001101101011001011000111010111010111011101111011001011000", 
    76 => "0010001001101010111000010011001000100011111010010000011110101111", 
    77 => "1101011111011000110011001111110011011110000100100011100111101010", 
    78 => "1110101011111010100111101101110010000010100101111100100101010100", 
    79 => "1100100110000000000011111000001000000110000011110110111100010100", 
    80 => "0000001001101101111000100011011001110101111001101010001000011010", 
    81 => "0001001000110000001001011010011111000000111101100000001010100011", 
    82 => "1111000100110111011011111111100110010011100010111011111101001100", 
    83 => "0000000101000001100001000010000110100100001001110110110011100100", 
    84 => "0111000111110101010110000000101110101011111010110110011000000010", 
    85 => "1101010011000011111111001001001110110110001001100110011010001011", 
    86 => "0000001000100000100000001011110110110010011111111000101011101100", 
    87 => "0011100011010010010101010010001111100110110000000101111110011000", 
    88 => "1010010001100100111101100110111001110110111010011001111000100101", 
    89 => "1110111000101111110010010011101010000100000011011010100100101001" );


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

entity pg_conv3x3_tile_cg8j is
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

architecture arch of pg_conv3x3_tile_cg8j is
    component pg_conv3x3_tile_cg8j_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cg8j_rom_U :  component pg_conv3x3_tile_cg8j_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

