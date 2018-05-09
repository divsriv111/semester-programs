----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:58:40 03/14/2018 
-- Design Name: 
-- Module Name:    ex2_q1 - Dataflow 
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

entity ex2_q1 is
    Port ( a,b : in  STD_LOGIC;
           o1,o2,o3,o4,o5 : out  STD_LOGIC);
end ex2_q1;

architecture Dataflow of ex2_q1 is

begin
o1 <= NOT a;
o2 <= a AND b;
o3 <= a OR b;
o4 <= a NAND b;
o5 <= a XOR b;
end Dataflow;

