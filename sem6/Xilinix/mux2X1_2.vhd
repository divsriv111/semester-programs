----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:07:50 02/04/2017 
-- Design Name: 
-- Module Name:    mux2X1_2 - Behavioral 
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

entity mux2X1_2 is
    Port ( i1 : in  STD_LOGIC;
           i2 : in  STD_LOGIC;
           s : in  STD_LOGIC;
           y : out  STD_LOGIC);
end mux2X1_2;

architecture Behavioral of mux2X1_2 is

begin
process(s)
begin 
if( s='0' ) then
  y<=i1;
  else
  y<=i2;
--if( s='0' and i1='0')then
-- y<='0' ;
-- elsif( s='0' and i1='1')then
-- y<='1';
-- elsif(s='1' and i2='0') then
-- y<='0';
-- else
-- y<='1'; 
 end if;
 end process;
end Behavioral;

