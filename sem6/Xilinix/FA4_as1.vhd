----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:35:19 03/25/2017 
-- Design Name: 
-- Module Name:    FA4_as1 - strutural 
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
entity FA4_AS is
    Port ( a,b : in  STD_LOGIC_VECTOR (3 downto 0);
           Cin : in  STD_LOGIC;
           s : out  STD_LOGIC_VECTOR (3 downto 0);
           cout : out  STD_LOGIC);
end FA4_AS;

architecture structural of FA4_AS is
 component FA3 is
  Port ( x,y,z : in  STD_LOGIC;
           s,c : out  STD_LOGIC);
			  end component;
 component xor_1
 Port ( a,b : in  STD_LOGIC;
           y : out  STD_LOGIC);
 end component;
 signal c0,c1,c2,b0,b1,b2,b3:STD_LOGIC;
begin
XOR1:xor_1 port map(b(0),cin,b0);
XOR2:xor_1 port map(b(1),cin,b1);
XOR3:xor_1 port map(b(2),cin,b2);
XOR4:xor_1 port map(b(3),cin,b3);
F1:FA3 port map(a(0),b0,cin,s(0),c0);
F2:FA3 port map(a(1),b1,c0,s(1),c1);
F3:FA3 port map(a(2),b2,c1,s(2),c2);
F4:FA3 port map(a(3),b3,c2,s(3),cout);
end structural;

