----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:24:59 05/06/2017 
-- Design Name: 
-- Module Name:    upcounter - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity upcounter is
    Port ( clk,clr : in  STD_LOGIC;
           q : out  STD_LOGIC_VECTOR(3 downto 0));
end upcounter;

architecture Behavioral of upcounter is

begin
process(clk,clr)
variable temp:STD_LOGIC_VECTOR(3 downto 0);
begin
if(clr='0')then
temp:="0000";
elsif(clk'event and clk='1')then
temp:=temp+1;
end if;
q<=temp;
end process;


end Behavioral;

