--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:54:41 05/13/2017
-- Design Name:   
-- Module Name:   N:/Shivam_2016_17/PIPO_tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: PIP0_Shift
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
 
ENTITY PIPO_tb IS
END PIPO_tb;
 
ARCHITECTURE behavior OF PIPO_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT PIP0_Shift
    PORT(
         clk : IN  std_logic;
         pi : IN  std_logic_vector(3 downto 0);
         po : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal pi : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal po : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: PIP0_Shift PORT MAP (
          clk => clk,
          pi => pi,
          po => po
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '1';
		wait for clk_period/2;
		clk <= '0';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin	
	 pi<="1001";
      -- hold reset state for 100 ns.
      wait for 500 ns;	
   end process;

END;
