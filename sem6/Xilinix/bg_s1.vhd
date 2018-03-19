----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:17:29 05/06/2017 
-- Design Name: 
-- Module Name:    bg_s1 - structural 
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

entity bg_s1 is
    Port ( b : in  STD_LOGIC_VECTOR(3 downto 0);
           g : out  STD_LOGIC_VECTOR(3 downto 0));
end bg_s1;
architecture structural of bg_s1 is
component xor_1 is
Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           y : out  STD_LOGIC);
			  end component;
begin
g(3)<=b(3);
XOR1:xor_1 port map (b(3),b(2),g(2));
XOR_2:xor_1 port map (b(2),b(1),g(1));
XOR_3:xor_1 port map (b(1),b(0),g(0));
end structural;

