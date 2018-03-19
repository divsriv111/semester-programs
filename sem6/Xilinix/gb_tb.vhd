--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:22:02 05/07/2017
-- Design Name:   
-- Module Name:   Y:/Shivam_2016_17/gb_tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: gb_d
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY gb_tb IS
END gb_tb;
 
ARCHITECTURE behavior OF gb_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT gb_d
    PORT(
         g : IN  std_logic_vector(3 downto 0);
         b : INOUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal g : std_logic_vector(3 downto 0) := (others => '0');

	--BiDirs
   signal b : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: gb_d PORT MAP (
          g => g,
          b => b
        );

   -- Stimulus process
   stim_proc: process
   begin		
     g(3)<='1';g(2)<='1';g(1)<='1';g(0)<='0';
      wait for 100 ns;	
   end process;

END;
