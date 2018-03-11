note
	description: "Summary description for {UNARY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	UNARY

inherit
	EXPRESSION

feature
	right: EXPRESSION
	children: STRING
	children_status: STRING
	str: STRING

feature
	set_right(e: EXPRESSION)
		do
			right := e
		end

	set_children(s: STRING)
		do
			children := s
		end

	set_status (s: STRING)
		do
			children_status := s
		end

end
