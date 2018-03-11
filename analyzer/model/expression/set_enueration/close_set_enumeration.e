note
	description: "Summary description for {CLOSE_SET_ENUMERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CLOSE_SET_ENUMERATION

inherit
	EXPRESSION
	CONSTANT

create
	make_close_set_enumeration

feature
	make_close_set_enumeration
		do
			str := "}"
		end

feature
	accept (v:VISITOR)
		do
			v.visit_close_set_enumeration (current)
		end



end
