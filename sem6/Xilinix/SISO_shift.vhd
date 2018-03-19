----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:27:35 05/13/2017 
-- Design Name: 
-- Module Name:    SISO_shift - Behavioral 
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

entity SISO_shift is
    Port ( clk,si : in  STD_LOGIC;
           so : out  STD_LOGIC);
end SISO_shift;

architecture Behavioral of SISO_shift is
signal temp:STD_LOGIC_VECTOR(3 downto 0);
begin
process(clk)
begin
if (clk'event and clk='1')then
for i in 0 to 2 loop
temp(i+1)<=temp(i);
end loop;
temp(0)<=si;
end if;
end process;
so<=temp(3);
end Behavioral;

