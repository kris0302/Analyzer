note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NEGATIVE
inherit
	ETF_NEGATIVE_INTERFACE
		redefine negative end
create
	make
feature -- command
	negative
    	do
			-- perform some update on the model state
			--model.default_update
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_unary_operation (create {NEGATIVE}.make_negative,"- ")
					model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
