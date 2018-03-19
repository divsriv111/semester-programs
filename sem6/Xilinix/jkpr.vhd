----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:22:05 05/06/2017 
-- Design Name: 
-- Module Name:    jkpr - Behavioral 
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

entity jkpr is
    Port ( j,k,clk,pr,clr : in  STD_LOGIC;
           q,qbar : out  STD_LOGIC);
end jkpr;

architecture Behavioral of jkpr is

begin
process(clk,pr,clr)
variable temp:STD_LOGIC;
begin
if(pr='0'and clr='1' )then
temp:='1';
elsif(pr='1'and clr='0')then 
temp:='0';
elsif(clk='1' and clk'event)then
if(j='0'and k='0')then
 temp:=temp;
 elsif(j='0' and k='1')then
 temp:='0';
 elsif(j='1' and k='0')then
 temp:='1';
 else
 temp:=not temp;
 end if;
 end if;
 q<=temp;
 qbar<=not temp;
 end process;
end Behavioral;

