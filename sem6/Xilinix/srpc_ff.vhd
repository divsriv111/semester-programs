----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:39:47 04/22/2017 
-- Design Name: 
-- Module Name:    srpc_ff - Behavioral 
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

entity srpc_ff is
    Port ( s,r,clk,pr,clear: in  STD_LOGIC;
           q,qbar : out  STD_LOGIC);
end srpc_ff;

architecture Behavioral of srpc_ff is
begin
process(clk,pr,clear)
variable temp:STD_LOGIC;
begin
if(clear='0')then
temp:='1';
elsif(pr='0')then 
temp:='0';
elsif(clk='1' and clk'event)then
if(s='0'and r='0')then
 temp:=temp;
 elsif(s='0' and r='1')then
 temp:='0';
 elsif(s='1' and r='0')then
 temp:='1';
 else
 temp:='Z';
 end if;
 end if;
 q<=temp;
 qbar<=not temp;
 end process;
end Behavioral;

