note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_GREATER_THAN
inherit
	ETF_GREATER_THAN_INTERFACE
		redefine greater_than end
create
	make
feature -- command
	greater_than
    	do
			-- perform some update on the model state
			--model.default_update
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_binary_expression (create {GREATER_THAN}.make_gt," > ")
					model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
