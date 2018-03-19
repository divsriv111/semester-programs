--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:03:34 05/06/2017
-- Design Name:   
-- Module Name:   N:/Shivam_2016_17/t_ff_tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: tpc_ff
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
 
ENTITY t_ff_tb IS
END t_ff_tb;
 
ARCHITECTURE behavior OF t_ff_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT tpc_ff
    PORT(
         t : IN  std_logic;
         clk : IN  std_logic;
         clr : IN  std_logic;
         pr : IN  std_logic;
         q : OUT  std_logic;
         qbar : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal t : std_logic := '0';
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal pr : std_logic := '0';

 	--Outputs
   signal q : std_logic;
   signal qbar : std_logic;

   -- Clock period definitions
   constant clk_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: tpc_ff PORT MAP (
          t => t,
          clk => clk,
          clr => clr,
          pr => pr,
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
   pr<='1';clr<='0';t<='1';
   wait for 100 ns;	
	pr<='0';clr<='1';t<='0';
	wait for 100 ns;
	pr<='1';clr<='1';t<='0';
	wait for 100 ns;
	pr<='1';clr<='1';t<='1';
	wait for 100 ns;
   end process;

END;
