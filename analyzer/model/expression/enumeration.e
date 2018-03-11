note
	description: "Summary description for {ENUMERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ENUMERATION

inherit
	EXPRESSION

feature
	children: ARRAY[EXPRESSION]
	children_type: ARRAY[STRING]
	children_status: ARRAY[STRING]

feature

	set_next (e: EXPRESSION;str: STRING)
		do
			children.force (e, children.count + 1)
			children_type.force (str, children_type.count + 1)
		end

	set_last (e: EXPRESSION; str: STRING)
		do
			children[children.count] := e
			children_type[children_type.count] := str
		end

end
