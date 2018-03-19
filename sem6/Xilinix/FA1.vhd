----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:30:03 01/28/2017 
-- Design Name: 
-- Module Name:    FA1 - dataflow 
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

entity FA1 is
    Port ( x,y,z : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
end FA1;

architecture dataflow of FA1 is

begin
s<=(x xor y) xor z;
c<=(x and y) or (y and z) or (x and z); 

end dataflow;

