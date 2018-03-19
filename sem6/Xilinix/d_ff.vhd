----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:08:14 05/07/2017 
-- Design Name: 
-- Module Name:    d_ff - Behavioral 
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

entity d_ff is
    Port ( clk,d : in  STD_LOGIC;
           q,qbar : out  STD_LOGIC);
end d_ff;

architecture Behavioral of d_ff is
begin
process(clk)
 variable temp:STD_LOGIC;
begin
if(clk='1' and clk'event)then
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

