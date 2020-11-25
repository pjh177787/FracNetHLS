-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibSr_rom is 
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


architecture rtl of matmul_linear_weibSr_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011001101110101011101", 1 => "0100001110011010100110", 
    2 => "1101010001110110000001", 3 => "1110010100101100110000", 
    4 => "0000101101100011110011", 5 => "0000101111000100110110", 
    6 => "0011000001101101011010", 7 => "1110101111000100011000", 
    8 => "1111100000101111110111", 9 => "0001111101001100011101", 
    10 => "1101000111001100110000", 11 => "0100100011010011001010", 
    12 => "0000001101110111000001", 13 => "1110001100001001111010", 
    14 => "0001001111101110111111", 15 => "0000001111001000100100", 
    16 => "1100111110010011011111", 17 => "1110110110010001011010", 
    18 => "1111000100000001100101", 19 => "1100011110001010111110", 
    20 => "0001100111110011100111", 21 => "1101001011011011010111", 
    22 => "1010111001110100010000", 23 => "0001011000110000101000", 
    24 => "0100010010001111011111", 25 => "1110011011100101010010", 
    26 => "0000101010010111011011", 27 => "0010001100110111100010", 
    28 => "1110110101110111110000", 29 => "1101100000111000101000", 
    30 => "1011011010101010000111", 31 => "1110111100100110000000", 
    32 => "0010100011110011011010", 33 => "1111101101010101101110", 
    34 => "0000000101010010110011", 35 => "0011000110010111011010", 
    36 => "0000001010001100101001", 37 => "1100001001111111111001", 
    38 => "0100100011100011111010", 39 => "0101111010000111101101", 
    40 => "0000100111110000100101", 41 => "1100011001100001000110", 
    42 => "1101111011000101011011", 43 => "0011010000000101110110", 
    44 => "0100011111110010000001", 45 => "1110011101000001011111", 
    46 => "1110011010100100000010", 47 => "0010110110000111111010", 
    48 => "1101010110111000011011", 49 => "1100010111110110000111", 
    50 => "1110100011101101110111", 51 => "0001101111001111010111", 
    52 => "1111100100000111111101", 53 => "1110111100010101011001", 
    54 => "0100111001001011101000", 55 => "1011110000000001001000", 
    56 => "0001010001111110100011", 57 => "0000101010010000001000", 
    58 => "1101101111110011111001", 59 => "1111111011111100100000", 
    60 => "1001101101111101101001", 61 => "1110100110000011110100", 
    62 => "0001101100000100001100", 63 => "0010010111001111100000" );


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

entity matmul_linear_weibSr is
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

architecture arch of matmul_linear_weibSr is
    component matmul_linear_weibSr_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibSr_rom_U :  component matmul_linear_weibSr_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


