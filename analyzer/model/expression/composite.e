note
	description: "Summary description for {COMPOSITE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMPOSITE
inherit
	EXPRESSION

feature
	left: EXPRESSION
	right: EXPRESSION
	children: ARRAY[STRING]
	children_status: ARRAY[STRING]
	str: STRING

feature
	set_left(e: EXPRESSION)
		do
			left := e
		end

	set_right(e: EXPRESSION)
		do
			right := e
		end

	set_status_left(s: STRING)
		do
			children_status[1] := s
		end

	set_status_right(s: STRING)
		do
			children_status[2] := s
		end
end
