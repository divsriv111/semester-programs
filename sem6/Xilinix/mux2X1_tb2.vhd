--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:28:59 02/04/2017
-- Design Name:   
-- Module Name:   N:/Shivam_2016_17/mux2X1_tb2.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mux2X1_2
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
 
ENTITY mux2X1_tb2 IS
END mux2X1_tb2;
 
ARCHITECTURE behavior OF mux2X1_tb2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mux2X1_2
    PORT(
         i1 : IN  std_logic;
         i2 : IN  std_logic;
         s : IN  std_logic;
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal i1 : std_logic := '0';
   signal i2 : std_logic := '0';
   signal s : std_logic := '0';

 	--Outputs
   signal y : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux2X1_2 PORT MAP (
          i1 => i1,
          i2 => i2,
          s => s,
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
        i1<='0'; i2<='0'; s<='0';
		   wait for 100 ns;	
			 i1<='0'; i2<='0'; s<='1';
		   wait for 100 ns;
			 i1<='0'; i2<='1'; s<='0';
		   wait for 100 ns;
			 i1<='0'; i2<='1'; s<='1';
		   wait for 100 ns;
			 i1<='1'; i2<='0'; s<='0';
		   wait for 100 ns;
			 i1<='1'; i2<='0'; s<='1';
		   wait for 100 ns;
			 i1<='1'; i2<='1'; s<='0';
		   wait for 100 ns;
			 i1<='1'; i2<='1'; s<='1';
		   wait for 100 ns;

      --wait for <clock>_period*10;

      -- insert stimulus here 

      --wait;
   end process;

END;
