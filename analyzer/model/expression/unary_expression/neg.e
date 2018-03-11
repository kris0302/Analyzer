note
	description: "Summary description for {NEG}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATIVE

inherit
	EXPRESSION
	UNARY

create
	make_negative

feature
	make_negative
		do
			create children.make_empty
			right := create {UNKNOWN_EXPRESSION}.make children := "?"
			children_status := "CONSTANT"
			str := "- "
		end

feature
	accept (v:VISITOR)
		do
			v.visit_negative (current)
		end

end
