library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ex5_q1 is
port( a : in std_logic_vector(3 downto 0);
b : in std_logic_vector(3 downto 0);
s : out std_logic_vector(3 downto 0);
cin : in std_logic;
cout : out std_logic);

end ex5_q1;

architecture Structural of ex5_q1 is

signal c  : std_logic_vector (3 downto 1);
component ex3_q4_FA
Port ( a,b,c : in  STD_LOGIC;
           s,cr : out  STD_LOGIC);
end component;

begin
fa1: ex3_q4_FA port map(a(0),b(0),cin,s(0),c(1));
fa2: ex3_q4_FA port map(a(1),b(1),c(1),s(1),c(2));
fa3: ex3_q4_FA port map(a(2),b(2),c(2),s(2),c(3));
fa4: ex3_q4_FA port map(a(3),b(3),c(3),s(3),cout);

end Structural;

