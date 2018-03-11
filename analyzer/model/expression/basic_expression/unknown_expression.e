note
	description: "Summary description for {UNKNOWN_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNKNOWN_EXPRESSION

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
			s := ("?")
			create str.make_empty
			str := ("?")
		end

feature
	accept(v: VISITOR)
		do
			v.visit_unknown (current)
		end



end
