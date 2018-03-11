note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_EVALUATE
inherit
	ETF_EVALUATE_INTERFACE
		redefine evaluate end
create
	make
feature -- command
	evaluate
    	do
			-- perform some update on the model state
--			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.evaluation
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
