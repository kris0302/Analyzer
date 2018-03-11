note
	description: "Summary description for {IMPLY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	IMPLY

inherit
	EXPRESSION
	COMPOSITE

create
	make_imply

feature
	make_imply
		do
			create children.make_empty
			left := create {UNKNOWN_EXPRESSION}.make children.force ("?", 1)
			right := create {NIL_EXPRESSION}.make children.force ("nil", 2)
			create children_status.make_empty
			children_status.force ("?", 1)
			children_status.force ("NIL", 2)
			str := " => "
		end

feature
	accept (v: VISITOR)
	 do
	 	v.visit_imply (current)
	 end

end
