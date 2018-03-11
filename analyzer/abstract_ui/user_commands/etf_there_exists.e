note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_THERE_EXISTS
inherit
	ETF_THERE_EXISTS_INTERFACE
		redefine there_exists end
create
	make
feature -- command
	there_exists
    	do
			-- perform some update on the model state
			--model.default_update
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_unary_operation (create {THERE_EXISTS}.make_exists,"|| ")
					model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
