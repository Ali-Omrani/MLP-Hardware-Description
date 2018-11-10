--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:36:28 11/30/2017
-- Design Name:   
-- Module Name:   D:/CADCA3/CA3/generic_rom_tb.vhd
-- Project Name:  CA3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: generic_rom
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
 
ENTITY generic_rom_tb IS
END generic_rom_tb;
 
ARCHITECTURE behavior OF generic_rom_tb IS 
	
	--constant declaration
	 constant tb_mem_size : integer := 8; 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT generic_rom
	 GENERIC (mem_size : INTEGER);
    PORT(
         sel : IN  INTEGER;
         dout : OUT  REAL;
         clk : IN  std_logic;
         reset : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal sel : INTEGER := 0;
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal dout : REAL;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: generic_rom
	GENERIC MAP(mem_size => tb_mem_size)
	PORT MAP (
         sel => sel,
         dout => dout,
         clk => clk,
         reset => reset
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
      -- hold reset state for 100 ns.
		reset <= '1';
      wait for 100 ns;
		
		sel <= 4;
      wait for clk_period*30;
		sel <= 5;
      -- insert stimulus here 

      wait;
   end process;

END;
