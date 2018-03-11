note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_CLOSE_SET_ENUMERATION
inherit
	ETF_CLOSE_SET_ENUMERATION_INTERFACE
		redefine close_set_enumeration end
create
	make
feature -- command
	close_set_enumeration
    	do
			-- perform some update on the model state
			model.type_check_query
			if
				model.has_error
			then
				model.print_out_expression
				else
					model.insert_close_set_enumeration ("}")
					model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
