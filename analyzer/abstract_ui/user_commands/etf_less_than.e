note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_LESS_THAN
inherit
	ETF_LESS_THAN_INTERFACE
		redefine less_than end
create
	make
feature -- command
	less_than
    	do
			-- perform some update on the model state
			-- model.default_update
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_binary_expression (create {LESS_THAN}.make_lt," < ")
					model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
