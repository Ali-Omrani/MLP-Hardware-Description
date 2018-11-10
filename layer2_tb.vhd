--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:37:15 01/26/2018
-- Design Name:   
-- Module Name:   D:/CADCA5/layer1_tb.vhd
-- Project Name:  CADCA5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: layer1
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
use work.fixed_point_array_pkg.all;
use work.fixed_point_package.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY layer2_tb IS
END layer2_tb;
 
ARCHITECTURE behavior OF layer2_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
	COMPONENT layer2
	generic(
		input_length : integer;
		neuron_count: integer
	);
	PORT(
		clk : IN  std_logic;
      reset : IN  std_logic;
      start : IN  std_logic;
		input : IN fixed_point_array(0 to input_length-1);
      ready : OUT  std_logic;
      output: OUT fixed_point_array (0 to neuron_count-1)
	);
   END COMPONENT;
   for all : layer2 use entity work.layer2(test);

   --Inputs
	signal clk : std_logic := '0';
	signal reset : std_logic := '0';
   signal start : std_logic := '0';
	signal input : fixed_point_array (0 to 3);

 	--Outputs
   signal ready : std_logic;
   signal output : fixed_point_array (0 to 2-1);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: layer2 
	generic map(
		input_length =>4,
		neuron_count =>2
	) 
	PORT MAP (
		clk => clk,
      reset => reset,
      start => start,
		input => input,
      ready => ready,
      output => output
   );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      reset <= '1';
		input <= (('0', "000000001000000"),('0', "000000010000000"),('0', "000000011000000"),('0', "000000100000000")); -- 1 2 3 4
		wait for clk_period;	
		reset <= '0';
		start <= '1';
      wait for clk_period;
		start <= '0';

      -- insert stimulus here 

      wait;
   end process;

END;
