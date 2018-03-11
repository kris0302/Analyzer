note
	description: "Summary description for {ADDITION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ADDITION

inherit
	EXPRESSION
	COMPOSITE

create
	make_add

feature
	make_add
		do
			create children.make_empty
			left := create {UNKNOWN_EXPRESSION}.make children.force ("?", 1)
			right := create {NIL_EXPRESSION}.make children.force ("nil", 2)
			create children_status.make_empty
			children_status.force ("?", 1)
			children_status.force ("NIL", 2)
			str := " + "
		end

feature
	accept (v: VISITOR)
	 do
	 	v.visit_addition (current)
	 end

end
