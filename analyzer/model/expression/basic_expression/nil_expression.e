note
	description: "Summary description for {NIL_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NIL_EXPRESSION

inherit
	EXPRESSION
	CONSTANT

create
	make

feature
	s: STRING

feature
	make
		do
			s := ("nil")
			create str.make_empty
			str := ("nil")
		end

feature
	accept(v: VISITOR)
		do
			v.visit_nil (current)
		end



end
