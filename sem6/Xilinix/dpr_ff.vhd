----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:51:37 05/06/2017 
-- Design Name: 
-- Module Name:    dpr_ff - Behavioral 
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

entity dpr_ff is
    Port ( pr,clr,d,clk : in  STD_LOGIC;
           q,qbar : out  STD_LOGIC);
end dpr_ff;

architecture Behavioral of dpr_ff is

begin
process(clk,pr,clr)
variable temp:STD_LOGIC;
begin
if(pr='0'and clr='1' )then
temp:='1';
elsif(pr='1'and clr='0')then 
temp:='0';
elsif(clk='1' and clk'event)then
if(d='0')then
 temp:='0';
 else
 temp:='1';
 end if;
 end if;
 q<=temp;
 qbar<=not temp;
 end process;
end Behavioral;

