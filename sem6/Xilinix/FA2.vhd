----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:50:33 01/28/2017 
-- Design Name: 
-- Module Name:    FA2 - Behavioral 
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

entity FA2 is
    Port ( x,y,z : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
end FA2;

architecture Behavioral of FA2 is

 begin
process (x,y,z)
 begin
 if(x='0' and y='0' and z='0') then
  s<='0' ; c<='0';
  elsif(x='0' and y='0' and z='1') then
  s<='1' ; c<='0';
  elsif(x='0' and y='1' and z='0') then
  s<='1' ; c<='0';
   elsif(x='0' and y='1' and z='1') then
  s<='0' ; c<='1';
   elsif(x='1' and y='0' and z='0') then
  s<='1' ; c<='0';
  elsif(x='1' and y='0' and z='1') then
  s<='0' ; c<='1';
  elsif(x='1' and y='1' and z='0') then
  s<='0' ; c<='1'; 
  else 
  s<='1' ; c<='1';
  end if;
  end process;
 end Behavioral;

