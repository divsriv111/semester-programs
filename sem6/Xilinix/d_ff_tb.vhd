--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:12:03 05/07/2017
-- Design Name:   
-- Module Name:   Y:/Shivam_2016_17/d_ff_tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: d_ff
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
 
ENTITY d_ff_tb IS
END d_ff_tb;
 
ARCHITECTURE behavior OF d_ff_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT d_ff
    PORT(
         clk : IN  std_logic;
         d : IN  std_logic;
         q : OUT  std_logic;
         qbar : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal d : std_logic := '0';

 	--Outputs
   signal q : std_logic;
   signal qbar : std_logic;

   -- Clock period definitions
   constant clk_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: d_ff PORT MAP (
          clk => clk,
          d => d,
          q => q,
          qbar => qbar
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
      -- hold reset state for 100 ns.
		d<='0';
      wait for 100 ns;
     d<='1';
      wait for 100 ns;		
   end process;

END;
