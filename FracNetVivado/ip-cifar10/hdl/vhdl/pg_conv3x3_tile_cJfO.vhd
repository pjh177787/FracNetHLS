-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cJfO_rom is 
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


architecture rtl of pg_conv3x3_tile_cJfO_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1000000000010001000000010000000000000000000000000000000000000000", 
    1 => "1000000101100101001011010010000000000000000000000000000000000000", 
    2 => "1110111011110101110110001100010000000000000000000000000000000000", 
    3 => "0000001110010110111011011010000000000000000000000000000000000000", 
    4 => "0000000000000000001001000100000000000000000000000000000000000000", 
    5 => "0000000100001000000100000000000000000000000000000000000000000000", 
    6 => "1000101011011110000000000000000000000000000000000000000000000000", 
    7 => "1000101011101101000000000000000000000000000000000000000000000000", 
    8 => "0000010011011100000000000000000000000000000000000000000000000000", 
    9 => "0010010010101000000000000000000000000000000000000000000000000000", 
    10 => "0010011010101110000000000000000000000000000000000000000000000000", 
    11 => "1001000011000101000000000000000000000000000000000000000000000000", 
    12 => "0010001010101100000000000000000000000000000000000000000000000000", 
    13 => "1011000001010011000000000000000000000000000000000000000000000000", 
    14 => "0101100001110001000000000000000000000000000000000000000000000000", 
    15 => "1010100101100001000000000000000000000000000000000000000000000000", 
    16 => "1101110101110011000000000000000000000000000000000000000000000000", 
    17 => "0100001110001100000000000000000000000000000000000000000000000000", 
    18 => "0000110001110000000000000000000000000000000000000000000000000000", 
    19 => "0010010111110011000000000000000000000000000000000000000000000000", 
    20 => "0100011110111011000000000000000000000000000000000000000000000000", 
    21 => "1010111111000100000000000000000000000000000000000000000000000000", 
    22 => "1010111101110000001010110101010100000000000000000000000000000000", 
    23 => "0110010100110011010000010110001100000000000000000000000000000000", 
    24 => "1111011101111011010111111011001100000000000000000000000000000000", 
    25 => "0110010111001000000000101101000100000000000000000000000000000000", 
    26 => "1100011000100100111111101111010000000000000000000000000000000000", 
    27 => "1010110110010100111011100010010000000000000000000000000000000000", 
    28 => "1001001100101011110110101010100000000000000000000000000000000000", 
    29 => "0010000010100101000000100011001000000000000000000000000000000000", 
    30 => "1100101110111110110000010000011100000000000000000000000000000000", 
    31 => "0111000000100101010000010100001000000000000000000000000000000000", 
    32 => "0110111000101011100101100010101000000000000000000000000000000000", 
    33 => "1001011001100010100000100110001000000000000000000000000000000000", 
    34 => "1111101011110100111011011110110000000000000000000000000000000000", 
    35 => "0001000011101011000110100010011000000000000000000000000000000000", 
    36 => "1110110111100011010000100110110000000000000000000000000000000000", 
    37 => "0111110111110010100101110111101000000000000000000000000000000000", 
    38 => "0101110011110110110001100110111100000000000000000000000000000000", 
    39 => "1000111101011110001011101001110100000000000000000000000000000000", 
    40 => "1110100111110011011110000111101000000000000000000000000000000000", 
    41 => "0001111101000100100101011011000000000000000000000000000000000000", 
    42 => "0000010111000011100001111000011000000000000000000000000000000000", 
    43 => "0101110001110100100010000100001100000000000000000000000000000000", 
    44 => "1001010000011110000100100000110100000000000000000000000000000000", 
    45 => "0001001100001000000110100101111100000000000000000000000000000000", 
    46 => "1010010100000100011000010011010100000000000000000000000000000000", 
    47 => "0001000011001010011000000000011000000000000000000000000000000000", 
    48 => "1101110110111000110001001010011100000000000000000000000000000000", 
    49 => "0000001001001000000000111011101000000000000000000000000000000000", 
    50 => "1111100011110000100001000011001111111011101110000011110000110110", 
    51 => "0111100101110001100101000100001101101000100101001001110101000101", 
    52 => "0110000101110001111100100111011101111001011100111111010011001011", 
    53 => "1110010010111100100010000010011111100010001111010110001110101111", 
    54 => "1001001001111010011010101101000110110100011111100110100010100011", 
    55 => "1010110001000011100011100101110110101000000001001010101001101101", 
    56 => "0110010010011110001000101111000111101110010011011110101010111011", 
    57 => "1101001111011110100101010100011101010101010100101001000100000011", 
    58 => "0100001001000100010111000001010010101000101111010111001010000101", 
    59 => "0001000010001001110100000000000010100100100001001001110001000001", 
    60 => "0001011001000001100000000101111011001001000010011000000101010011", 
    61 => "1101011011101000111011010001010011110110011011001110110100100100", 
    62 => "1100001000010111101111101011111001001000111000111110111000010111", 
    63 => "1100000000110110011011000011100111011100001010101100000000110101", 
    64 => "0111110110100010010111111110110111111000100110100100101001001010", 
    65 => "0000101000110101111110000000100111101100001000100011100101000101", 
    66 => "0111110100101100101000010101100001000101110011110001001001011111", 
    67 => "1111101101101111011010011011111111111010110101110100100000101111", 
    68 => "1001110111001011001110110011001111010010001011110100111101100001", 
    69 => "1000010110010011010101000110110010001111011000110111001101001010", 
    70 => "0101111000001110111010100100110011011010010100000000100001001011", 
    71 => "1000011111100110010101000000101000111100010000100110000010000000", 
    72 => "0010000100110101111001000010101101100101101001011011110100000011", 
    73 => "0000110010000001000110001010010000101001011100011111111010001010", 
    74 => "1101001101010001101010000000000110100100010010001110100010011111", 
    75 => "0000001110110010111101000010011000000100001001100101101001010000", 
    76 => "1101001101110001101000011000011111110000111010011000111100011001", 
    77 => "1011100111110011010101111101111110100010011000101001010101110001", 
    78 => "1110101110100111000101111000111111010000101000010110000011011110", 
    79 => "0110111100110010100110111100101000001101010000000011110011110010", 
    80 => "0011010101011010101101011111110101101111101100000011100101111011", 
    81 => "0101001110010111110101010110010100011110011001100011100101011111", 
    82 => "1011110110001010001111010101101111110111000000110010100110101000", 
    83 => "1010101100100011110101111011100110111110000000101010001111100100", 
    84 => "1001010010000101111100001110011011100111101011000111100001001110", 
    85 => "1111101001111101101001011111011010111111000000001100100011100101", 
    86 => "0001010010010100110101000110000011110001110000001000110110001100", 
    87 => "1101100011101000101011100001011101111111001100101000101010101100", 
    88 => "1001011000101011001110011000011000101000000000011010001101110000", 
    89 => "1100111001001010001011010011011011000010101000000110100000101111" );


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

entity pg_conv3x3_tile_cJfO is
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

architecture arch of pg_conv3x3_tile_cJfO is
    component pg_conv3x3_tile_cJfO_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cJfO_rom_U :  component pg_conv3x3_tile_cJfO_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


