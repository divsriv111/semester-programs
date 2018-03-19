----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:11:50 03/25/2017 
-- Design Name: 
-- Module Name:    multi3X2 - structural 
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

entity multi3X2 is
    Port ( a: in  STD_LOGIC_VECTOR( 2 downto 0);
	        b: in  STD_LOGIC_VECTOR( 1 downto 0);
           p : out  STD_LOGIC_VECTOR(4 downto 0));
end multi3X2;

architecture structural of multi3X2 is
component HA3
port(a,b : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
			  end component ;
component FA3 is
    Port ( x,y,z : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
end component;
component and_1
 Port ( a,b : in  STD_LOGIC;
           y : out  STD_LOGIC);
 end component;
 signal u1,u2,u3,u4,u5,u6,u7:STD_LOGIC;
begin
x1:and_1 port map (a(0),b(0),p(0));
X2:and_1 port map (a(1),b(0),u1);
X3:and_1 port map( a(0),b(1),u2);
X4:and_1 port map( a(2),b(0),u3);
X5:and_1 port map ( a(1),b(1),u4);
x6:and_1 port map (a(2),b(1),u5);
H1:HA3 port map (u1,u2,p(1),u6);
F1:FA3 port map ( u3,u4,u6,p(2),u7);
H2:HA3 port map (u5,u7,P(3),P(4));
end structural;

