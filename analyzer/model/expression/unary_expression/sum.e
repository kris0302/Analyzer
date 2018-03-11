note
	description: "Summary description for {SUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SUM

inherit
	EXPRESSION
	UNARY

create
	make_sum

feature
	make_sum
		do
			create children.make_empty
			right := create {UNKNOWN_EXPRESSION}.make children := "?"
			children_status := "CONSTANT"
			str := "+ "
		end

feature
	accept (v:VISITOR)
		do
			v.visit_sum (current)
		end

end

