----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:13:45 03/15/2018 
-- Design Name: 
-- Module Name:    ex4_8x3ENCODER - Dataflow 
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

entity ex4_8x3ENCODER is
    Port ( i1,i2,i3,i4,i5,i6,i7,i8 : in  STD_LOGIC;
           a1,a2,a3 : out  STD_LOGIC);
end ex4_8x3ENCODER;

architecture Dataflow of ex4_8x3ENCODER is

begin
a1 <= i1 or i3 or i5 or i7;
a2 <= i2 or i3 or i6 or i7;
a3 <= i4 or i5 or i6 or i7;
end Dataflow;

