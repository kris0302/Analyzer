note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_INTEGER_CONSTANT
inherit
	ETF_INTEGER_CONSTANT_INTERFACE
		redefine integer_constant end
create
	make
feature -- command
	integer_constant(c: INTEGER_64)
    	local
    		i: INTEGER_CONSTANT
    	do
			-- perform some update on the model state
			create i.make (c)
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
				model.insert_constant (i,"INTEGER")
				model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
