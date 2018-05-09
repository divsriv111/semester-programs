--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:27:50 03/14/2018
-- Design Name:   
-- Module Name:   N:/COA lab_practice/semester/ex2_q2_1tb.vhd
-- Project Name:  semester
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ex2_q2_1
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
 
ENTITY ex2_q2_1tb IS
END ex2_q2_1tb;
 
ARCHITECTURE behavior OF ex2_q2_1tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ex2_q2_1
    PORT(
         x : IN  std_logic;
         y : IN  std_logic;
         a : IN  std_logic;
         b : IN  std_logic;
         o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal x : std_logic := '0';
   signal y : std_logic := '0';
   signal a : std_logic := '0';
   signal b : std_logic := '0';

 	--Outputs
   signal o : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ex2_q2_1 PORT MAP (
          x => x,
          y => y,
          a => a,
          b => b,
          o => o
        );

   -- Clock process definitions
   
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		a <='1';
		b <='1';
      wait for 100 ns;	
		x <='0';
		y <='0';
		wait for 100 ns;	
		x <='0';
		y <='1';
		wait for 100 ns;	
		x <='1';
		y <='0';
		wait for 100 ns;	
		x <='1';
		y <='1';
  
  

      wait;
   end process;

END;
