----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:35:49 11/30/2017 
-- Design Name: 
-- Module Name:    activation_func - Behavioral 
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

entity activation_func is
	port (
		enable : IN std_logic;
		din : IN fixed_point;
		dout : OUT fixed_point
	);
end activation_func;

architecture Behavioral of activation_func is
	
begin
	process(din, enable) begin
		if( enable = '1') then
			if ( din.sign = '0' and din.magnitude > "000000000000000" ) then
				dout <= din;
			else
				dout <= ('0',"000000000000000");   
			end if;
		else
			dout <= ('0',"000000000000000");   
		end if;
	end process;

end Behavioral;

