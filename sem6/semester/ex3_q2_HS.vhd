----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:46:44 03/14/2018 
-- Design Name: 
-- Module Name:    ex3_q2_HS - Behavioral 
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

entity ex3_q2_HS is
    Port ( a,b : in  STD_LOGIC;
           d,br : out  STD_LOGIC);
end ex3_q2_HS;

architecture Behavioral of ex3_q2_HS is

begin
process(a,b)
begin
if(a='0' and b='0') then
d <= '0';
br <= '0';
elsif(a='1' and b='0') then
d <= '1';
br <= '1';
elsif(a='0' and b='1') then
d <= '1';
br <= '0';
else
d <= '0';
br <= '0';
end if;
end process;
end Behavioral;

