-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_c6jw_rom is 
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


architecture rtl of pg_conv3x3_tile_c6jw_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000000000000000000000000001100000000000000000000000000000000", 
    1 => "1111111111111111111111101010111100000000000000000000000000000000", 
    2 => "0111001000011010101111111111111100000000000000000000000000000000", 
    3 => "1000000000000000000000000000000000000000000000000000000000000000", 
    4 => "1111111111110111010001011100111100000000000000000000000000000000", 
    5 => "1110100101110110010111100111111100000000000000000000000000000000", 
    6 => "0010000001111110000000000000000000000000000000000000000000000000", 
    7 => "0101010101100001000000000000000000000000000000000000000000000000", 
    8 => "0000000001010000000000000000000000000000000000000000000000000000", 
    9 => "1110000001100010000000000000000000000000000000000000000000000000", 
    10 => "0010110001110100000000000000000000000000000000000000000000000000", 
    11 => "1111100001010100000000000000000000000000000000000000000000000000", 
    12 => "1110110011011000000000000000000000000000000000000000000000000000", 
    13 => "0111000101110011000000000000000000000000000000000000000000000000", 
    14 => "1111010001110001000000000000000000000000000000000000000000000000", 
    15 => "1111100100100000000000000000000000000000000000000000000000000000", 
    16 => "1000100101001100000000000000000000000000000000000000000000000000", 
    17 => "1000011010110010000000000000000000000000000000000000000000000000", 
    18 => "1110001111010110000000000000000000000000000000000000000000000000", 
    19 => "0111011100011010000000000000000000000000000000000000000000000000", 
    20 => "0000010000101000000000000000000000000000000000000000000000000000", 
    21 => "1000010100100111000000000000000000000000000000000000000000000000", 
    22 => "0110000000000110001000110100001000000000000000000000000000000000", 
    23 => "1100011100110110110111010111101000000000000000000000000000000000", 
    24 => "0101010000110001100101000000001100000000000000000000000000000000", 
    25 => "1100000011101000001001101110000100000000000000000000000000000000", 
    26 => "0011001111010001101111111101010100000000000000000000000000000000", 
    27 => "0010000000110101011000101010010000000000000000000000000000000000", 
    28 => "1010000110111001000001001101100100000000000000000000000000000000", 
    29 => "1001100010000011100010001000100100000000000000000000000000000000", 
    30 => "0001011110001110000100011011110100000000000000000000000000000000", 
    31 => "1001110111011011000101010011100000000000000000000000000000000000", 
    32 => "1101010000100111110101110000011000000000000000000000000000000000", 
    33 => "0000100000001100100010000100010100000000000000000000000000000000", 
    34 => "0000101100110101100101010001101100000000000000000000000000000000", 
    35 => "0111011000101010001110111101111100000000000000000000000000000000", 
    36 => "0000100011000011110111000000011100000000000000000000000000000000", 
    37 => "0011010101011011000010110101101100000000000000000000000000000000", 
    38 => "0001101111000010100010110101101000000000000000000000000000000000", 
    39 => "1110101001100110111001101111010000000000000000000000000000000000", 
    40 => "0011110010001111001100111010100000000000000000000000000000000000", 
    41 => "0010010001011100110000101000010000000000000000000000000000000000", 
    42 => "0011001110110011100110010010100000000000000000000000000000000000", 
    43 => "1100100011111010011110111101101000000000000000000000000000000000", 
    44 => "0001010001111000001010100001100100000000000000000000000000000000", 
    45 => "0001110111110111111101000100001100000000000000000000000000000000", 
    46 => "1101011111010100010100110100100100000000000000000000000000000000", 
    47 => "1111011010110010010000010110111000000000000000000000000000000000", 
    48 => "1110100010111100001110101011001100000000000000000000000000000000", 
    49 => "0010000000100100011000111011010100000000000000000000000000000000", 
    50 => "1010000100001100011110010000011111011001001100000011001110000110", 
    51 => "0011001111011001000111001000100010000111100001110001100101000000", 
    52 => "1000001001110100010010101011101001000010001100010100111110001010", 
    53 => "0010100111010011111100101010000000010101011101011110000110100100", 
    54 => "1001101110010010000101100011000111000000100011110110100101110100", 
    55 => "0100010000001101101010111111000010100011000111001100011011101001", 
    56 => "1110100110010011101100010101011011000001100000001001101101010110", 
    57 => "1000000000100011100000111011011010110001001100110000011110100110", 
    58 => "1011001110101011111000011000010010000100001101111000110111000100", 
    59 => "1111000000011100110001110010000010111001001001100011001101101100", 
    60 => "1000110000111000101011111100011010011101001111001010100000001000", 
    61 => "0001010111110111101111111111111101110100011100110011001101001010", 
    62 => "1000101011100010000100101000010110100110111010000001100111010101", 
    63 => "1000111000111000010011011001101110001110000111100001001100001011", 
    64 => "1011010001101010011010010101101110010111011000001010010000111011", 
    65 => "1001010111001110000111110001011101111111000100100101100110100101", 
    66 => "0001111001010001010011010110010010100000010101000101100011111111", 
    67 => "0010110110101001011110010101011100000100101100010011110001010001", 
    68 => "1110010111101000101100110101011011100001001110000110010101101000", 
    69 => "0001001110011000100101110010010111110100100101011011000111011110", 
    70 => "1100100000111110000010000000011010111010101101001011110010100111", 
    71 => "0101110001101100101111001010110001000001011011110010111111110000", 
    72 => "1101111111111000010101000101010001011101001111101000000001110000", 
    73 => "0110001100110101100001001010000111110110100100101001101000101011", 
    74 => "0100110011111000111110111011110001011000100010001101000011101110", 
    75 => "1100110011010111010100100011000100000110110101101101000001000001", 
    76 => "0010000110001101010001000111000111100111100111011010010101110000", 
    77 => "0010101101100001011111111011000110101100001110111101111100111111", 
    78 => "1101111100010001000111110000111100100010010001101111010001100110", 
    79 => "1100100001000001110001011000011000101011111001100101010010100100", 
    80 => "0010001110001111101110000100001110110011010100011010100000000011", 
    81 => "0100101001010101000011110110010110011000010100000011110101101101", 
    82 => "0000100001000010110100011111011111110011001011011011100101111010", 
    83 => "1000111001100010110110000111010101101111010001101101010101110100", 
    84 => "0001011111101101011101011010011010110100011000111010000100011110", 
    85 => "0001011101011101001001010010001011001000110001000111101101111111", 
    86 => "0010000010101011100011010100111101101100110011101100110001000110", 
    87 => "1011000110011010111101101000110010110010011000000101101101101000", 
    88 => "1100111101000110011000101000010000100111011011110010000101110100", 
    89 => "0111011000101101001001011011000101010011001110101010101101011111" );


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

entity pg_conv3x3_tile_c6jw is
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

architecture arch of pg_conv3x3_tile_c6jw is
    component pg_conv3x3_tile_c6jw_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_c6jw_rom_U :  component pg_conv3x3_tile_c6jw_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

