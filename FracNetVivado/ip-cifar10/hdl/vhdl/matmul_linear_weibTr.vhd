-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibTr_rom is 
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


architecture rtl of matmul_linear_weibTr_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001111000100011110011", 1 => "1100110110010100101010", 
    2 => "1110010001101010010001", 3 => "0000111000010110011010", 
    4 => "1101100110100011001010", 5 => "1111111001101000001011", 
    6 => "1101000110001111110110", 7 => "1110010001010110011000", 
    8 => "0010011101111001101011", 9 => "1111000111111110111011", 
    10 => "1110111010010001000111", 11 => "0010110011001011100010", 
    12 => "1111001011101011001111", 13 => "1101101110010111100111", 
    14 => "0000110100101011010111", 15 => "0000111100001000000010", 
    16 => "1100110111100100001100", 17 => "1101100000100011010110", 
    18 => "1111001100111001011010", 19 => "1110111110011101010000", 
    20 => "1100101001010001101000", 21 => "0010001000011000111000", 
    22 => "1100011001101011100100", 23 => "0010100010001100011110", 
    24 => "1110101111101110110111", 25 => "1100100000011011011011", 
    26 => "1100100100000000110101", 27 => "0100011001000001110111", 
    28 => "1101010111011000000111", 29 => "1011001011010100011000", 
    30 => "1110001111111011000100", 31 => "0010000111011000001011", 
    32 => "0000101101011000101110", 33 => "0010100110110000010111", 
    34 => "1101000111000110001101", 35 => "0100001010111110010100", 
    36 => "0001000101100100101100", 37 => "0100010011110101110000", 
    38 => "0001001111111110110100", 39 => "1111111000111110111010", 
    40 => "1110101110100110011010", 41 => "0011100001101001101000", 
    42 => "1110001010101101110110", 43 => "0011010110100000011101", 
    44 => "1101110111110000011111", 45 => "1110011110011010100000", 
    46 => "0000000101011000001111", 47 => "0011001010000110000001", 
    48 => "0000011110011011101011", 49 => "1110001101100100000001", 
    50 => "1110101111101011011000", 51 => "0001000010101011010001", 
    52 => "0011000111100111010111", 53 => "1101111001001100001101", 
    54 => "1100011001001110010100", 55 => "1101000110110101110110", 
    56 => "0100010010101010100010", 57 => "0011111110001001001101", 
    58 => "0101110010110101001010", 59 => "1101010110001001010010", 
    60 => "1101010101111110000010", 61 => "0011000001111111001000", 
    62 => "1110100111000100000000", 63 => "1101011011111111111111" );


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

entity matmul_linear_weibTr is
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

architecture arch of matmul_linear_weibTr is
    component matmul_linear_weibTr_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibTr_rom_U :  component matmul_linear_weibTr_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


