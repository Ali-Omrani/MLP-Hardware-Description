--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;
use ieee.std_logic_unsigned.all;
--use ieee.numeric_std.all;

package fixed_point_package is
	type fixed_point is 
	 record
		sign : std_logic;
		magnitude : std_logic_vector(14 downto 0);
	end record;
-- type <new_type> is
--  record
--    <type_name>        : std_logic_vector( 7 downto 0);
--    <type_name>        : std_logic;
-- end record;
--
-- Declare constants
--
-- constant <constant_name>		: time := <time_unit> ns;
-- constant <constant_name>		: integer := <value;
--
-- Declare functions and procedure
--
	function "+" (a, b : fixed_point) return fixed_point;
	function "*" (a, b : fixed_point) return fixed_point;
-- function <function_name>  (signal <signal_name> : in <type_declaration>) return <type_declaration>;
-- procedure <procedure_name> (<type_declaration> <constant_name>	: in <type_declaration>);
--

end fixed_point_package;

package body fixed_point_package is

---- Example 1
	function "+" (a, b : fixed_point) return fixed_point is
		variable result: fixed_point;
	begin
		if ( a.sign = '0' and b.sign = '0') then
			result.sign := '0';
			result.magnitude := a.magnitude + b.magnitude;
		
		elsif ( a.sign = '1' and b.sign = '1') then
			result.sign := '1';
			result.magnitude := a.magnitude + b.magnitude;
		
		elsif ( a.sign = '0' and b.sign = '1') then
			if (a.magnitude < b.magnitude) then
				result.sign := '1';
			else 
				result.sign := '0';
			end if;
			if (result.sign ='1') then
				result.magnitude := b.magnitude - a.magnitude;
			else
				result.magnitude := a.magnitude - b.magnitude;
			end if;
			--result.magnitude := abs(signed(a.magnitude) - signed(b.magnitude));
			
		else
		if (a.magnitude > b.magnitude) then
				result.sign := '1';
			else 
				result.sign := '0';
			end if;
			
			if (result.sign ='1') then
				result.magnitude := a.magnitude - b.magnitude;
			else
				result.magnitude := b.magnitude - a.magnitude;
			end if;
		end if;
		return result;
	end "+";

function "*" (a, b : fixed_point) return fixed_point is
		variable result: fixed_point;
		variable temp : std_logic_vector (29 downto 0);
	begin
		--if ((a.sign ='1' and b.sign ='0') or (a.sign ='0' and b.sign ='1') )then
		--	result.sign := '1';
		--else 
		--	result.sign := '0';
		--end if;
		
		--result.magnitude := "000000000000000";
		result.sign := a.sign XOR b.sign;
		temp := a.magnitude * b.magnitude ;
		result.magnitude := temp (20 downto 6);
		return result;
	end "*";


--	function "*" (a, b : fixed_point) return fixed_point is
--		variable result: fixed_point;
--	begin
--		result := a * b;
--		return result;
--	end "*";

--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
end fixed_point_package;
