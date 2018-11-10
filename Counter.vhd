----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:11:55 11/30/2017 
-- Design Name: 
-- Module Name:    counter - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity counter is
	PORT(	
		clk:	IN std_logic;
		reset:IN std_logic;
		en :	IN std_logic;
		din :	IN INTEGER;
		dout: OUT INTEGER;
		co : 	OUT std_logic
	);
end counter;

architecture Behavioral of counter is
	signal cnt : INTEGER := 0;
	signal cnt_limit : INTEGER :=8;
begin
	process(clk)
	begin -- process
		if reset = '1' then
			cnt_limit <= din;
			cnt <= 0;
			co <= '0';
		elsif clk'event and clk = '1' then
			if cnt = cnt_limit then
				co <= '1';
			elsif en = '1' then
				cnt <= cnt+1;
			end if;
		end if;
		
	end process;
	dout <= cnt;
end Behavioral;

