----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:00:02 02/04/2017 
-- Design Name: 
-- Module Name:    mux4X1_2 - structural 
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

entity mux4X1_2 is
    Port ( i1,i2,i3,i4,s0,s1 : in  STD_LOGIC;
           y : out  STD_LOGIC);
end mux4X1_2;

architecture structural of mux4X1_2 is
 component or_4 is
  port(a,b,c,d : in  STD_LOGIC;
          y : out  STD_LOGIC);
			  end component ;
 component and_3 is
  port(a,b,c: in  STD_LOGIC;
          y : out  STD_LOGIC);
	 end component;
  component inv_1 is
  port(a : in  STD_LOGIC; 
          y : out  STD_LOGIC);
	 end component;
  Signal s2,s3,s4,s5,s6,s7:STD_LOGIC;
 begin
  inv1: inv_1 port map(s0,s2);
  inv2: inv_1 port map(s1,s3);
  AND1: and_3 port map(s3,s2,i1,s4);
  and_2: and_3 port map(s3,s0,i2,s5);
  and3 : and_3 port map(s1,s2,i3,s6);
  and_4: and_3 port map(s1,s0,i4,s7);
  or2 :or_4 port map(s4,s5,s6,s7,y);
  end structural;
