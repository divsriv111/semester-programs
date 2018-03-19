--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:46:08 03/25/2017
-- Design Name:   
-- Module Name:   N:/Shivam_2016_17/FA4_AS_tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FA4_AS
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
 
ENTITY FA4_AS_tb IS
END FA4_AS_tb;
 
ARCHITECTURE behavior OF FA4_AS_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FA4_AS
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         Cin : IN  std_logic;
         s : OUT  std_logic_vector(3 downto 0);
         cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal Cin : std_logic := '0';

 	--Outputs
   signal s : std_logic_vector(3 downto 0);
   signal cout : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FA4_AS PORT MAP (
          a => a,
          b => b,
          Cin => Cin,
          s => s,
          cout => cout
        );

   -- Clock process definitions
   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
   a(0)<='0';a(1)<='0';a(2)<='0';a(3)<='1';b(0)<='0';b(1)<='1';b(2)<='1';b(3)<='1';
 cin<='0';
   wait for 100 ns;	
a(0)<='0';a(1)<='0';a(2)<='0';a(3)<='1';b(0)<='0';b(1)<='1';b(2)<='1';b(3)<='1';
  cin<='1';
   wait for 100 ns;	
		end process;

END;
