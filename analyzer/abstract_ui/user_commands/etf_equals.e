note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_EQUALS
inherit
	ETF_EQUALS_INTERFACE
		redefine equals end
create
	make
feature -- command
	equals
    	do
			-- perform some update on the model state
			--model.default_update
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_binary_expression (create {EQUALS}.make_equals," = ")
					model.print_out_expression
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
