----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:29:40 12/01/2017 
-- Design Name: 
-- Module Name:    controller2 - Behavioral 
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

entity controller2 is
	port(
		clk	:IN std_logic;
		reset :IN std_logic;
		start	:IN std_logic;
		co 	:IN std_logic;
		we		:OUT std_logic;
		cnt_en:OUT std_logic;
		ready :OUT std_logic;
		ram_en:OUT std_logic;
		ram_we:OUT std_logic
	);
end controller2;

architecture layer2_ctrl of controller2 is
	type state_type is (s0, s1, s2, s3);
	signal p_state, n_state : state_type;
begin

-- p_state logic
process (clk, reset)
begin
	if (reset = '1') then
		p_state <= s0;
	elsif (clk'event and clk = '1') then
		p_state <= n_state;
	end if;
end process;

-- n_state logic
process (p_state, start, co)
begin
	case p_state is 
	
		when s0 =>
			if start = '1' then
				n_state <= s1;
			else
				n_state <= s0;
			end if;
			
		when s1 =>
			n_state <= s2;
		
		when s2 =>
			if co = '1' then
				n_state <= s3;
			else
				n_state <= s2;
			end if;
		
		when s3 =>
			n_state <= s0;
	
	end case;
end process;

-- output logis
process (p_state)
begin
	case p_state is 
		when s0 => 
			we <= '0';
			cnt_en <= '0';
			ready <= '0';
			ram_we <= '1';
			ram_en <= '1';		
		when s1 =>
			we <= '0';
			cnt_en <= '1';
			ready <= '0';
			ram_we <= '0';
			ram_en <= '1';		
		
		when s2 =>
			we <= '1';
			cnt_en <= '1';
			ready <= '0';			
			ram_we <= '0';
			ram_en <= '1';		
		
		when s3 =>
			we <= '0';
			cnt_en <= '0';
			ready <= '1';		
			ram_we <= '0';
			ram_en <= '1';		
	
	end case;
end process;

end layer2_ctrl;

