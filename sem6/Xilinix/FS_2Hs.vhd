----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:31:58 01/24/2018 
-- Design Name: 
-- Module Name:    FS_2Hs - structural 
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

entity FS_2Hs is
    Port ( a,b,c : in  STD_LOGIC;
           d, e : out  STD_LOGIC);
end FS_2Hs;

architecture structural of FS_2Hs is
component  HS_3 is
    Port ( x,y : in  STD_LOGIC;
           d,b : out  STD_LOGIC);
		end component ;
component or_1
  port(a,b : in  STD_LOGIC;
          y : out  STD_LOGIC);
			  end component ;
 Signal b1,c1,c2:STD_LOGIC;
begin
hs1 :HS_3 port map (a,b,b1,c1);
hs2 :Hs_3 port map (b1,c, d,c2);
Or3 :or_1 port map (c1,c2,e);

end structural;

