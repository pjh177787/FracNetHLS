-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibMq_rom is 
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


architecture rtl of matmul_linear_weibMq_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101110010110011000001", 1 => "0001010010001000000000", 
    2 => "0100000010101110011110", 3 => "0010100110000110111100", 
    4 => "0001010101010000101011", 5 => "0011010011010001011111", 
    6 => "1110011011111110000100", 7 => "1101010101100100101110", 
    8 => "1101010000001111100110", 9 => "1101011110011101111110", 
    10 => "1101101000000011011111", 11 => "1101110100111010101010", 
    12 => "1101100001000011101011", 13 => "1111111100011100000100", 
    14 => "1101100000101101010111", 15 => "0100000001111001111101", 
    16 => "1111101000101101010101", 17 => "1111100101111010010000", 
    18 => "0100011000011011010011", 19 => "0001010100111101101000", 
    20 => "0011001001100001111111", 21 => "0000000111000000000101", 
    22 => "0010000001001010000110", 23 => "1111100111000111001101", 
    24 => "1110000111000001111111", 25 => "1101100111100011101011", 
    26 => "0001100111001001111010", 27 => "1110100101100010111011", 
    28 => "1101010011101010110000", 29 => "1111100100010000100011", 
    30 => "0001001000101001101100", 31 => "0001100010001111111101", 
    32 => "1110100011011010010001", 33 => "1101000011110011100100", 
    34 => "1101010001001011111110", 35 => "1100101100111010001001", 
    36 => "0011001111010110000001", 37 => "1110111111100110011110", 
    38 => "0001000101010000011010", 39 => "0000101111101100100110", 
    40 => "1101111111011000101100", 41 => "1110110111110011001110", 
    42 => "0010111101000110110110", 43 => "1110011011111110001110", 
    44 => "0010010110011010001100", 45 => "0001110101110000101001", 
    46 => "1101000111001100000001", 47 => "1111001100110011000000", 
    48 => "0001110011010011001010", 49 => "0010110111110101000101", 
    50 => "0001001100101010111110", 51 => "1101101000111110111110", 
    52 => "0001011100110101001101", 53 => "1110101011010110111010", 
    54 => "0000011011011001110110", 55 => "0010010100001010110011", 
    56 => "1110000100101010111000", 57 => "0000000101010011010010", 
    58 => "1111111111010010111000", 59 => "0010001010100011000001", 
    60 => "1100100101001100000111", 61 => "0000101110110001000010", 
    62 => "0100111010010011100010", 63 => "1101010010110001111001" );


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

entity matmul_linear_weibMq is
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

architecture arch of matmul_linear_weibMq is
    component matmul_linear_weibMq_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibMq_rom_U :  component matmul_linear_weibMq_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


