----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:11:33 05/07/2017 
-- Design Name: 
-- Module Name:    gb_d - dataflow 
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

entity gb_d is
    Port ( g : in  STD_LOGIC_VECTOR(3 downto 0);
           b : inout  STD_LOGIC_VECTOR(3 downto 0));
end gb_d;
architecture dataflow of gb_d is
begin
b(3)<=g(3);
b(2)<=b(3) xor g(2);
b(1)<=b(2) xor g(1);
b(0)<=b(1) xor g(0);
end dataflow;