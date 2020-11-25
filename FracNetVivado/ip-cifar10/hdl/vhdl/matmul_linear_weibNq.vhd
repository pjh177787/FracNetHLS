-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibNq_rom is 
    generic(
             DWIDTH     : integer := 21; 
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


architecture rtl of matmul_linear_weibNq_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000011111010111111100", 1 => "001101001001010000111", 
    2 => "111001011111101000011", 3 => "010001011000000001111", 
    4 => "110010111110101111010", 5 => "101111101101001000101", 
    6 => "000010001001111110010", 7 => "010111110101111011111", 
    8 => "010011100110011111100", 9 => "101111010010010011001", 
    10 => "110011010100010111101", 11 => "000010111101100100010", 
    12 => "001011101000101101111", 13 => "000110110111101000110", 
    14 => "101000101100111011010", 15 => "110110110000000001101", 
    16 => "010010101000010000010", 17 => "011101111010001001100", 
    18 => "001001000000001010001", 19 => "010010111110101111101", 
    20 => "001001110111111111110", 21 => "001111100001000111000", 
    22 => "001101100111101110000", 23 => "101010011011111001100", 
    24 => "010100010001000011001", 25 => "001101001000001101011", 
    26 => "111100001011010110001", 27 => "101100001100101011111", 
    28 => "110011000001100010110", 29 => "111001100101001001101", 
    30 => "000100111000000111101", 31 => "001011100101110001100", 
    32 => "010011010100011010011", 33 => "110101010100011010100", 
    34 => "001101001100000100101", 35 => "110111100101001001111", 
    36 => "100011111110101011011", 37 => "110010000011110001001", 
    38 => "000011011011000110101", 39 => "110000001101011001010", 
    40 => "111011001101110010011", 41 => "101100100100011000010", 
    42 => "110111101001110001010", 43 => "101111100100000011111", 
    44 => "110000111011100101011", 45 => "111000100000011111011", 
    46 => "011010101011101010010", 47 => "001010101011011111111", 
    48 => "000000101001110101011", 49 => "111001010001010001111", 
    50 => "111110101111001000100", 51 => "111110101110010110000", 
    52 => "000101010110000101110", 53 => "000110111100000101101", 
    54 => "110111111000110001100", 55 => "001100101011101010010", 
    56 => "101110111010000100011", 57 => "111110110101011111101", 
    58 => "110010110100001010111", 59 => "110010110011110111011", 
    60 => "010000101111000111111", 61 => "111001110000100110000", 
    62 => "100101000010100111000", 63 => "110000111101001100101" );


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

entity matmul_linear_weibNq is
    generic (
        DataWidth : INTEGER := 21;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of matmul_linear_weibNq is
    component matmul_linear_weibNq_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibNq_rom_U :  component matmul_linear_weibNq_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


