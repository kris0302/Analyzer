note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_DISJOIN
inherit
	ETF_DISJOIN_INTERFACE
		redefine disjoin end
create
	make
feature -- command
	disjoin
    	do
			-- perform some update on the model state
		--model.default_update
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_binary_expression (create {DISJOIN}.make_disjoin," || ")
		    		model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
