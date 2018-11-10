--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:59:09 11/30/2017
-- Design Name:   
-- Module Name:   D:/CADCA3/CA3/generic_register_tb.vhd
-- Project Name:  CA3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: generic_register
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
library work; 
use work.real_array_pkg.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY generic_register_tb IS
END generic_register_tb;
 
ARCHITECTURE behavior OF generic_register_tb IS 
	
	 --constant declaration
	 constant tb_reg_size : integer := 8;
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT generic_register
    GENERIC (reg_size : INTEGER);
	 PORT(
         din : IN  real;
			dout : OUT  real;
         write_en: IN  std_logic;
         clk : IN  std_logic;
         reset : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal din : real := 0.0;
	signal write_en: std_logic := '0';
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal dout : real;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: generic_register GENERIC MAP(reg_size => tb_reg_size)
			PORT MAP (
          din => din,
          dout => dout,
          write_en => write_en,
          clk => clk,
          reset => reset
        );

   -- Clock process definitions
   CLK_process :process
   begin
		clk <= '0';
		wait for CLK_period/2;
		clk <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
		reset <= '1';
      wait for 100 ns;	

		reset <= '0';		
      wait for CLK_period*10;
		
		write_en <= '1';
		din<= 10.2;
		wait for CLK_period*2;
		
		din<= 0.3;
		wait for CLK_period*2;
				
      wait;
   end process;

END behavior;
