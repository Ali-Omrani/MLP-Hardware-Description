--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:07:23 12/01/2017
-- Design Name:   
-- Module Name:   D:/CADCA3/CA3/counter_tb.vhd
-- Project Name:  CA3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: counter
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
 
ENTITY counter_tb IS
END counter_tb;
 
ARCHITECTURE behavior OF counter_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT counter
    PORT(
         reset : IN  std_logic;
         clk : IN  std_logic;
			cnt_en : IN std_logic;
         din : IN  INTEGER;
         dout : OUT  INTEGER;
         co : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal reset : std_logic := '0';
	signal cnt_en : std_logic := '0';
   signal clk : std_logic := '0';
   signal din : INTEGER := 0;

 	--Outputs
   signal dout : INTEGER;
   signal co : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: counter PORT MAP (
          reset => reset,
          clk => clk,
          din => din,
          dout => dout,
          co => co,
			 cnt_en => cnt_en
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
      din <= 10;
		cnt_en <= '0';
		wait for 10 ns;	
		cnt_en <= '1';
		reset <= '0';
      wait for clk_period*10;


      wait;
   end process;

END;
