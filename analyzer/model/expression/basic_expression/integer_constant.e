note
	description: "Summary description for {INTEGER_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTEGER_CONSTANT

inherit
	EXPRESSION
	CONSTANT

create
	make

feature
	i: INTEGER_64

feature
	make (int: INTEGER_64)
		do
			i := int
			create str.make_empty
			str := int.out
		end

feature
	accept (v: VISITOR)
		do
			v.visit_integer (CURRENT)
		end

end
