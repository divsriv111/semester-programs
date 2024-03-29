--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:25:34 02/04/2017
-- Design Name:   
-- Module Name:   Y:/Shivam_2016_17/and_3tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: and_3
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
 
ENTITY and_3tb IS
END and_3tb;
 
ARCHITECTURE behavior OF and_3tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT and_3
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         c : IN  std_logic;
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal c : std_logic := '0';

 	--Outputs
   signal y : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
  -- constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: and_3 PORT MAP (
          a => a,
          b => b,
          c => c,
          y => y
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
		a<='0'; b<='0';c<='0';
      wait for 100 ns;	
		a<='0'; b<='0';c<='1';
      wait for 100 ns;	
     a<='0'; b<='1';c<='0';
      wait for 100 ns;	
     a<='0'; b<='1';c<='1';
       wait for 100 ns;	
     a<='1'; b<='0';c<='0';
      wait for 100 ns;	
     a<='1'; b<='0';c<='1';
      wait for 100 ns;	
     a<='1'; b<='1';c<='0';
      wait for 100 ns;	
		a<='1'; b<='1';c<='1';
      wait for 100 ns;	



    
      -- insert stimulus here 

  
   end process;

END;
