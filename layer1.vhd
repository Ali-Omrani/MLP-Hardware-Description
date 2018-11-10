----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:20:14 01/25/2018 
-- Design Name: 
-- Module Name:    layer11 - Behavioral 
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



------ 63x20 ==== (input_length)x(neuron_count)
entity layer1 is
	generic(
		input_length : integer:=63;
		neuron_count: integer:=20
	);
	port(
		clk	: IN std_logic;
		reset : IN std_logic;
		start : IN std_logic;
		ready : OUT std_logic;
		output: OUT fixed_point_array (0 to neuron_count-1) -- one output per neuron
	);
end layer1;
---------------------------------------------- Behavioral ----------------------------------------------
architecture Behavioral of layer1 is
	signal weight2mult, mult2add, add2reg, regout, afout : fixed_point_array(0 to neuron_count-1);
	signal in2mult : fixed_point;
	signal address, cnt_limit : integer;
	signal cc, cnt_en , reg_we, af_en, rom_en : std_logic;

begin
	gen : for I in 0 to neuron_count-1 generate
		m: entity work.Multiplier(Behavioral)
			port map (weight2mult(i), in2mult, mult2add(i));
		d: entity work.Adder(Behavioral)
			port map (mult2add(i), regout(i), add2reg(i));
		r: entity work.My_Register(Behavioral)
			port map (clk, reset, reg_we, add2reg(i), regout(i));
		f: entity work.activation_func(Behavioral)
			port map (af_en, regout(i), afout(i));
	end generate;

	e0 : entity work.input_ROM(input)
		generic map(entry_length => input_length) 
		port map(clk, rom_en, address, in2mult);

	e1 : entity work.ROM(weight_L1)
		generic map(address_size => neuron_count, entry_length => input_length)
		port map(clk, rom_en, address, weight2mult);

	e2 : entity work.counter(Behavioral)
		port map(clk, reset, cnt_en, cnt_limit, address, cc);
		
	e3 : entity work.controller(layer1_ctrl)
		port map(clk, reset, start, cc, reg_we, cnt_en, af_en, rom_en);
	
	cnt_limit <= input_length-1;
	ready <= af_en;
	output <= afout;
end Behavioral;

---------------------------------------------- test arch ----------------------------------------------

architecture test of layer1 is
	signal weight2mult, mult2add, add2reg, regout, afout : fixed_point_array(0 to neuron_count-1);
	signal in2mult : fixed_point;
	signal address, cnt_limit : integer;
	signal cc, cnt_en , reg_we, af_en, rom_en : std_logic;

begin
	gen : for I in 0 to neuron_count-1 generate
		m: entity work.Multiplier(Behavioral)
			port map (weight2mult(i), in2mult, mult2add(i));
		d: entity work.Adder(Behavioral)
			port map (mult2add(i), regout(i), add2reg(i));
		r: entity work.My_Register(Behavioral)
			port map (clk, reset, reg_we, add2reg(i), regout(i));
		f: entity work.activation_func(Behavioral)
			port map (af_en, regout(i), afout(i));
	end generate;
	
	e0 : entity work.input_ROM(test)
		generic map(entry_length => input_length) 
		port map(clk, rom_en, address, in2mult);

	e1 : entity work.ROM(weight_test1)
		generic map(address_size => neuron_count, entry_length => input_length) 
		port map(clk, rom_en, address, weight2mult);

	e2 : entity work.counter(Behavioral)
		port map(clk, reset, cnt_en, cnt_limit, address, cc);
		
	e3 : entity work.controller(layer1_ctrl)
		port map(clk, reset, start, cc, reg_we, cnt_en, af_en, rom_en);
	
	cnt_limit <= input_length-1;
	ready <= af_en;
	output <= afout;
end test;







