
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity FracNet_T_mul_mulbWr_DSP48_7 is
port (
    a: in std_logic_vector(18 - 1 downto 0);
    b: in std_logic_vector(24 - 1 downto 0);
    p: out std_logic_vector(43 - 1 downto 0));

end entity;

architecture behav of FracNet_T_mul_mulbWr_DSP48_7 is
    signal a_cvt: signed(18 - 1 downto 0);
    signal b_cvt: signed(24 - 1 downto 0);
    signal p_cvt: signed(43 - 1 downto 0);


begin

    a_cvt <= signed(a);
    b_cvt <= signed(b);
    p_cvt <= resize((signed (a_cvt) * signed (b_cvt)), 43);
    p <= std_logic_vector(p_cvt);

end architecture;
Library IEEE;
use IEEE.std_logic_1164.all;

entity FracNet_T_mul_mulbWr is
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER);
    port (
        din0 : IN STD_LOGIC_VECTOR(din0_WIDTH - 1 DOWNTO 0);
        din1 : IN STD_LOGIC_VECTOR(din1_WIDTH - 1 DOWNTO 0);
        dout : OUT STD_LOGIC_VECTOR(dout_WIDTH - 1 DOWNTO 0));
end entity;

architecture arch of FracNet_T_mul_mulbWr is
    component FracNet_T_mul_mulbWr_DSP48_7 is
        port (
            a : IN STD_LOGIC_VECTOR;
            b : IN STD_LOGIC_VECTOR;
            p : OUT STD_LOGIC_VECTOR);
    end component;



begin
    FracNet_T_mul_mulbWr_DSP48_7_U :  component FracNet_T_mul_mulbWr_DSP48_7
    port map (
        a => din0,
        b => din1,
        p => dout);

end architecture;

