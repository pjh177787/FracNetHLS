-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibOq_rom is 
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


architecture rtl of matmul_linear_weibOq_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110010010111001111001", 1 => "1110110000011101010110", 
    2 => "1100011010011101110010", 3 => "1101101101101111101100", 
    4 => "1101110110101011100101", 5 => "0011010101100000111011", 
    6 => "1101010000101101100111", 7 => "1101111100010100100101", 
    8 => "1110110111101010011111", 9 => "1110110000000000000110", 
    10 => "0000111001111110100010", 11 => "1110100011000001100111", 
    12 => "0001011010001011000011", 13 => "0010010011100100001101", 
    14 => "0001000010011111010001", 15 => "1101100001111111001110", 
    16 => "0000101110011111001100", 17 => "0000100110000011010001", 
    18 => "1111011001001010100100", 19 => "0010000011010101000001", 
    20 => "1111101110110000100011", 21 => "1010101111001010110101", 
    22 => "1111101101101111111100", 23 => "0100001111001010100100", 
    24 => "1100110101010101110111", 25 => "0000011000000001001110", 
    26 => "0001111000110010000010", 27 => "1101111100000010100011", 
    28 => "0001111010100000010101", 29 => "1110010000101101110111", 
    30 => "0011111000011101111100", 31 => "0001010101001010111010", 
    32 => "0001110011000101000010", 33 => "0011111010011101111100", 
    34 => "1100111100110101110010", 35 => "1110101110101100001010", 
    36 => "0010011110011100100000", 37 => "0000001010110010010011", 
    38 => "1101000000001001100001", 39 => "1110111001111010101010", 
    40 => "0101101100000010000111", 41 => "1110100001000100001101", 
    42 => "1101101101100111001101", 43 => "1110000000011100101000", 
    44 => "0000111110111010111010", 45 => "0001000010011011101011", 
    46 => "1101110011010100000100", 47 => "0000010100011001111100", 
    48 => "1110111111110101110001", 49 => "0001110100101010101100", 
    50 => "1110011100100001000100", 51 => "1101101101010000110010", 
    52 => "1111011010010001010010", 53 => "0100000010101011111010", 
    54 => "1111001100001101100100", 55 => "1100011101000001111000", 
    56 => "1110010000110110111000", 57 => "1101101010101111101110", 
    58 => "1111000100100101101011", 59 => "0000101101101011111000", 
    60 => "0010111010100011000110", 61 => "1110001111110100111001", 
    62 => "0000100100101111000010", 63 => "0001001011110100111000" );


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

entity matmul_linear_weibOq is
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

architecture arch of matmul_linear_weibOq is
    component matmul_linear_weibOq_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibOq_rom_U :  component matmul_linear_weibOq_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


