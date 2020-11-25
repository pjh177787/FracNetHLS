-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibLp_rom is 
    generic(
             DWIDTH     : integer := 22; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of matmul_linear_weibLp_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0101101111011011011010", 1 => "1101000011011101011010", 
    2 => "0000000100111110001000", 3 => "1011001101010111111000", 
    4 => "0000001010100010111100", 5 => "1101100000001011101111", 
    6 => "1111100001100110101111", 7 => "1101100000101101100010", 
    8 => "0010010100101101011111", 9 => "0011010000000011010110", 
    10 => "1111001001110110101000", 11 => "0001100111000100110001", 
    12 => "1100001010111000010000", 13 => "0001000010010111110010", 
    14 => "0001110110111100111111", 15 => "0010000100111001000101", 
    16 => "1110000011101001111010", 17 => "1110100100010000110101", 
    18 => "0000111001110110011001", 19 => "0001101100111100010001", 
    20 => "1110000001100100001001", 21 => "0001111110000001010110", 
    22 => "1101100000101011011011", 23 => "0010000001010001110011", 
    24 => "0001001011000010000010", 25 => "0000001001110000101011", 
    26 => "1100110001111101111010", 27 => "0011001011100000001011", 
    28 => "1101011110010110000110", 29 => "1111011110010011001001", 
    30 => "1110111111111001000101", 31 => "1011110001101000110110", 
    32 => "1111010100111101001100", 33 => "1111010001100001011010", 
    34 => "1111010000101000111111", 35 => "0001100100001100001111", 
    36 => "1110110111011100110011", 37 => "1101011100110001101000", 
    38 => "0001100000011101101010", 39 => "0011010101000101100110", 
    40 => "1101010111011110010101", 41 => "0010111010001111001111", 
    42 => "0000011001000011010000", 43 => "1110101100000111110100", 
    44 => "1101000110010001011010", 45 => "0101001110111011101001", 
    46 => "0100111111001011111000", 47 => "1011011111000101011101", 
    48 => "1100010000110011010011", 49 => "1101000111000101010101", 
    50 => "1011111100011011001000", 51 => "1111101111101000101010", 
    52 => "1010011010011000100000", 53 => "0100001001010000000101", 
    54 => "1101010111111111100110", 55 => "1101110111010110100110", 
    56 => "0001000001010100000101", 57 => "0011000010101111110000", 
    58 => "0100000100011010000011", 59 => "0001010110000111111001", 
    60 => "1101110101010111101010", 61 => "0100010000011110000001", 
    62 => "1101010011101100001010", 63 => "0010010101000111011000" );


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

entity matmul_linear_weibLp is
    generic (
        DataWidth : INTEGER := 22;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of matmul_linear_weibLp is
    component matmul_linear_weibLp_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibLp_rom_U :  component matmul_linear_weibLp_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


