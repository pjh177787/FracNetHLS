-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity pg_conv3x3_tile_cocq_rom is 
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


architecture rtl of pg_conv3x3_tile_cocq_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "0000000000000000000000000000000000000000000000000000000000000000", 
    2 => "0000000000000000000000000000000100000000000000000000000000000000", 
    3 to 5=> "0000000000000000000000000000000000000000000000000000000000000000", 
    6 => "0011010011110011000000000000000000000000000000000000000000000000", 
    7 => "0001100000010001000000000000000000000000000000000000000000000000", 
    8 => "0011001001110001000000000000000000000000000000000000000000000000", 
    9 => "1101011100110011000000000000000000000000000000000000000000000000", 
    10 => "1011010010110001000000000000000000000000000000000000000000000000", 
    11 => "1100010100010001000000000000000000000000000000000000000000000000", 
    12 => "0111000001110011000000000000000000000000000000000000000000000000", 
    13 => "1101010110010001000000000000000000000000000000000000000000000000", 
    14 => "1101010001011011000000000000000000000000000000000000000000000000", 
    15 => "1011100010001000000000000000000000000000000000000000000000000000", 
    16 => "1000101010101110000000000000000000000000000000000000000000000000", 
    17 => "1011100110001110000000000000000000000000000000000000000000000000", 
    18 => "0010101100010101000000000000000000000000000000000000000000000000", 
    19 => "1111101011000101000000000000000000000000000000000000000000000000", 
    20 => "1110101110011011000000000000000000000000000000000000000000000000", 
    21 => "0010000001000101000000000000000000000000000000000000000000000000", 
    22 => "1000110111100011100011011110011000000000000000000000000000000000", 
    23 => "0010010000100010110011000010111000000000000000000000000000000000", 
    24 => "1010101110100110101010010011010000000000000000000000000000000000", 
    25 => "1001001111111001000100111000100100000000000000000000000000000000", 
    26 => "0011001000000001000000101110001100000000000000000000000000000000", 
    27 => "0000110010000001000111001000000000000000000000000000000000000000", 
    28 => "0010110100011001001100111001001100000000000000000000000000000000", 
    29 => "1100011000100110111001111110011100000000000000000000000000000000", 
    30 => "0110010101011000011001001101110100000000000000000000000000000000", 
    31 => "0001010110010101000000000001110000000000000000000000000000000000", 
    32 => "1110001010001110110000111100010000000000000000000000000000000000", 
    33 => "0010110101100101101001010010111100000000000000000000000000000000", 
    34 => "0000010000000000010101000011001100000000000000000000000000000000", 
    35 => "0100000000000111010101010000110100000000000000000000000000000000", 
    36 => "1010101000100101111011010010110000000000000000000000000000000000", 
    37 => "1101001011100110011010000010001000000000000000000000000000000000", 
    38 => "1011000111101110001000000110001000000000000000000000000000000000", 
    39 => "0011000000000100101010000000010100000000000000000000000000000000", 
    40 => "1010000000110100101011101110010000000000000000000000000000000000", 
    41 => "0011010010011100100001110000110000000000000000000000000000000000", 
    42 => "1100001001000000000111010011001000000000000000000000000000000000", 
    43 => "0001010111100011110101110000111000000000000000000000000000000000", 
    44 => "1000011011100100110101010100111000000000000000000000000000000000", 
    45 => "0100110011001000000000001010010100000000000000000000000000000000", 
    46 => "0001100000110100000101000011100100000000000000000000000000000000", 
    47 => "1110100000011100011010111000001100000000000000000000000000000000", 
    48 => "0100000100011001111100100111011100000000000000000000000000000000", 
    49 => "0000011111000011110110110110110100000000000000000000000000000000", 
    50 => "1011010001010001001010101101001110101000110110010100001010111010", 
    51 => "1100010000000100011111100010101101000000001011000110011000011111", 
    52 => "1100000011000000010101010100101011001100100010000000010101000000", 
    53 => "1101100110011001100000000000111100100101100011010000100001000011", 
    54 => "0001000100101111000101000011001110000001001010110001111101110000", 
    55 => "0001001001100100110001000011001000011010001001001011010001101010", 
    56 => "0001100110011001010110011100101001001001100110011000101111000110", 
    57 => "0111110001011111001011010110110111001000010111111011011001000010", 
    58 => "0100010100100110011010101000100110001001011110100010000000011001", 
    59 => "0000011000110100010110011011101101111010101011011101011100001010", 
    60 => "0001001010001111000000100000101100011011100011001110000000010101", 
    61 => "1000101100100100011001000011101001010110011101101110000100001111", 
    62 => "0000001101110000001100100111001110010101001111100111001001100001", 
    63 => "1001100111110011011000110000110010011100011011100111100110011100", 
    64 => "0010101000000011000000000101010000011000100110000000010001011001", 
    65 => "1011100010000110000000000000010110101000011101011000000110000101", 
    66 => "1010101101001010010101110011100001001011000001000001100110101000", 
    67 => "1001110010001000110111011110011000011010001010110010110010010010", 
    68 => "0100010000101110101111010010001001100011100110100110101001011110", 
    69 => "0111000000100000000000001000000110001000000000010100011111100001", 
    70 => "0111010110011101100000000101010000000011100111111010100001110001", 
    71 => "1010001010011100100110010001111010010101100100010001100101011010", 
    72 => "0010111111110100001110000101101011011101110000100011101101110010", 
    73 => "1010000111100001010001010001101000000001101000000111000111101000", 
    74 => "0111010011000001000100010001010111000101000010010010011101111010", 
    75 => "0101101100011111010110010011101000011101011000001111111000001110", 
    76 => "0100101101000111100111001000111010111111101100010111111110101111", 
    77 => "1001110011000111110111011010011100101001100100110111010100111010", 
    78 => "1101010111011011101110100000010010001000111101001011100000100110", 
    79 => "0000011100110100001011101011110010010111101110111111110101011000", 
    80 => "1000001110011111101111100000111011101001111111001010100100000010", 
    81 => "1010101100110001000110111000110100010111001100000100101001001000", 
    82 => "1001001111010101111011011111010111110011000001111101100001001101", 
    83 => "0101111111101111010010111111010101110101111010101011101111000101", 
    84 => "0001011110111100011101001100101111000110110001100111110010111101", 
    85 => "1010010010111110110101001011111100110010101000100111101001001001", 
    86 => "0010010100111110001100000110111111110100111101001111101011101011", 
    87 => "0001100101010011110110000000101011011101011101110001100011001000", 
    88 => "0011111000000111101011110010111010110111111010100111101100101001", 
    89 => "0000010111111110001100011111000110110010001000011100101111001100" );


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

entity pg_conv3x3_tile_cocq is
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

architecture arch of pg_conv3x3_tile_cocq is
    component pg_conv3x3_tile_cocq_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    pg_conv3x3_tile_cocq_rom_U :  component pg_conv3x3_tile_cocq_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


