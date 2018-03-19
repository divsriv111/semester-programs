----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:50:06 02/04/2017 
-- Design Name: 
-- Module Name:    mux4X1_3 - Behavioral 
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

entity mux4X1_3 is
    Port ( i1,i2,i3,i4,s0,s1 : in  STD_LOGIC;
           y : out  STD_LOGIC);
end mux4X1_3;

architecture Behavioral of mux4X1_3 is
begin 
process(s1,s0)
begin
if(s1='0' and s0='0')then
  y<=i1;
  elsif(s1='0' and s0='1')then
  y<=i2;
  elsif(s1='1' and s0='0')then
  y<=i3;
  else
  y<=i4;
  end if; 
  end process;
end Behavioral;

