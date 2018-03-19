----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:47:36 01/27/2017 
-- Design Name: 
-- Module Name:    HA2 - Behavioral 
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

entity HA2 is
    Port ( a,b : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
end HA2;

architecture Behavioral of HA2 is
  begin
 process (a,b)
 begin
 if(a='0' and b='0') then
   s<='0' ; c<='0';
  elsif(a='0' and b='1') then
  s<='1' ; c<='0';
 elsif(a='1' and b='0') then
  s<='1' ; c<='0';
  else 
  s<='0' ; c<='1';
  end if;
  end process;
   end Behavioral;

