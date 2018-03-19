--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:29:00 02/18/2017
-- Design Name:   
-- Module Name:   N:/Shivam_2016_17/mux8X1tb.vhd
-- Project Name:  Shivam_2016_17
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mux8X1
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
 
ENTITY mux8X1tb IS
END mux8X1tb;
 
 ARCHITECTURE behavior OF mux8X1tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mux8X1
    PORT(
         i1 : IN  std_logic;
         i2 : IN  std_logic;
         i3 : IN  std_logic;
         i4 : IN  std_logic;
         i5 : IN  std_logic;
         i6 : IN  std_logic;
         i7 : IN  std_logic;
         i8 : IN  std_logic;
         s0 : IN  std_logic;
         s1 : IN  std_logic;
         s2 : IN  std_logic;
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal i1 : std_logic := '0';
   signal i2 : std_logic := '0';
   signal i3 : std_logic := '0';
   signal i4 : std_logic := '0';
   signal i5 : std_logic := '0';
   signal i6 : std_logic := '0';
   signal i7 : std_logic := '0';
   signal i8 : std_logic := '0';
   signal s0 : std_logic := '0';
   signal s1 : std_logic := '0';
   signal s2 : std_logic := '0';

 	--Outputs
   signal y : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux8X1 PORT MAP (
          i1 => i1,
          i2 => i2,
          i3 => i3,
          i4 => i4,
          i5 => i5,
          i6 => i6,
          i7 => i7,
          i8 => i8,
          s0 => s0,
          s1 => s1,
          s2 => s2,
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
--      s2<='0';s1<='0';s0<='0';i1<='0';
--      wait for 100 ns;	
--     s2<='0';s1<='0';s0<='0';i1<='1';
--      wait for 100 ns;	
--    s2<='0';s1<='0';s0<='1';i2<='0';
--      wait for 100 ns;	
--   s2<='0';s1<='0';s0<='1';i2<='1';
--      wait for 100 ns;	
--   s2<='0';s1<='1';s0<='0';i3<='0';
--      wait for 100 ns;	
--   s2<='0';s1<='1';s0<='0';i3<='1';
--      wait for 100 ns;	
--   s2<='0';s1<='1';s0<='1';i4<='0';
--      wait for 100 ns;	
--     s2<='0';s1<='1';s0<='1';i4<='1';
--      wait for 100 ns;	
--   s2<='1';s1<='0';s0<='0';i5<='0';
--      wait for 100 ns;	
--   s2<='1';s1<='0';s0<='0';i5<='1';
--      wait for 100 ns;	
--   s2<='1';s1<='0';s0<='1';i6<='0';
--      wait for 100 ns;	
--   s2<='1';s1<='0';s0<='1';i6<='1';
--    wait for 100 ns;	
--	s2<='1';s1<='1';s0<='0';i7<='0';
--      wait for 100 ns;	
--		s2<='1';s1<='1';s0<='0';i7<='1';
--      wait for 100 ns;
--   s2<='1';s1<='1';s0<='1';i8<='0';
--     wait for 100 ns;
--		s2<='1';s1<='1';s0<='1';i8<='1';
--      wait for 100 ns;			
      i1<='1';i2<='0';i3<='1';i4<='0';i5<='1';i6<='0'; i7<='1';i8<='0';
		s0<='0';s1<='0';s2<='0';
	   wait for 100 ns;	
		i2<='1';s0<='0';s1<='0';s2<='1';
		wait for 100 ns;	
		i3<='1';s0<='0';s0<='1';s2<='0';
		wait for 100 ns;	
		i4<='1';s0<='0';s1<='1';s2<='1';
		wait for 100 ns;	
		i5<='1';s0<='1';s1<='0';s2<='0';
		wait for 100 ns;	
		i6<='1';s0<='1';s1<='0';s2<='1';
		wait for 100 ns;	
		i7<='1';s0<='1';s1<='1';s2<='0';
		wait for 100 ns;
      i8<='1';s0<='1';s1<='1';s1<='1';
	    wait for 100 ns;			
   end process;

END;
