----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:18:10 02/18/2017 
-- Design Name: 
-- Module Name:    mux8X1 - structural 
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

entity mux8X1 is
    Port ( i1,i2,i3,i4,i5,i6,i7,i8,s0,s1,s2 : in  STD_LOGIC;
           y : out  STD_LOGIC);
end mux8X1;

architecture structural of mux8X1 is
component mux2X1_1 is 
 port(i1,i2,s : in STD_LOGIC ;
     Y: out STD_LOGIC);
	  end component ;
	  signal s3,s4,s5,s6,s7,s8: STD_LOGIC;
begin
mux1:mux2X1_1 port map(i1,i2,s0,s3);
mux2:mux2X1_1 port map(i3,i4,s0,s4);
mux3:mux2X1_1 port map(i5,i6,s0,s5);
mux4:mux2X1_1 port map(i7,i8,s0,s6);
mux5:mux2X1_1 port map(s3,s4,s1,s7);
mux6:mux2X1_1 port map(s5,s6,s1,s8);
mux7:mux2X1_1 port map(s7,s8,s2,y);
end structural;

