-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cYie_rom is 
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


architecture rtl of pg_conv3x3_tile_cYie_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001111000001111111101111100001000000000000000000000000000000000", 
    1 => "0000000100000000000000000111110100000000000000000000000000000000", 
    2 => "0000000010000000000000000011001100000000000000000000000000000000", 
    3 to 4=> "1111111111111111111111111111111100000000000000000000000000000000", 
    5 => "1110000100100000000000000001110000000000000000000000000000000000", 
    6 => "0000111011111110000000000000000000000000000000000000000000000000", 
    7 => "0000010001100110000000000000000000000000000000000000000000000000", 
    8 => "0000010011111000000000000000000000000000000000000000000000000000", 
    9 => "0010000000000110000000000000000000000000000000000000000000000000", 
    10 => "0110010001110010000000000000000000000000000000000000000000000000", 
    11 => "0000101110000110000000000000000000000000000000000000000000000000", 
    12 => "1101000101110001000000000000000000000000000000000000000000000000", 
    13 => "1011001101001010000000000000000000000000000000000000000000000000", 
    14 => "0100001111011010000000000000000000000000000000000000000000000000", 
    15 => "1001110011110000000000000000000000000000000000000000000000000000", 
    16 => "0111001110000100000000000000000000000000000000000000000000000000", 
    17 => "1111000001100111000000000000000000000000000000000000000000000000", 
    18 => "1111111111110111000000000000000000000000000000000000000000000000", 
    19 => "0110001100000100000000000000000000000000000000000000000000000000", 
    20 => "1111111010101101000000000000000000000000000000000000000000000000", 
    21 => "0100001001100110000000000000000000000000000000000000000000000000", 
    22 => "1111101111000010011110011101111000000000000000000000000000000000", 
    23 => "1010101100011010111100110001010000000000000000000000000000000000", 
    24 => "1110111010000110111110010101100100000000000000000000000000000000", 
    25 => "0110001100001011011000110100001000000000000000000000000000000000", 
    26 => "0001100110011001101100100011100000000000000000000000000000000000", 
    27 => "1101010101100000100011111010110000000000000000000000000000000000", 
    28 => "1101000100100110110110110011011000000000000000000000000000000000", 
    29 => "0011000101010001001000110010100100000000000000000000000000000000", 
    30 => "0011101001011111100000000100000100000000000000000000000000000000", 
    31 => "0010101000000000111011100001100100000000000000000000000000000000", 
    32 => "1100000001010111010100010101001000000000000000000000000000000000", 
    33 => "0000010101000010011001110100101000000000000000000000000000000000", 
    34 => "1001001111010001101100010010011100000000000000000000000000000000", 
    35 => "0001101000100000001100100001001000000000000000000000000000000000", 
    36 => "1101010100010110110111110100011000000000000000000000000000000000", 
    37 => "0110011111111110110110110100001000000000000000000000000000000000", 
    38 => "0000001000010101010100000001001000000000000000000000000000000000", 
    39 => "0000001010100101010110110001000100000000000000000000000000000000", 
    40 => "1111100011010001111010101011100100000000000000000000000000000000", 
    41 => "1101101011110010110011110010000000000000000000000000000000000000", 
    42 => "1001000000100100011001001111011100000000000000000000000000000000", 
    43 => "0100010100011100011000011000001100000000000000000000000000000000", 
    44 => "1101000100100110010100011010111100000000000000000000000000000000", 
    45 => "0110000110001001000100010100100100000000000000000000000000000000", 
    46 => "1011011110000010110000100100101000000000000000000000000000000000", 
    47 => "1000010111010001110111110100000000000000000000000000000000000000", 
    48 => "0000010100010001010000001001001000000000000000000000000000000000", 
    49 => "0010101000101111000111110011100000000000000000000000000000000000", 
    50 => "0000001001100000111001000111011011001000111111001110111000101100", 
    51 => "0110111010111011000101100000001001001001101110100000111101001110", 
    52 => "0111100011010111010000111010100011110000100101011101111000111111", 
    53 => "0101010001001001010001100011000001111000010001000010011010000001", 
    54 => "1100000000011100011000000010011011111010111101000110001010101011", 
    55 => "0011110111001010000000111100011001100100110000100110111111000010", 
    56 => "0101110001010001010010111000101111001100110100000000001010010001", 
    57 => "0000101111010001100110001101101110000011110010111001100011010001", 
    58 => "0010000111001010101000111110011000000000000011101011001001100110", 
    59 => "1110110111110011101000100011011010101111100010010100001101010011", 
    60 => "1100001111001100000011110101100001010111100010110010000101001001", 
    61 => "0000010011001011001111001101000101111110000010110001101101110101", 
    62 => "1000001000110101110000000110110100001010000101001100000000101101", 
    63 => "0111000001101101001110100100100100110101011110000010010001101001", 
    64 => "1010101000001111100000111010011001100010111111111010100100111111", 
    65 => "1011100001001100010101101001100101010010000001111010101100101111", 
    66 => "0111100111000111000110100101011001001000110001100100000110001001", 
    67 => "1000111011001010011100111010100100010001001110110101010100001000", 
    68 => "1110100001110110100110000000101110111100110101111111000000001011", 
    69 => "0100000011110001111101011110101101100001101000001011010110111000", 
    70 => "1110101011000100110010011000011010111010001101111110101100101101", 
    71 => "0111100110011100100010100000001011001000000100101001010100000100", 
    72 => "0001011101001001110100000010011101001110010001110001101010010010", 
    73 => "0000100010001110000010000110110010010111110100000101011101101000", 
    74 => "0010001000010110001011110010100011111111110101101011001000010001", 
    75 => "1111010010111101111011001101011101010100111001010111000011111011", 
    76 => "1000011110010011001101000001100010001110001001111110000011001100", 
    77 => "1001101100000110001111110000000000111010011101110001111110001011", 
    78 => "1100111101110000111101010011001000011010010000100001110101001000", 
    79 => "1111001001110001011111001101111010101110111100000111001001101010", 
    80 => "1001100010011110001110111000010010110010100011100000001100111100", 
    81 => "0000010010010100010000100110001001001101001101001111100001000000", 
    82 => "0011001010111110000011010010101111011010111011111000101010111111", 
    83 => "1001100001010001001011011010001010100110101001001111100101011110", 
    84 => "1001110101000010001011010001010010110110001000111010100101101000", 
    85 => "1010101000001001010011110110011010010100000100010011111100111011", 
    86 => "0011101001101000010001111111111100011110010110011011110110100100", 
    87 => "1000011101000110101111110010111011001111011010000011110101110101", 
    88 => "1000111001010010101010011110011111101010100101101101111001001111", 
    89 => "1111011111100000010111000101111010110111111000100101000011011010" );


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

entity pg_conv3x3_tile_cYie is
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

architecture arch of pg_conv3x3_tile_cYie is
    component pg_conv3x3_tile_cYie_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cYie_rom_U :  component pg_conv3x3_tile_cYie_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

