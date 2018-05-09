----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:02:16 03/15/2018 
-- Design Name: 
-- Module Name:    ex4_q4_2x4DECODER - Dataflow 
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

entity ex4_q4_2x4DECODER is
    Port ( a0,a1 : in  STD_LOGIC;
           i1,i2,i3,i4 : out  STD_LOGIC);
end ex4_q4_2x4DECODER;

architecture Dataflow of ex4_q4_2x4DECODER is


begin
i4 <=(NOT a0) AND (NOT a1);
i3 <=(NOT a1) AND a0;
i2 <= a1 AND (NOT a0);
i1 <= a1 AND a0;
end Dataflow;

