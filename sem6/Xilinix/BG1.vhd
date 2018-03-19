--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:49:14 05/06/2017
-- Design Name:   
-- Module Name:   Y:/Shivam_2016_17/BG1.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: BG_S
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
 
ENTITY BG1 IS
END BG1;
 
ARCHITECTURE behavior OF BG1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BG_S
    PORT(
         b : IN  std_logic_vector(3 downto 0);
         g : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal b : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal g : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BG_S PORT MAP (
          b => b,
          g => g
        );

   -- Clock process definition

   -- Stimulus process
   stim_proc: process
   begin		
	b(3)<='1';b(2)<='1';b(1)<='1';b(0)<='0';
      wait for 100 ns;	
   end process;

END;
