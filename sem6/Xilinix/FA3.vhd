----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:10:33 01/28/2017 
-- Design Name: 
-- Module Name:    FA3 - structural 
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

entity FA3 is
    Port ( x,y,z : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
end FA3;

architecture structural of FA3 is
component HA3
port(a,b : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
			  end component ;
 component or_1
  port(a,b : in  STD_LOGIC;
          y : out  STD_LOGIC);
			  end component ;
 Signal s1,c1,c2:STD_LOGIC;
begin
ha1 :HA3 port map (x,y,s1,c1);
HA_2 :HA3 port map (s1,z, s,c2);
Or2 :or_1 port map (c1,c2,c);
end structural;

