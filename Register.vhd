----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:25:25 12/15/2017 
-- Design Name: 
-- Module Name:    My_Register - Behavioral 
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
use work.fixed_point_package.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity My_Register is
	PORT (
			clk	:in std_logic;
			reset	:in std_logic;
			we 	:in std_logic;
			din 	:in fixed_point;
			dout	:out fixed_point
		);
end My_Register;

architecture Behavioral of My_Register is

begin
	process(clk, reset)
	begin
		if reset = '1' then
			dout <= ('0', "000000000000000");
		
		elsif clk'event and clk = '1' then
			if we = '1' then
				dout <= din;
			end if;
		end if;
		
	end process;
end Behavioral;
