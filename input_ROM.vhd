----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:43:49 01/26/2018 
-- Design Name: 
-- Module Name:    input_ROM - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use work.fixed_point_array_pkg.all;
use work.fixed_point_package.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity input_ROM is
generic(
		entry_length : integer
	);
	port(
		clk	: in std_logic;
		en 	: in std_logic;
		address : in integer;
		ROM_data	: out fixed_point
	);
end input_ROM;


architecture input of input_ROM is
	signal mem : fixed_point_array(0 to entry_length-1):=(
('1', "000000000111101"),('1', "000000000010000"),('1', "000000000000001"),('1', "000000000001111"),('0', "000000000101110"),('0', "000000000111011"),('0', "000000000110010"),('0', "000000000110111"),('1', "000000000100011"),('1', "000000000111011"),('0', "000000000110011"),('0', "000000000101111"),('1', "000000000001011"),('1', "000000000111101"),('0', "000000000000111"),('0', "000000000001100"),('1', "000000001000000"),('1', "000000000111001"),('1', "000000001000000"),('0', "000000000010001"),('1', "000000000101000"),('0', "000000000100111"),('1', "000000000000001"),('1', "000000001000000"),('1', "000000000100110"),('0', "000000000010110"),('0', "000000000100100"),('0', "000000000111100"),('0', "000000000101001"),('1', "000000000111010"),('1', "000000001000000"),('1', "000000000100110"),('0', "000000000101111"),('0', "000000000111101"),('0', "000000000011111"),('1', "000000000111010"),('1', "000000001000000"),('1', "000000001000000"),('1', "000000001000000"),('1', "000000001000000"),('1', "000000000100110"),('0', "000000000101111"),('1', "000000000110000"),('1', "000000001000000"),('1', "000000001000000"),('1', "000000001000000"),('1', "000000001000000"),('1', "000000000111111"),('0', "000000000100010"),('1', "000000000011011"),('1', "000000001000000"),('1', "000000000111010"),('1', "000000000111101"),('1', "000000000011111"),('0', "000000000011111"),('0', "000000000110000"),('1', "000000000110011"),('0', "000000000111000"),('0', "000000000110110"),('0', "000000000111101"),('0', "000000000100011"),('1', "000000000101110"),('0', "000000001000000")
);
begin
	process(clk) 
	begin -- process
		if clk'event and clk = '1' then
			if (en = '1') then
				ROM_data <= mem(address);
			end if;
		end if;
	end process;
end input;

architecture test of input_ROM is
	signal mem : fixed_point_array(0 to entry_length-1):=(
('0', "000000001000000"),('0', "000000010000000"),('0', "000000011000000"),('0', "000000100000000") -- 1 2 3 4
);
begin
	process(clk) 
	begin -- process
		if clk'event and clk = '1' then
			if (en = '1') then
				ROM_data <= mem(address);
			end if;
		end if;
	end process;
end test;