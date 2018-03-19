--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:44:05 05/06/2017
-- Design Name:   
-- Module Name:   N:/Shivam_2016_17/updown_tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: updowncounter
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
 
ENTITY updown_tb IS
END updown_tb;
 
ARCHITECTURE behavior OF updown_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT updowncounter
    PORT(
         clk : IN  std_logic;
         clr : IN  std_logic;
         updown : IN  std_logic;
         q : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal updown : std_logic := '0';

 	--Outputs
   signal q : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: updowncounter PORT MAP (
          clk => clk,
          clr => clr,
          updown => updown,
          q => q
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
      clr<='0';
      wait for 100 ns;
     clr<='1'; updown<='1';
	   wait for 1500 ns;
		clr<='1'; updown<='0';
	   wait for 1500 ns;
		wait;
      -- insert stimulus her
   end process;

END;
