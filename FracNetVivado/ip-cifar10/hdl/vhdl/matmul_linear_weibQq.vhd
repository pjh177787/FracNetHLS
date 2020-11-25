-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibQq_rom is 
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


architecture rtl of matmul_linear_weibQq_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101111011011000111111", 1 => "0001011010110000110100", 
    2 => "0100001101001100001011", 3 => "1111101101011100111101", 
    4 => "0000000110001010110010", 5 => "1101100001101100110111", 
    6 => "0011001110000100000100", 7 => "1110110100010100010110", 
    8 => "1101101110101011110011", 9 => "0010010010110010100101", 
    10 => "1111011100101110010011", 11 => "0100001111010001111101", 
    12 => "1111111101110001111101", 13 => "0001101010010010010110", 
    14 => "1101011100010111111000", 15 => "1101000000011100110011", 
    16 => "1011101001111000000000", 17 => "0001101001001001011100", 
    18 => "1100111110111110000001", 19 => "1101110110111101110110", 
    20 => "1100100010010110011000", 21 => "1110101110011111100111", 
    22 => "0000110110101110110000", 23 => "1111100010000010001111", 
    24 => "1111011001100111001100", 25 => "0010111000011000111100", 
    26 => "0000110111001101001111", 27 => "0001001111110111101101", 
    28 => "0000101110001111100111", 29 => "0001101100010101110101", 
    30 => "0001110101010110010000", 31 => "0011001000111010000110", 
    32 => "1010101111011001100000", 33 => "1100110011001100000100", 
    34 => "1101100001010100111100", 35 => "1110010010011101001000", 
    36 => "1111000011101001110100", 37 => "0101001110111111110001", 
    38 => "0001011110000010000000", 39 => "1110010101111011101101", 
    40 => "0010000010101001011101", 41 => "1101101010010011110000", 
    42 => "1011111101100100011011", 43 => "1110001011111111111010", 
    44 => "1110000110110111101100", 45 => "0000011100101011011001", 
    46 => "1101000111001110011101", 47 => "1111001101011010000000", 
    48 => "0000010100100010000110", 49 => "1011011011000101011100", 
    50 => "0011011110111100100101", 51 => "0001110110010110100111", 
    52 => "1110111000010001110101", 53 => "1101100000101101001111", 
    54 => "1101010100110000001110", 55 => "0010111011000010001111", 
    56 => "0001001100110100101010", 57 => "1101001011000010011110", 
    58 => "0001100100110101000011", 59 => "0100100010001011110111", 
    60 => "0000000001010011101101", 61 => "1110110110100110000110", 
    62 => "0010001011011010100000", 63 => "0000100010110001011000" );


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

entity matmul_linear_weibQq is
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

architecture arch of matmul_linear_weibQq is
    component matmul_linear_weibQq_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibQq_rom_U :  component matmul_linear_weibQq_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


