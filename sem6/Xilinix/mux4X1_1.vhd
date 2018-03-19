----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:49:29 02/04/2017 
-- Design Name: 
-- Module Name:    mux4X1_1 - dataflow 
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

entity mux4X1_1 is
    Port ( i1,i2,i3,i4,s0,s1 : in  STD_LOGIC;
           y : out  STD_LOGIC);
end mux4X1_1;

architecture dataflow of mux4X1_1 is

begin

y<=(i1 and (not s0) and (not s1)) or (i2 and s0 and (not s1)) or (i3 and (not s0) and s1)or(i4 and s0 and s1);

end dataflow;

