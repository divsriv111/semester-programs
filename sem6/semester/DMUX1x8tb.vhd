--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:02:55 03/15/2018
-- Design Name:   
-- Module Name:   N:/COA lab_practice/semester/DMUX1x8tb.vhd
-- Project Name:  semester
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ex4_q2_1x8DMUX
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
 
ENTITY DMUX1x8tb IS
END DMUX1x8tb;
 
ARCHITECTURE Structural OF DMUX1x8tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ex4_q2_1x8DMUX
    PORT(
         d : IN  std_logic;
         e : IN  std_logic;
         s0 : IN  std_logic;
         s1 : IN  std_logic;
         i1 : OUT  std_logic;
         i2 : OUT  std_logic;
         i3 : OUT  std_logic;
         i4 : OUT  std_logic;
         i5 : OUT  std_logic;
         i6 : OUT  std_logic;
         i7 : OUT  std_logic;
         i8 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal d : std_logic := '0';
   signal e : std_logic := '0';
   signal s0 : std_logic := '0';
   signal s1 : std_logic := '0';

 	--Outputs
   signal i1 : std_logic;
   signal i2 : std_logic;
   signal i3 : std_logic;
   signal i4 : std_logic;
   signal i5 : std_logic;
   signal i6 : std_logic;
   signal i7 : std_logic;
   signal i8 : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ex4_q2_1x8DMUX PORT MAP (
          d => d,
          e => e,
          s0 => s0,
          s1 => s1,
          i1 => i1,
          i2 => i2,
          i3 => i3,
          i4 => i4,
          i5 => i5,
          i6 => i6,
          i7 => i7,
          i8 => i8
        );


   -- Stimulus process
   stim_proc: process
   begin	
		d <= '1';
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		e <= '1';
		s0 <= '0';
		s1 <= '0';
		wait for 100 ns;	
		e <= '1';
		s0 <= '0';
		s1 <= '1';
		wait for 100 ns;	
		e <= '1';
		s0 <= '1';
		s1 <= '0';
		wait for 100 ns;	
		e <= '1';
		s0 <= '1';
		s1 <= '1';
		 wait for 100 ns;	
		e <= '0';
		s0 <= '0';
		s1 <= '0';
		wait for 100 ns;	
		e <= '0';
		s0 <= '0';
		s1 <= '1';
		wait for 100 ns;	
		e <= '0';
		s0 <= '1';
		s1 <= '0';
		wait for 100 ns;	
		e <= '0';
		s0 <= '1';
		s1 <= '1';
      wait;
   end process;

END;
