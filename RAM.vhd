----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:51:20 01/20/2018 
-- Design Name: 
-- Module Name:    generic_ram_fixed_point - Behavioral 
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
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.fixed_point_array_pkg.all;

use ieee.std_logic_unsigned.all;

use work.fixed_point_package.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RAM is 
	GENERIC (entry_length : integer := 21 );
	PORT (
		clk		:in std_logic;
		we			:in std_logic;
		en			:in std_logic;
		address	:in integer;
		input 	:in fixed_point_array(0 to entry_length-1 );
		dout		:out fixed_point
	);
	
end RAM;

architecture input of RAM is
	signal RAM : fixed_point_array(0 to entry_length-1); 
begin
process(clk) 
	begin -- process
		if clk'event and clk = '1' then
			if en = '1' then
				if we = '1' then
					RAM <= input;
				end if;
				dout <= RAM(address);
			end if;
		end if;
	end process;
end input;

