note
	description: "Summary description for {UNION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNION

inherit
	EXPRESSION
	COMPOSITE

create
	make_union

feature
	make_union
		do
			create children.make_empty
			left := create {UNKNOWN_EXPRESSION}.make children.force ("?", 1)
			right := create {NIL_EXPRESSION}.make children.force ("nil", 2)

			create children_status.make_empty
			children_status.force ("?", 1)
			children_status.force ("NIL", 2)
			str := " \/ "
		end

feature
	accept (v: VISITOR)
	 do
	 	v.visit_union (current)
	 end

end
