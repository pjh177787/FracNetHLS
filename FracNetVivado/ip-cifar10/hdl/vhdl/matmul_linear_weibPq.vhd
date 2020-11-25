-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibPq_rom is 
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


architecture rtl of matmul_linear_weibPq_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110001110000111011000", 1 => "1110110111101000011000", 
    2 => "1110100011011111010010", 3 => "1111001100111100010111", 
    4 => "1101101010110000110000", 5 => "1110110000011100110110", 
    6 => "0001101000001001010101", 7 => "0001011110001100101110", 
    8 => "1111111010010100011000", 9 => "0011110001100011111011", 
    10 => "0010000100111010111011", 11 => "1011110110010001110001", 
    12 => "1110100110110011101011", 13 => "0001101110111000001111", 
    14 => "0000110000101011110101", 15 => "1111010110011010000000", 
    16 => "0010111001111101111100", 17 => "1110110110110101100101", 
    18 => "1101011011111010100001", 19 => "0000111110000100011110", 
    20 => "1101011111011111110110", 21 => "1110000011100001110011", 
    22 => "0010010110011101100110", 23 => "1111001101011010110101", 
    24 => "1111100000101110010111", 25 => "0010110000010101001100", 
    26 => "0001110001110100110001", 27 => "1110111111101001100101", 
    28 => "0100001011111101111011", 29 => "0010001011100101001010", 
    30 => "1111000001001111100101", 31 => "0001000010011111110110", 
    32 => "1101100000101100110010", 33 => "0001010111010010101011", 
    34 => "0011110111111010001111", 35 => "0001110000000111000101", 
    36 => "1100111010101101010010", 37 => "1110100101011101010111", 
    38 => "1111010010111111100001", 39 => "1111011001001000101010", 
    40 => "1110001110110111100100", 41 => "0000000101011010000111", 
    42 => "0011101001010011111111", 43 => "1110101111001000110011", 
    44 => "1101100011001001011010", 45 => "1110010101010101100011", 
    46 => "0000101101000101011111", 47 => "1110000000001011100000", 
    48 => "0011100011001001100100", 49 => "0000001111001101100111", 
    50 => "0001001110001001101111", 51 => "1111011000010011101100", 
    52 => "0001010000011100100110", 53 => "1110011110101011111000", 
    54 => "0000011110010101111010", 55 => "0010001111000110011100", 
    56 => "0000000011110111001100", 57 => "0011011110001100011101", 
    58 => "1101111110011010110111", 59 => "1101010011000000110111", 
    60 => "0000110100111011011110", 61 => "1111010001111111110011", 
    62 => "1111011010110011000011", 63 => "1101110101101001110011" );


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

entity matmul_linear_weibPq is
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

architecture arch of matmul_linear_weibPq is
    component matmul_linear_weibPq_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibPq_rom_U :  component matmul_linear_weibPq_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


