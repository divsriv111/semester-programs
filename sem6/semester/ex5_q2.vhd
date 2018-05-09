
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ex5_q2 is
    Port ( a : in  STD_LOGIC_vector( 3 downto 0 );
           b :in  STD_LOGIC_vector(3 downto 0);
			  cin : in  STD_LOGIC;
			  
           s : out  STD_LOGIC_vector(3 downto 0);
           cout : out  STD_LOGIC);
end ex5_q2;

architecture Behavioral of ex5_q2 is


signal p  : STD_LOGIC_vector (3 downto 0);
signal g  : STD_LOGIC_vector (3 downto 0);
signal c  : STD_LOGIC_vector(3 downto 1);
begin
p(0)<=a(0)xor b(0);
p(1)<=a(1)xor b(1);
p(2)<=a(2)xor b(2);
p(3)<=a(3)xor b(3);

g(0)<=a(0)and b(0);
g(1)<=a(1)and b(1);
g(2)<=a(2)and b(2);
g(3)<=a(3)and b(3);

s(0)<= p(0) xor cin;
c(1)<=g(0)or (p(0)and cin);

s(1)<= p(1) xor c(1);
c(2)<=g(1)or (p(1)and c(1));

s(2)<= p(2) xor c(2);
c(3)<=g(2)or (p(2)and c(2));

s(3)<= p(3) xor c(3);
cout<=g(3)or (p(3)and c(3));
end Behavioral;
