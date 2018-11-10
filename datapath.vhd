----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:52:44 01/26/2018 
-- Design Name: 
-- Module Name:    datapath - Behavioral 
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
use work.fixed_point_array_pkg.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity datapath is
	generic(
		input_length 	:integer := 63;
		neuron_count_L1:integer := 20;
		neuron_count_L2:integer := 10
	);
	port(
		clk	: IN std_logic;
		reset : IN std_logic;
		start : IN std_logic;
		ready : OUT std_logic;
		output: OUT fixed_point_array (0 to neuron_count_L2-1) -- one ouput per neuron
	);
end datapath;

architecture test of datapath is
	signal start1, start2, ready1, ready2 : std_logic;
	signal layer1_out, layer2_in : fixed_point_array (0 to neuron_count_L1-1); 
	signal layer2_out : fixed_point_array (0 to neuron_count_L2-1);
begin
	l1 : entity work.layer1(test)
		generic map(input_length => input_length, neuron_count => neuron_count_L1)
		port map(clk, reset, start1, ready1, layer1_out);
	l2 : entity work.layer2(test)
		generic map(input_length => neuron_count_L1, neuron_count => neuron_count_L2)
		port map(clk , reset, start2, layer2_in, ready2, layer2_out);
	-- input to layer1
	start1 <= start;
	-- passing from layer1 to layer2
	start2 <= ready1;
	layer2_in <= layer1_out;
	-- output from layer2
	output <= layer2_out;
	ready <= ready2;
end test;

architecture Behavioral of datapath is
	signal start1, start2, ready1, ready2 : std_logic;
	signal layer1_out, layer2_in : fixed_point_array (0 to neuron_count_L1-1); 
	signal layer2_out : fixed_point_array (0 to neuron_count_L2-1);
begin
	l1 : entity work.layer1(Behavioral)
		generic map(input_length => input_length, neuron_count => neuron_count_L1)
		port map(clk, reset, start1, ready1, layer1_out);
	l2 : entity work.layer2(Behavioral)
		generic map(input_length => neuron_count_L1, neuron_count => neuron_count_L2)
		port map(clk , reset, start2, layer2_in, ready2, layer2_out);
	-- input to layer1
	start1 <= start;
	-- passing from layer1 to layer2
	start2 <= ready1;
	layer2_in <= layer1_out;
	-- output from layer2
	output <= layer2_out;
	ready <= ready2;
end Behavioral;

