-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cZio_rom is 
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


architecture rtl of pg_conv3x3_tile_cZio_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 2=> "1111111111111111111111111111111100000000000000000000000000000000", 
    3 => "1011111111010110111110011101011000000000000000000000000000000000", 
    4 => "1111101111111110110111111110010000000000000000000000000000000000", 
    5 => "0000010100000000000000000001000000000000000000000000000000000000", 
    6 => "0000101110001110000000000000000000000000000000000000000000000000", 
    7 => "0011110001000101000000000000000000000000000000000000000000000000", 
    8 => "0000101110001110000000000000000000000000000000000000000000000000", 
    9 => "0011101000000111000000000000000000000000000000000000000000000000", 
    10 => "0010000110001110000000000000000000000000000000000000000000000000", 
    11 => "0011101000100100000000000000000000000000000000000000000000000000", 
    12 => "0010000101111110000000000000000000000000000000000000000000000000", 
    13 => "1000011101111001000000000000000000000000000000000000000000000000", 
    14 => "0100000111100101000000000000000000000000000000000000000000000000", 
    15 => "1001100000100000000000000000000000000000000000000000000000000000", 
    16 => "0001010101110101000000000000000000000000000000000000000000000000", 
    17 => "1111000001110010000000000000000000000000000000000000000000000000", 
    18 => "0001010101110001000000000000000000000000000000000000000000000000", 
    19 => "0010001000000000000000000000000000000000000000000000000000000000", 
    20 => "1111101011001101000000000000000000000000000000000000000000000000", 
    21 => "1100011111101111000000000000000000000000000000000000000000000000", 
    22 => "0011110110111011000011100101101000000000000000000000000000000000", 
    23 => "0011101100010111001100011001001000000000000000000000000000000000", 
    24 => "1110011100001010110001110001101000000000000000000000000000000000", 
    25 => "1110111111111110110011011100010000000000000000000000000000000000", 
    26 => "0101111111011010110001110111101000000000000000000000000000000000", 
    27 => "1100011110100110110111100011100000000000000000000000000000000000", 
    28 => "1000111101111110000001110110001000000000000000000000000000000000", 
    29 => "1010010101000000111001100111110000000000000000000000000000000000", 
    30 => "0001000110011001000100100111000100000000000000000000000000000000", 
    31 => "0000111110001101111110000001100100000000000000000000000000000000", 
    32 => "1000110001110111000100010100011000000000000000000000000000000000", 
    33 => "0010110110100011110001110110111000000000000000000000000000000000", 
    34 => "1111111110111110111011011111011000000000000000000000000000000000", 
    35 => "0001101000000001001100000001011100000000000000000000000000000000", 
    36 => "1101010100011110100101010110011000000000000000000000000000000000", 
    37 => "0010100001011001000010101110110000000000000000000000000000000000", 
    38 => "0010011110010101000101110100011100000000000000000000000000000000", 
    39 => "0101101011100100110010000000000000000000000000000000000000000000", 
    40 => "0001110101101000110011010001110100000000000000000000000000000000", 
    41 => "1111001001011010010011101010010000000000000000000000000000000000", 
    42 => "1000000000000010010000100001011100000000000000000000000000000000", 
    43 => "1110011100011011001100010000010100000000000000000000000000000000", 
    44 => "1001010101000110010101010010111100000000000000000000000000000000", 
    45 => "0010000111101001100100010100001100000000000000000000000000000000", 
    46 => "1000010110000000110000010100101000000000000000000000000000000000", 
    47 => "0000110110010100110111010101000000000000000000000000000000000000", 
    48 => "1000010101010101000000111000011000000000000000000000000000000000", 
    49 => "1000100000101001001010101011100000000000000000000000000000000000", 
    50 => "1100110101101111111001010000010011000101001111100111010101100100", 
    51 => "1010001011110011101111100101101010100000111101101010111101111000", 
    52 => "1111000011000101010111011101100101110111110001001101111101001100", 
    53 => "1000100011001001100011010011011000111000100010001000010111000101", 
    54 => "1000010000110100110101000000010010110110001000000101011010101101", 
    55 => "0111110001101111011010101101000110101010110111000001101011011001", 
    56 => "1101011101011100000001110000011010000111000000000000101111010010", 
    57 => "0111101011100000110000101110100111101000111010001110100011001001", 
    58 => "0001111111010100100110000001010010010101111100011011001111110000", 
    59 => "0111000100110000101000001110011100101001010010010001011101100011", 
    60 => "0111101111000000100111001010001000010110110010010001111101001010", 
    61 => "0011010111001011000110000001001011100111010010100001101111111001", 
    62 => "0001110110011011101001000001110000001011111100101010110001010001", 
    63 => "0011100001101000010011100101100110100111011100000010100011101101", 
    64 => "1011101000001011110100111011111100000110101010011010100001011001", 
    65 => "1011100011001000010001101001000101110101110011001111100000100001", 
    66 => "1110111111011111100111110000001001000101100101110000000100010000", 
    67 => "1100111011110000010110111110110000010111101110011011000100000000", 
    68 => "0111000011000011101111010000010101101101010100101011100110101001", 
    69 => "0011101011110101110011111010010101001010001100011010010110110100", 
    70 => "1101101111011000011010101000011010110101001001111000101100100010", 
    71 => "0001100010010101100010000010101011001000110101101111000000000100", 
    72 => "0001011001001101100100100100000100000101000001110001101110000110", 
    73 => "0111001010111110100010011111110001001001100100000101011001101010", 
    74 => "0011100011000011010111000010011010001010101011001111011000110100", 
    75 => "1111011010100011110100010011011001011110111001010010011011011010", 
    76 => "1001010011010111001101000100100010000110010111111111110010100001", 
    77 => "0000011111000100011111111010000010001011011010001000110000001111", 
    78 => "1100110001111010110101000010101010111111011000000001010101011001", 
    79 => "1010001001010111110011011111011000001000011000010111010001101010", 
    80 => "1001100011001110000110111010110011110010100011000100011110011111", 
    81 => "0000110100010011011000000110100001000001001001010101010001000001", 
    82 => "0001100010111011100111010011001101101000001011011100101010010110", 
    83 => "1101110011110100000011011010011101110110101001100111101111111010", 
    84 => "0011110001100011110011111010011000000100001000110010011100000001", 
    85 => "1011001100001000010000101111101011110111010101110011100101101111", 
    86 => "0011101010011000111000101010011110110110001110011011010001100011", 
    87 => "0010111101001111011110011010110111001011111010000111011101110100", 
    88 => "1000110011010110011010011001011111101010100111101101011011011111", 
    89 => "1111010111100001000110010001101010000101101101110001010111011000" );


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

entity pg_conv3x3_tile_cZio is
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

architecture arch of pg_conv3x3_tile_cZio is
    component pg_conv3x3_tile_cZio_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cZio_rom_U :  component pg_conv3x3_tile_cZio_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

