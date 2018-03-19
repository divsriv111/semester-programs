----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:48:34 01/21/2017 
-- Design Name: 
-- Module Name:    half_add_1 - Behavioral 
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

entity half_add_1 is
    Port ( a,b : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
end half_add_1;

architecture Behavioral of half_add_1 is

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
  s<='1' ; c<='1';
  end if;
  end process;
end Behavioral;

