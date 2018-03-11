note
	description: "Summary description for {BOOLEAN_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOOLEAN_CONSTANT

inherit
	EXPRESSION
	CONSTANT

create
	make

feature
	boolean: BOOLEAN

feature
	make (boo: BOOLEAN)
		do
			boolean := boo
			create str.make_empty
			str := boo.out
		end

feature
	accept (v: VISITOR)
		do
			v.visit_boolean (CURRENT)
		end

end
