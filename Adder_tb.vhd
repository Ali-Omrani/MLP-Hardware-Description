--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:31:51 12/15/2017
-- Design Name:   
-- Module Name:   D:/CADCA4/CA4/adder_fixed_point_tb.vhd
-- Project Name:  CA4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: adder_fixed_point
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
use work.fixed_point_package.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY adder_fixed_point_tb IS
END adder_fixed_point_tb;
 
ARCHITECTURE behavior OF adder_fixed_point_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT adder_fixed_point
    PORT(
         a : IN  fixed_point;
         b : IN  fixed_point;
         c : OUT  fixed_point
        );
    END COMPONENT;
    

   --Inputs
   signal a : fixed_point ;
   signal b : fixed_point ;

 	--Outputs
   signal c : fixed_point;
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: adder_fixed_point PORT MAP (
          a => a,
          b => b,
          c => c
        );


   -- Stimulus process
   stim_proc: process
   begin		
  
		a.sign <= '0';
		a.magnitude <= "000000000000111";
		
		b.sign <= '0';
		b.magnitude <= "000000000000101";
		wait for 100 ns;	
		a.sign <= '1';
		a.magnitude <= "000000000000111";
		wait for 100 ns;
		
		b.sign <= '1';
		b.magnitude <= "000000000000101";
		wait for 100 ns;	
		a.sign <= '0';
  
      -- insert stimulus here 

      wait;
   end process;

END;
