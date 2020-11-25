-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_c9j0_rom is 
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


architecture rtl of pg_conv3x3_tile_c9j0_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110000100000000000000010000000000000000000000000000000000000000", 
    1 => "1111111111111011111111001000000100000000000000000000000000000000", 
    2 => "1111111110110011011100111001111100000000000000000000000000000000", 
    3 => "1000000000000000001000000000000000000000000000000000000000000000", 
    4 => "1111111011011101011001111000011100000000000000000000000000000000", 
    5 => "1111111111111111111111111111111100000000000000000000000000000000", 
    6 => "1000110011000010000000000000000000000000000000000000000000000000", 
    7 => "1100110100011001000000000000000000000000000000000000000000000000", 
    8 => "1100000010000010000000000000000000000000000000000000000000000000", 
    9 => "1110100000100000000000000000000000000000000000000000000000000000", 
    10 => "1010100100100100000000000000000000000000000000000000000000000000", 
    11 => "0110100010001101000000000000000000000000000000000000000000000000", 
    12 => "1001010100000000000000000000000000000000000000000000000000000000", 
    13 => "0110101111000100000000000000000000000000000000000000000000000000", 
    14 => "0001001010101111000000000000000000000000000000000000000000000000", 
    15 => "1010101100001101000000000000000000000000000000000000000000000000", 
    16 => "0001110101111101000000000000000000000000000000000000000000000000", 
    17 => "1101110001110010000000000000000000000000000000000000000000000000", 
    18 => "0111111111001110000000000000000000000000000000000000000000000000", 
    19 => "0110001100011010000000000000000000000000000000000000000000000000", 
    20 => "0100010000000110000000000000000000000000000000000000000000000000", 
    21 => "1001010100111110000000000000000000000000000000000000000000000000", 
    22 => "1111111110000110111011101101010000000000000000000000000000000000", 
    23 => "1100101111101110110110010101111100000000000000000000000000000000", 
    24 => "1100010000100100111111000110010100000000000000000000000000000000", 
    25 => "1111000011110000001001001111000100000000000000000000000000000000", 
    26 => "1001001110000000000000111010010000000000000000000000000000000000", 
    27 => "1010100011110100010000001011001000000000000000000000000000000000", 
    28 => "1110101110010100011001011011110100000000000000000000000000000000", 
    29 => "1001000100111111100010010001101000000000000000000000000000000000", 
    30 => "0011111010111011101111111110110100000000000000000000000000000000", 
    31 => "1000111111110010010101010111101000000000000000000000000000000000", 
    32 => "0000001000100110110001110100010000000000000000000000000000000000", 
    33 => "0010000010001110100010010100101000000000000000000000000000000000", 
    34 => "0000101100010100110101110000110100000000000000000000000000000000", 
    35 => "0111010000111010011110101100111100000000000000000000000000000000", 
    36 => "0100001001100001110001010000010000000000000000000000000000000000", 
    37 => "0011010101011010100001110100011000000000000000000000000000000000", 
    38 => "0000011110000000100101110101111000000000000000000000000000000000", 
    39 => "0110100011100110111010001111010100000000000000000000000000000000", 
    40 => "1011111110000101100111111100100000000000000000000000000000000000", 
    41 => "1010011100011101100001101010011000000000000000000000000000000000", 
    42 => "1000001101111001100110010011010000000000000000000000000000000000", 
    43 => "1110110001101010001000111101100000000000000000000000000000000000", 
    44 => "0101110001101000011100101011100100000000000000000000000000000000", 
    45 => "0010000001110111111010001100001100000000000000000000000000000000", 
    46 => "1101011111000100110100010111000100000000000000000000000000000000", 
    47 => "0010111110110010010111010110111100000000000000000000000000000000", 
    48 => "0110100011010100011110101010011100000000000000000000000000000000", 
    49 => "0011101000101110011101111111100100000000000000000000000000000000", 
    50 => "0101010000010100010100001010011011010010100101010100101010111110", 
    51 => "0001011111001000010101001000110001010110100000110001100101000100", 
    52 => "0100101001000001010001100000100001001010110101000111100000001000", 
    53 => "1111101100111101101010000110001010011011010111011011111011100011", 
    54 => "1001001111111001000101110111011010110011101010010000010101100100", 
    55 => "0000001000010001001111100111100100001011010101010110010101101101", 
    56 => "1001111100111100111100010100010001010101101101001111000101000100", 
    57 => "1001011000010010101001010101111010111010010101101110000011011100", 
    58 => "1111001010010101111000010110010111100001111111011100010000010100", 
    59 => "1101001101011100100011011011010001110011011000100101001110101100", 
    60 => "0100100001111000100011010110010000101111111010001011100100000000", 
    61 => "1110001001110001011000110001111011111000111100000111010111100001", 
    62 => "1001100011100100000100000001100111001110110010011111100000100000", 
    63 => "1011011100111100101011111101010000110010000111011110001111100100", 
    64 => "0011010101111100010101010100011010111111100101100011010010011111", 
    65 => "1001100111001010100111000001011011101110000110010100100100000110", 
    66 => "1110010000001000011011010111011110111100110101100111000001000011", 
    67 => "0011101010101000101110010100111100110010111100011010111101001001", 
    68 => "0111010101010000100000101110011100000101100110001010010111101010", 
    69 => "0001011110011000111101110000110110100100101000010011000011000000", 
    70 => "1111100001110000001110011001010111111010101100010011010010110001", 
    71 => "0011101000101100101111010011101001100101001110010001011110011100", 
    72 => "0110101111010100101101000100010000111010100011001000100100011001", 
    73 => "0100011100110100010000111100001100010100000100100011101001011011", 
    74 => "1110001001111100111100111100101001011010100110000010101100111010", 
    75 => "0000110010100111010101000011100101100111111100101011000000010001", 
    76 => "1011001110011011010000011101000001000111100011011111010100110011", 
    77 => "0010000100000011010101111110100111010001101000011100011011110111", 
    78 => "1111001001100000110110001010111011100010010001000110011110110100", 
    79 => "1000011011001000000001111000111011110010100101110101000110000110", 
    80 => "0000011110011110011100010110010001100000010100110010100010000111", 
    81 => "0100001001011101100111100001111111001111010000000011110101100101", 
    82 => "1101011011001010101000010111010010100001000010011011100101011000", 
    83 => "1000001000100000010101000101111000100110000011101001100100010000", 
    84 => "0000110110101100011010100010100000110110011011110000110000010001", 
    85 => "0111011110000011000101001001001111010100100011000101101101011111", 
    86 => "0000000101101110101100010100001101101100110010101001101001010010", 
    87 => "0110000101101111101110100001110101011010111110000001111101100001", 
    88 => "1100111111000110111000000100110111101000011111111000011100111101", 
    89 => "0101011001011101111001001010000101100101000010111000101001010110" );


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

entity pg_conv3x3_tile_c9j0 is
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

architecture arch of pg_conv3x3_tile_c9j0 is
    component pg_conv3x3_tile_c9j0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_c9j0_rom_U :  component pg_conv3x3_tile_c9j0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


