----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:04:13 05/06/2017 
-- Design Name: 
-- Module Name:    jk_ff - Behavioral 
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

entity jk_ff is
    Port ( j,k,clk : in  STD_LOGIC;
           q,qbar : out  STD_LOGIC);
end jk_ff;

architecture Behavioral of jk_ff is

begin
process(clk)
variable temp:STD_LOGIC;
begin
if(clk='1' and clk'event)then
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

