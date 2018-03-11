note
	description: "Summary description for {FOR_ALL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FOR_ALL
inherit
	EXPRESSION
	UNARY

create
	make_for_all

feature
	make_for_all
		do
			create children.make_empty
			right := create {UNKNOWN_EXPRESSION}.make children := "?"
			children_status := "CONSTANT"
			str := "&& "
		end

feature
	accept (v:VISITOR)
		do
			v.visit_for_all (current)
		end

end

