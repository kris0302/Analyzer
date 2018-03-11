note
	description: "Summary description for {CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	CONSTANT
inherit
	EXPRESSION

feature
	str: STRING

feature
 	to_string: STRING
 		do
 			create str.make_empty
 			Result := str
 		end

end
