-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cEe0_rom is 
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


architecture rtl of pg_conv3x3_tile_cEe0_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011111111111111111111111111111000000000000000000000000000000000", 
    1 => "0000000000000000000000000101111000000000000000000000000000000000", 
    2 => "0000000110100100100110000111000000000000000000000000000000000000", 
    3 => "0101010111101111100111101011101100000000000000000000000000000000", 
    4 => "1101010000000000100000000001011100000000000000000000000000000000", 
    5 => "1010000000000000000001000000001000000000000000000000000000000000", 
    6 => "0000011110001100000000000000000000000000000000000000000000000000", 
    7 => "1101010100100100000000000000000000000000000000000000000000000000", 
    8 => "1000011100000000000000000000000000000000000000000000000000000000", 
    9 => "1100000100000100000000000000000000000000000000000000000000000000", 
    10 => "1000010100110100000000000000000000000000000000000000000000000000", 
    11 => "0110010000100100000000000000000000000000000000000000000000000000", 
    12 => "1000100100101000000000000000000000000000000000000000000000000000", 
    13 => "1111010010101000000000000000000000000000000000000000000000000000", 
    14 => "0010111101110011000000000000000000000000000000000000000000000000", 
    15 => "1100011001001010000000000000000000000000000000000000000000000000", 
    16 => "0101111101011010000000000000000000000000000000000000000000000000", 
    17 => "1101111001010011000000000000000000000000000000000000000000000000", 
    18 => "0001010101011000000000000000000000000000000000000000000000000000", 
    19 => "0000000010100101000000000000000000000000000000000000000000000000", 
    20 => "1111100110000001000000000000000000000000000000000000000000000000", 
    21 => "0110001011010110000000000000000000000000000000000000000000000000", 
    22 => "0101111101111000111101010111101000000000000000000000000000000000", 
    23 => "0110100010100100111011101111010000000000000000000000000000000000", 
    24 => "1100000001100100010000000111011000000000000000000000000000000000", 
    25 => "0101011100110111001101011000011100000000000000000000000000000000", 
    26 => "0111011000100100011010101101010100000000000000000000000000000000", 
    27 => "1111011000000110010100100100001000000000000000000000000000000000", 
    28 => "0111010101111011101101000011011000000000000000000000000000000000", 
    29 => "0111011000011110011100000101111000000000000000000000000000000000", 
    30 => "1100001010001001010100110111010000000000000000000000000000000000", 
    31 => "1000101111111101001111111011000100000000000000000000000000000000", 
    32 => "1000010110001110101000011101100000000000000000000000000000000000", 
    33 => "1110010100011110010001111000011100000000000000000000000000000000", 
    34 => "1011101001000110100000111110100100000000000000000000000000000000", 
    35 => "0010011100110110111101010101110000000000000000000000000000000000", 
    36 => "1000100010100101100101110000000100000000000000000000000000000000", 
    37 => "1100001010100000001011101111000100000000000000000000000000000000", 
    38 => "0100010011010000010000101011100100000000000000000000000000000000", 
    39 => "0111100000110111001101100010011100000000000000000000000000000000", 
    40 => "0100000100100111011101110100001100000000000000000000000000000000", 
    41 => "0100101110110011010000111101101000000000000000000000000000000000", 
    42 => "1010000111000100000000110010011100000000000000000000000000000000", 
    43 => "1010010100011011100010011101100000000000000000000000000000000000", 
    44 => "0001010010001011010110100000101100000000000000000000000000000000", 
    45 => "0101001011101100111111001111010100000000000000000000000000000000", 
    46 => "1100010111110001111101001011100000000000000000000000000000000000", 
    47 => "0100010011101000010110101001000000000000000000000000000000000000", 
    48 => "0000010110100001110101111100000100000000000000000000000000000000", 
    49 => "1101001101001001001010101011000000000000000000000000000000000000", 
    50 => "0101101111001010000101011001111110110111100000011000110101010010", 
    51 => "1101011111001100100000110010010010010101011111100100000110100000", 
    52 => "1010010000001101000000000010011011111000010110011100001010110110", 
    53 => "0011111000111111011100110101101000010111010000100000110101011100", 
    54 => "0110101110110000100111000100100001000101100111011001010101001000", 
    55 => "0101010000011100110101010011011001110100101100000001010100000010", 
    56 => "0111000101110011101100000100101100111000111000101000100100011011", 
    57 => "1100100011111100111001101100010111101000101010110100001110110101", 
    58 => "0001110101000011010000110111101100001110010011110010111011011001", 
    59 => "1111100000001010001001111000100100101011111111110001011010111111", 
    60 => "0100010100011101100111100110010000001101000110000101011101101000", 
    61 => "0100101010011001100010011110111111100000100000011000111111101011", 
    62 => "0011111011011011000010011101100010110111110111011110111100001000", 
    63 => "0010101110101110111001001010010000000011111101010101101001000101", 
    64 => "1000001010001100100001010010011001000101101000000110001100111010", 
    65 => "1110011111010110011011110111011011000101010110110100010101001000", 
    66 => "1110100111100011000111110111111111101111111001111000000001010011", 
    67 => "0000100000100000010101101110000000001000100011100000100010110110", 
    68 => "1111100010100101010110101011111010011001110110111101000010100011", 
    69 => "0000011011000101100001100000011101000110001111011011100001101011", 
    70 => "0000011110010100111110111100100101010111101010000111111010101000", 
    71 => "0010001100010101001101010010000101110101101111111001001010001011", 
    72 => "1110010110100011011010100101001001001011111101110110000011101001", 
    73 => "1100011010010111001000001101101010100111111011101111001101010001", 
    74 => "0111100010101100101100101111110010010100111010100001101011011001", 
    75 => "0011110010101011111000110011010001101011001110001110110000110100", 
    76 => "1000010010011001111000110100101000011100010101000010000011000101", 
    77 => "1111100100110001110110101100011101001000010101001000000110011011", 
    78 => "0001000000100101111000000100100111110110100001110000010001100111", 
    79 => "0010010000111110111000101011000010011000101111100110000000110000", 
    80 => "1000111100010011001011100100000011110001101110110100110000001110", 
    81 => "0000011000100101011011110000010100011011111101000000011100101111", 
    82 => "0010111000101010100101001001011101111010110100011000001010010110", 
    83 => "1010100011011110001101011000010101000011100111010011010110100110", 
    84 => "1000111010111011000101111000010010001010100111100000010101010110", 
    85 => "0001001000000100010001011001110100011011111111001001110111100010", 
    86 => "0010110101111010110000111010000101110011101110011011101001000000", 
    87 => "0000111100110001000110101110110110101010111110110011111001100001", 
    88 => "0010001110111110110010111110110010110111010011110011010001100110", 
    89 => "0011011101101100000111100100010111110011110011000001101011100001" );


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

entity pg_conv3x3_tile_cEe0 is
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

architecture arch of pg_conv3x3_tile_cEe0 is
    component pg_conv3x3_tile_cEe0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cEe0_rom_U :  component pg_conv3x3_tile_cEe0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


