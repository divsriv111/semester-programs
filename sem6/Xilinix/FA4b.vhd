----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:32:18 02/18/2017 
-- Design Name: 
-- Module Name:    FA4b - structural 
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

entity FA4b is
    Port ( a : in  STD_LOGIC_VECTOR(3 downto 0);
           b : in  STD_LOGIC_VECTOR(3 downto 0);
           cin : in  STD_LOGIC;
           s : out  STD_LOGIC_VECTOR(3 downto 0);
           c : out  STD_LOGIC);
end FA4b;

architecture structural of FA4b is
component FA3 is
    Port ( x,y,z : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
end component;
signal c0,c1,c2:STD_LOGIC;
begin
FA_1:FA3 port map(a(0),b(0),cin,s(0),c0);
FA_2:FA3 port map(a(1),b(1),c0,s(1),c1);
FA_3:FA3 port map(a(2),b(2),c1,s(2),c2);
FA_4:FA3 port map(a(3),b(3),c2,s(3),c);
end structural;

