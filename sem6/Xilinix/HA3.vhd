----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:17:48 01/28/2017 
-- Design Name: 
-- Module Name:    HA3 - structural  
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

entity HA3 is
    Port ( a,b : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
end HA3;

architecture structural  of HA3 is
component and_1
 Port ( a,b : in  STD_LOGIC;
           y : out  STD_LOGIC);
 end component;
 component xor_1
 Port ( a,b : in  STD_LOGIC;
           y : out  STD_LOGIC);
 end component;
 
begin
XOR2:xor_1 port map(a,b,s);
AND2:and_1 port map(a,b,c);

end structural ;

