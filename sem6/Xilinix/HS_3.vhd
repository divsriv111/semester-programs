----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:34:22 01/24/2018 
-- Design Name: 
-- Module Name:    HS_3 - structural 
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

entity HS_3 is
    Port ( x,y : in  STD_LOGIC;
           d,b : out  STD_LOGIC);
end HS_3;

architecture structural of HS_3 is
component and_1
 Port ( a,b : in  STD_LOGIC;
           y : out  STD_LOGIC);
 end component;
 component xor_1
 Port ( a,b : in  STD_LOGIC;
           y : out  STD_LOGIC);
 end component;
 component  inv_1 
    Port ( a : in  STD_LOGIC;
           y : out  STD_LOGIC);
 end component;
 Signal c1:STD_LOGIC;
begin
XOR2:xor_1 port map(x,y,d);
NOT3:inv_1 port map(x,c1);
AND2:and_1 port map(c1,y,b);

end structural;

