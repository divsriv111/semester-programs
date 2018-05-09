----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:47:58 03/14/2018 
-- Design Name: 
-- Module Name:    ex3_q1_HA - Dataflow 
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

entity ex3_q1_HA is
    Port ( a,b : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
end ex3_q1_HA;

architecture Dataflow of ex3_q1_HA is

begin
s <= a XOR b;
c <= a AND b;
end Dataflow;

