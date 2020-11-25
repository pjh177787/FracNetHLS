-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibRq_rom is 
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


architecture rtl of matmul_linear_weibRq_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110001010111000110100", 1 => "1100101000011100001001", 
    2 => "0001010100011101111001", 3 => "1100001111111100111101", 
    4 => "0000001110010101001111", 5 => "1110001001011101011111", 
    6 => "1110010010011011101001", 7 => "0011011000000010010101", 
    8 => "1111110100011000001011", 9 => "1110111110001110101101", 
    10 => "0000111110110010101000", 11 => "1111101010000111011101", 
    12 => "1110001100100110100000", 13 => "1010001101001101001000", 
    14 => "0100100000001010000110", 15 => "1101010111000010010111", 
    16 => "0000011011010101000110", 17 => "0001000100110111010000", 
    18 => "1100111101000011011100", 19 => "1111011000101100110111", 
    20 => "0011000010011111110010", 21 => "1111111110111000001001", 
    22 => "1110111001010100110010", 23 => "1011110100110101011110", 
    24 => "1111001111011001000010", 25 => "1101011010001011010010", 
    26 => "0010011100000101010001", 27 => "1100110011100101100011", 
    28 => "0010011011001111101001", 29 => "0100011110011111110001", 
    30 => "0000011011000000100001", 31 => "1010001001011010101011", 
    32 => "1110111011001110001100", 33 => "0010101011101111010101", 
    34 => "1110011010100101001011", 35 => "0000000100110110010000", 
    36 => "0011100011111000111110", 37 => "0001011101001110111010", 
    38 => "1100010101100011011000", 39 => "1111010011101001101111", 
    40 => "0000111101101110100101", 41 => "0011100100001011100000", 
    42 => "0000010111111100110110", 43 => "0010110100101111110011", 
    44 => "1111000000010000000000", 45 => "0001101111010110101111", 
    46 => "0000111100110011010111", 47 => "0001100000111101100101", 
    48 => "1111000001000110101110", 49 => "0000110000001001100110", 
    50 => "0010100001100000000010", 51 => "0100110001111000110101", 
    52 => "0010111100111110101100", 53 => "1110111110110000011001", 
    54 => "1101111111001110110100", 55 => "0000101001110010011000", 
    56 => "1100100000110011010101", 57 => "1100101111000111001001", 
    58 => "1111110011011010001001", 59 => "1101001011001111101001", 
    60 => "0000101100110010100001", 61 => "1100111111001011000101", 
    62 => "1111100011101110001011", 63 => "0011000001000100110110" );


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

entity matmul_linear_weibRq is
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

architecture arch of matmul_linear_weibRq is
    component matmul_linear_weibRq_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibRq_rom_U :  component matmul_linear_weibRq_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


