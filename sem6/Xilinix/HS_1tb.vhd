--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:46:34 01/28/2017
-- Design Name:   
-- Module Name:   N:/Shivam_2016_17/HS_1tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: HS1
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
 
ENTITY HS_1tb IS
END HS_1tb;
 
ARCHITECTURE behavior OF HS_1tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT HS1
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
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: HS1 PORT MAP (
          x => x,
          y => y,
          d => d,
          b => b
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      x<= '0' ; y<= '0';
      wait for 100 ns;	
		x<= '0' ;y<= '1';
      wait for 100 ns;	
		x<= '1' ; y<= '0';
      wait for 100 ns;
		x<= '1' ; y<= '1';
      wait for 100 ns;

     -- wait for <clock>_period*10;

      -- insert stimulus here 

     -- wait;
   end process;

END;
