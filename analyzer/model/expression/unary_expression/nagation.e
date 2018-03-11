note
	description: "Summary description for {NAGATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATION

inherit
	EXPRESSION
	UNARY

create
	make_negation

feature
	make_negation
		do
			create children.make_empty
			right := create {UNKNOWN_EXPRESSION}.make children := "?"
			children_status := "CONSTANT"
			str := "! "
		end

feature
	accept (v:VISITOR)
		do
			v.visit_negation (current)
		end

end

