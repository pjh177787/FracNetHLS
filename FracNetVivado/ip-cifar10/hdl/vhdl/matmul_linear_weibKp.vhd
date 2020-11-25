-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity matmul_linear_weibKp_rom is 
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


architecture rtl of matmul_linear_weibKp_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111011001111011000100", 1 => "1111011100111011000101", 
    2 => "0000110111100011011000", 3 => "0001100000111000110101", 
    4 => "0100101101101100000010", 5 => "0000000010101110011110", 
    6 => "0010000001110001000000", 7 => "1101110111101010111010", 
    8 => "1100101101110010101010", 9 => "1110100101101010010100", 
    10 => "0010111000011010001100", 11 => "1110110110001110100111", 
    12 => "0011111010110110110011", 13 => "1111000010011111011001", 
    14 => "1111111010010111101001", 15 => "0000101101110111011000", 
    16 => "1110101111000001110001", 17 => "1010101110010100111111", 
    18 => "0010000110101100000011", 19 => "1001011111111100010110", 
    20 => "0000101100101000111100", 21 => "0011100000010010010011", 
    22 => "1111110110111000000110", 23 => "0001011011001001000000", 
    24 => "1110010111010110110101", 25 => "1101110110100011000100", 
    26 => "1100000011010011100000", 27 => "0001111111101101010001", 
    28 => "1101010011110001000100", 29 => "0000000001100001000001", 
    30 => "1101010111000101011000", 31 => "1101011000110010100100", 
    32 => "0011001111001100100011", 33 => "1100101011000101100001", 
    34 => "0010011000000000011111", 35 => "1110100000110011000101", 
    36 => "0000010000111011011000", 37 => "1111011010011100000110", 
    38 => "1110101111110000111100", 39 => "1101010010010000101110", 
    40 => "0000101111111011101100", 41 => "0010010010000110010000", 
    42 => "0000011110000101011001", 43 => "0010110101101101111101", 
    44 => "0001111111001000100000", 45 => "1100110110000010001010", 
    46 => "0001000000100011100111", 47 => "0000000001011001100110", 
    48 => "1111000110111111110001", 49 => "0001100101001010010001", 
    50 => "1111001010111011100001", 51 => "1101011000010001100101", 
    52 => "1011010100110100110000", 53 => "1111000111111100001011", 
    54 => "0011001111001100001011", 55 => "1110010010110100010100", 
    56 => "0100110100010101100101", 57 => "1110011101010110111110", 
    58 => "1101001000110010111110", 59 => "0010101101111011000111", 
    60 => "0000001110011010001110", 61 => "1110001101111101110011", 
    62 => "1110000101110010111010", 63 => "0010100101010111111110" );


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

entity matmul_linear_weibKp is
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

architecture arch of matmul_linear_weibKp is
    component matmul_linear_weibKp_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    matmul_linear_weibKp_rom_U :  component matmul_linear_weibKp_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


