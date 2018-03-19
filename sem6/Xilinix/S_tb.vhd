--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:12:37 04/07/2017
-- Design Name:   
-- Module Name:   Y:/Shivam_2016_17/S_tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: S1
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
 
ENTITY S_tb IS
END S_tb;
 
ARCHITECTURE behavior OF S_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT S1
    PORT(
         x : IN  std_logic;
         y : IN  std_logic;
         d : OUT  std_logic;
         b : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal x : std_logic := '0';
   signal y : std_logic := '0';

 	--Outputs
   signal d : std_logic;
   signal b : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: S1 PORT MAP (
          x => x,
          y => y,
          d => d,
          b => b
        );

   -- Clock process definitions
   
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		x<='0'; y<='0';
      wait for 100 ns;
      x<='0'; y<='1';
		wait for 100 ns;
     x<='1'; y<='0';
	  wait for 100 ns;
     x<='1'; y<='1';
     wait for 100 ns;	 

     
   
   end process;

END;
