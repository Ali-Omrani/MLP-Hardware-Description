--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:36:28 11/30/2017
-- Design Name:   
-- Module Name:   D:/CADCA3/CA3/generic_ram_tb.vhd
-- Project Name:  CA3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: generic_ram
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
 
ENTITY generic_ram_tb IS
END generic_ram_tb;
 
ARCHITECTURE behavior OF generic_ram_tb IS 
	
	--constant declaration
	 constant tb_mem_size : integer := 4; 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT generic_ram_fixed_point
	 GENERIC (mem_size : INTEGER);
	PORT (
		clk, we, en: in std_logic;
		addr : in integer;
		ram_input : in fixed_point_array(0 to mem_size-1);
		dout: out fixed_point
	);
    END COMPONENT;

   --Inputs
	signal mem_size : INTEGER := 4;
   signal addr : integer := 0;
   signal clk : std_logic := '0';
   signal we : std_logic := '0';
   signal en : std_logic := '0';
	signal ram_input : fixed_point_array(0 to tb_mem_size-1);

 	--Outputs
   signal dout : fixed_point;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
	
		
 
	-- Instantiate the Unit Under Test (UUT)
   uut: generic_ram_fixed_point
	GENERIC MAP(mem_size => tb_mem_size)
	PORT MAP (
         addr => addr,
			ram_input => ram_input,
         dout => dout,
         clk => clk,
			en => en,
         we => we
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
		en <= '1';
		we <= '1';
		ram_input <= 	(('0',"100100100100100"),
							('0',"010010010010010"),
							('1',"100100100100100"),
							('1',"010010010010010")
						);
      wait for clk_period*2;
		
		addr <= 1;
		wait for clk_period*2;
		addr <= 2;
		wait for clk_period*2;
      -- insert stimulus here 

      wait;
   end process;

END;
