note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_RESET
inherit
	ETF_RESET_INTERFACE
		redefine reset end
create
	make
feature -- command
	reset
    	do
			-- perform some update on the model state
			if
				model.tree[1] ~ model.unknown
			then
				model.set_report ("Error (Initial expression cannot be reset).")
				else
					model.reset
					model.print_out_expression
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
