----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:43:11 02/04/2017 
-- Design Name: 
-- Module Name:    mux2X1_1 - structrual 
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

entity mux2X1_1 is
    Port ( i1 : in  STD_LOGIC;
           i2 : in  STD_LOGIC;
           s : in  STD_LOGIC;
           y : out  STD_LOGIC);
end mux2X1_1;

architecture structrual of mux2X1_1 is
 component or_1 is
  port(a,b : in  STD_LOGIC;
          y : out  STD_LOGIC);
			  end component ;
 component and_1 is
  port(a,b : in  STD_LOGIC;
          y : out  STD_LOGIC);
	 end component;
  component inv_1 is
  port(a : in  STD_LOGIC; 
          y : out  STD_LOGIC);
	 end component;
  Signal s1,s2,s3:STD_LOGIC;
begin
 inv1: inv_1 port map(s,s1);
 and1: and_1 port map( s1, i1 ,s2);
 and_2: and_1 port map(s ,i2 ,s3);
 or2:  or_1  port map(s2,s3,y);
end structrual;

