----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:53:05 03/25/2017 
-- Design Name: 
-- Module Name:    BG - dataflow 
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

entity BG is
    Port ( b : in  STD_LOGIC_VECTOR (3 downto 0);
           g : out  STD_LOGIC_VECTOR(3 downto 0));
end BG;

architecture dataflow of BG is

begin
g(3)<=b(3);
g(2)<=b(3) xor b(2);
g(1)<=b(2) xor b(1);
g(0)<=b(1) xor b(0);
end dataflow;

