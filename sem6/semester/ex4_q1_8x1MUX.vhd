----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:39:06 03/15/2018 
-- Design Name: 
-- Module Name:    ex4_q1_8x1MUX - Structural 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ex4_q1_8x1MUX is
    Port ( i1,i2,i3,i4,i5,i6,i7,i8,s0,s1,s2 : in  STD_LOGIC;
           o : out  STD_LOGIC);
end ex4_q1_8x1MUX;

architecture Structural of ex4_q1_8x1MUX is
component ex4_q1_2x1MUX
port( s0,i1,i2 : in std_logic;
		 o : out std_logic );
end component;
component ex4_q1_4x1MUX
port( s0,s1,i1,i2,i3,i4 : in std_logic;
		 o : out std_logic );
end component;
signal o1,o2 : std_logic;
begin
m1:ex4_q1_4x1MUX port map(i1,i2,i3,i4,s0,s1,o1);
m2:ex4_q1_4x1MUX port map(i5,i6,i7,i8,s0,s1,o2);
m3:ex4_q1_2x1MUX port map(o1,o2,s2,o);
end Structural;

