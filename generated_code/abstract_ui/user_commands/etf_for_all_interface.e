note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_FOR_ALL_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent for_all
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				TRUE
			then
				out := "for_all"
			else
				etf_cmd_error := True
			end
		end

feature -- command 
	for_all
    	deferred
    	end
end
