note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NEGATION
inherit
	ETF_NEGATION_INTERFACE
		redefine negation end
create
	make
feature -- command
	negation
    	do
			-- perform some update on the model state
			--model.default_update
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_unary_operation (create {NEGATION}.make_negation,"! ")
					model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
