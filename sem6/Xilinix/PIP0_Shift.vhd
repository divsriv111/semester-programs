----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:45:43 05/13/2017 
-- Design Name: 
-- Module Name:    PIP0_Shift - Behavioral 
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

entity PIP0_Shift is
    Port ( clk : in  STD_LOGIC;
           pi : in  STD_LOGIC_VECTOR(3 downto 0) ;
           po : out  STD_LOGIC_VECTOR(3 downto 0));
end PIP0_Shift;
architecture Behavioral of PIP0_Shift is
begin
process(clk)
begin
if(clk'event and clk='1') then
po<=pi;
end if;
end process;
end Behavioral;

