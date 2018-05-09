----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:22:40 04/18/2018 
-- Design Name: 
-- Module Name:    ex3_q3_FS - Behavioral 
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

entity ex3_q3_FS is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           d,br : out  STD_LOGIC);
end ex3_q3_FS;

architecture Structural of ex3_q3_FS is
signal d1,b1,b2 : std_logic;
component ex3_q2_HS
port(a,b : in std_logic;
		d,br : out std_logic);
end component;
begin
h1:ex3_q2_HS port map(a,b,d1,b1);
h2:ex3_q2_HS port map(d1,c,d,b2);
br <= b1 OR b2;
end Structural;

