--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:05:10 02/04/2017
-- Design Name:   
-- Module Name:   Y:/Shivam_2016_17/mux4X1_tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mux4X1_1
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
 
ENTITY mux4X1_tb IS
END mux4X1_tb;
 
ARCHITECTURE behavior OF mux4X1_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mux4X1_1
    PORT(
         i1 : IN  std_logic;
         i2 : IN  std_logic;
         i3 : IN  std_logic;
         i4 : IN  std_logic;
         s0 : IN  std_logic;
         s1 : IN  std_logic;
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal i1 : std_logic := '0';
   signal i2 : std_logic := '0';
   signal i3 : std_logic := '0';
   signal i4 : std_logic := '0';
   signal s0 : std_logic := '0';
   signal s1 : std_logic := '0';

 	--Outputs
   signal y : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux4X1_1 PORT MAP (
          i1 => i1,
          i2 => i2,
          i3 => i3,
          i4 => i4,
          s0 => s0,
          s1 => s1,
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
-- 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
     s1<='0' ;s0<='0';i1<='0';
        wait for 100 ns;	
    s1<='0' ;s0<='0';i1<='1';
        wait for 100 ns;		
    s1<='0' ;s0<='1';i2<='0';
        wait for 100 ns;	
    s1<='0' ;s0<='1';i2<='1';
        wait for 100 ns;	
    s1<='1' ;s0<='0';i3<='0';
        wait for 100 ns;	
    s1<='1' ;s0<='0';i3<='1';
        wait for 100 ns;	
	 s1<='1' ;s0<='1';i4<='0';
         wait for 100 ns;
     s1<='1' ;s0<='1';i4<='1';

     --- wait for <clock>_period*10;

      -- insert stimulus here 

     -- wait;
   end process;

END;
