note
	description: "Summary description for {THERE_EXISTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	THERE_EXISTS

inherit
	EXPRESSION
	UNARY

create
	make_exists

feature
	make_exists
		do
			create children.make_empty
			right := create {UNKNOWN_EXPRESSION}.make children := "?"
			children_status := "CONSTANT"
			str := "|| "
		end

feature
	accept (v:VISITOR)
		do
			v.visit_exists (current)
		end

end


