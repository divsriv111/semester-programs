--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:36:27 03/25/2017
-- Design Name:   
-- Module Name:   N:/Shivam_2016_17/multi3X2_tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: multi3X2
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
 
ENTITY multi3X2_tb IS
END multi3X2_tb;
 
ARCHITECTURE behavior OF multi3X2_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT multi3X2
    PORT(
         a : IN  std_logic_vector(2 downto 0);
         b : IN  std_logic_vector(1 downto 0);
         p : OUT  std_logic_vector(4 downto 0);

        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(2 downto 0) := (others => '0');
   signal b : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal p : std_logic_vector(4 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
  
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: multi3X2 PORT MAP (
          a => a,
          b => b,
          p => p,
        );

   -- Clock process definitions
   
 

   -- Stimulus process
   stim_proc: process
   begin		
	 a(2)<='1'; a(1)<='1'; a(0)<='1'; b(0)<='0'; b(1)<='1'; 
       wait for 100 ns;
   end process;

END;
