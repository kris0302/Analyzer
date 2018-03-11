note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_BOOLEAN_CONSTANT
inherit
	ETF_BOOLEAN_CONSTANT_INTERFACE
		redefine boolean_constant end
create
	make
feature -- command
	boolean_constant(c: BOOLEAN)
    	local
    		b: BOOLEAN_CONSTANT
    	do
			-- perform some update on the model state
			create b.make (c)
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_constant (b, "BOOLEAN") model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
