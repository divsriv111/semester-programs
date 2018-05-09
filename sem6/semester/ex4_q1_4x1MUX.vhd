----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:33:43 03/15/2018 
-- Design Name: 
-- Module Name:    ex4_q1_4x1MUX - Structural 
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

entity ex4_q1_4x1MUX is
    Port ( i1,i2,i3,i4,s0,s1 : in  STD_LOGIC;
           o : out  STD_LOGIC);
end ex4_q1_4x1MUX;
architecture Behavioral of ex4_q1_4x1MUX is

begin
process(i1,i2,i3,i4,s0,s1)
begin
if(s0='0' and s1='0') then
o <= i1;
elsif(s0='0' and s1='1') then
o <= i2;
elsif(s0='1' and s1='0') then
o <= i3;
else
o <= i4;
end if;
end process;
end Behavioral;

