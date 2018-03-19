----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:07:38 04/22/2017 
-- Design Name: 
-- Module Name:    SR_FF - Behavioral 
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

entity SR_FF is
    Port ( s,r,clk : in  STD_LOGIC;
           q,qbar : out  STD_LOGIC);
end SR_FF;

architecture Behavioral of SR_FF is

begin
 process(clk)
 variable temp:STD_LOGIC;
 begin
 if(clk='1' and clk'event)then
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

