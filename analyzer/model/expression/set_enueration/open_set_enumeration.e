note
	description: "Summary description for {OPEN_SET_ENUMERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OPEN_SET_ENUMERATION

inherit
	EXPRESSION
	ENUMERATION

create
	make_open_set_enumeration

feature
	make_open_set_enumeration
		do
			create children.make_empty
			children.force (create {UNKNOWN_EXPRESSION}.make, 1)
			create children_type.make_empty
			children_type.force ("?", 1)
			create children_status.make_empty
			children_status.force ("CONSTANT", 1)
		end

feature
	accept (v:VISITOR)
		do
			v.visit_open_set_enumeration (current)
		end

end
