-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cLf8_rom is 
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


architecture rtl of pg_conv3x3_tile_cLf8_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1100010011010111001001111011000100000000000000000000000000000000", 
    1 => "1000000000000000000000000000000000000000000000000000000000000000", 
    2 => "0000000000100110110000000000000000000000000000000000000000000000", 
    3 => "1111110111111111111111111111111100000000000000000000000000000000", 
    4 => "1000000010100100010000100001001100000000000000000000000000000000", 
    5 => "1011001001000100011100111000001100000000000000000000000000000000", 
    6 => "0010010110100100000000000000000000000000000000000000000000000000", 
    7 => "1011001110110110000000000000000000000000000000000000000000000000", 
    8 => "0110010010110100000000000000000000000000000000000000000000000000", 
    9 => "0111101110110111000000000000000000000000000000000000000000000000", 
    10 => "0010001010000110000000000000000000000000000000000000000000000000", 
    11 => "1000111011011111000000000000000000000000000000000000000000000000", 
    12 => "1101000101101001000000000000000000000000000000000000000000000000", 
    13 => "1011111101010110000000000000000000000000000000000000000000000000", 
    14 => "0101100101000010000000000000000000000000000000000000000000000000", 
    15 => "1111111000110010000000000000000000000000000000000000000000000000", 
    16 => "0000101010001110000000000000000000000000000000000000000000000000", 
    17 => "1101100010111111000000000000000000000000000000000000000000000000", 
    18 => "0000111111111110000000000000000000000000000000000000000000000000", 
    19 => "1110101110001001000000000000000000000000000000000000000000000000", 
    20 => "1010100011000101000000000000000000000000000000000000000000000000", 
    21 => "0010010111011100000000000000000000000000000000000000000000000000", 
    22 => "1111111001011000100111000101000100000000000000000000000000000000", 
    23 => "1110001110101110111001111001110100000000000000000000000000000000", 
    24 => "0110010110011111001001010001110000000000000000000000000000000000", 
    25 => "0000000000011010000000100100001000000000000000000000000000000000", 
    26 => "0110111101001101110001101101010000000000000000000000000000000000", 
    27 => "1101011111110110111001101011011100000000000000000000000000000000", 
    28 => "1111101011101000111010101111000000000000000000000000000000000000", 
    29 => "0011001000000000001010001011110000000000000000000000000000000000", 
    30 => "1000111101011110100000110101110000000000000000000000000000000000", 
    31 => "0001110000100000001111010010011000000000000000000000000000000000", 
    32 => "0101010100000111000100110000011100000000000000000000000000000000", 
    33 => "0100011110110011011101010111111000000000000000000000000000000000", 
    34 => "0001101010110101110111001000000100000000000000000000000000000000", 
    35 => "1100100001111001000001001011100000000000000000000000000000000000", 
    36 => "0100001111110010010000111000111000000000000000000000000000000000", 
    37 => "1000001111111101111011011010111000000000000000000000000000000000", 
    38 => "0110101111011011110001001100000000000000000000000000000000000000", 
    39 => "0110101111011011110101101001110000000000000000000000000000000000", 
    40 => "1111110110011110101111101001110000000000000000000000000000000000", 
    41 => "1111101001110101000000101011101100000000000000000000000000000000", 
    42 => "1000111010010001100111011100010000000000000000000000000000000000", 
    43 => "1011010110011000110101011100010000000000000000000000000000000000", 
    44 => "1011100010111010011111111001100100000000000000000000000000000000", 
    45 => "1001010000001110010101111110110000000000000000000000000000000000", 
    46 => "0101000001011001010001111010010000000000000000000000000000000000", 
    47 => "1010010110111111101111100011110000000000000000000000000000000000", 
    48 => "1011011001110110101110001100001100000000000000000000000000000000", 
    49 => "1110000110100100011000101110001100000000000000000000000000000000", 
    50 => "1101111000001101010000010110111010111110000011101000000100000110", 
    51 => "1001010000001101100010111101110100110100001011101100001011011110", 
    52 => "0000010000001110110111111000010011011010000110101110011000000101", 
    53 => "0111010011111101111001001001001101100011100011100110000111000001", 
    54 => "0010001100111010100010001001101110110011001010110001001010011111", 
    55 => "0110011010111101010101010010010000011010100111010101011101000100", 
    56 => "0000010111001010000000111001110100001111110111110000100001010101", 
    57 => "1101001010110001100110000111101000100011101100011111110111101000", 
    58 => "0001010000110000111111110010011010011001001110010001110010001011", 
    59 => "1100011001100100101101000011110111110010101101010101000000101101", 
    60 => "1000011000000100010110001011010101000111001010001100001010011000", 
    61 => "0101111011100110110000010100101010001010001100101010100101010000", 
    62 => "0000001001011100100001110111111011011000011011110100000111111101", 
    63 => "0000101100011001110110101010001110100101010100010100101111100011", 
    64 => "1001111101001010101000100101110011001011000011111010101101011101", 
    65 => "1101101111010011100110010111010010100101101110010111101111001101", 
    66 => "0100000010000001100100000001010001010011100111111110100000010001", 
    67 => "0001011110001010001110010010000000000110101010001001000000011010", 
    68 => "0101011100111010011101100000010010110010100000110000101111101000", 
    69 => "1101110011010011000101100110100110101010010101001001001000010111", 
    70 => "0001011110110000001011100001010010001110001000000011100010000000", 
    71 => "0010001010001010011111111110111111110100010011111011100011000001", 
    72 => "1111111100110011110100001000101101100011100101011101001010111110", 
    73 => "0001100010011101110010010001110100000100001000001100110000011011", 
    74 => "0011001100010011110001100010110100001101010101001001110111101111", 
    75 => "0101111101101110101000010101101010011001010001110001000111100110", 
    76 => "0101000111101000100101001100101111111111101100000011011000101101", 
    77 => "0000101100110100000110000111100001100111111011000111001101111011", 
    78 => "0100100100101110110110001000101001010011100100111001101110101011", 
    79 => "1100111101011001100100101111110101010011001010000010001011100010", 
    80 => "0000001010101000011011111001100000011001010111000110001001010000", 
    81 => "1101011110100111001011111100000010100111000101101101001001011011", 
    82 => "0000110101000011101011110001010010101011110000001001100110000010", 
    83 => "1111011100101001011001010110001010100110100101100010011000111011", 
    84 => "0000111110100001101011010000010010011001010100110010111011011001", 
    85 => "1111010100000110000000011001110000010010111100100010000100001111", 
    86 => "0110110000010010001110001010010001100101111100110111111010110100", 
    87 => "1111001000101101000011111011011111010000111111001000100001011111", 
    88 => "0001011000100011001100100111000100010011001100101110000011110000", 
    89 => "0011100110101010100110011011110000000001110000001000101100001101" );


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

entity pg_conv3x3_tile_cLf8 is
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

architecture arch of pg_conv3x3_tile_cLf8 is
    component pg_conv3x3_tile_cLf8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cLf8_rom_U :  component pg_conv3x3_tile_cLf8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


