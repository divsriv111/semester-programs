----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:39:27 05/07/2017 
-- Design Name: 
-- Module Name:    tff - Behavioral 
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

entity tff is
    Port ( clk,t : in  STD_LOGIC;
           q,qbar : out  STD_LOGIC);
end tff;

architecture Behavioral of tff is
begin
process(clk)
 variable temp:STD_LOGIC;
begin
if(clk='1' and clk'event)then
 if(t='0')then
 temp:=temp;
 else
 temp:= not temp;
end if;
end if;
q<=temp;
qbar<=not temp;
end process;end Behavioral;

