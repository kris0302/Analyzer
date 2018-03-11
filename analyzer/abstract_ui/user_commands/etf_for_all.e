note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_FOR_ALL
inherit
	ETF_FOR_ALL_INTERFACE
		redefine for_all end
create
	make
feature -- command
	for_all
    	do
			-- perform some update on the model state
			--model.default_update
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_unary_operation (create {FOR_ALL}.make_for_all,"&& ")
					model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
