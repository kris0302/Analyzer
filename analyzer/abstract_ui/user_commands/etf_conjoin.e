note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_CONJOIN
inherit
	ETF_CONJOIN_INTERFACE
		redefine conjoin end
create
	make
feature -- command
	conjoin
    	do
			-- perform some update on the model state
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_binary_expression (create {CONJOIN}.make_conjoin," && ")
					model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
