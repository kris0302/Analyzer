note
	description: "Summary description for {PRETTY_PRINT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PRETTY_PRINT

inherit
	VISITOR

create
	make

feature
	text: STRING

feature{NONE}
	make
		do
			create text.make_empty
		end

feature{ETF_MODEL}
	reset
		do
			make
		end

feature -- binary	

	composite(a: COMPOSITE)
		local
			print_left: PRETTY_PRINT
			print_right: PRETTY_PRINT
		do
			create print_left.make
			create print_right.make
			a.left.accept (print_left)
			a.right.accept (print_right)
			text := "(" + print_left.text + a.str + print_right.text + ")"
		end

	visit_addition (a: ADDITION)
		do
			current.composite (a)
		end

	visit_subtraction (a: SUBTRACTION)
		do
			current.composite (a)
		end

	visit_multiplication (a: MULTIPLICATION)
		do
			current.composite (a)
		end

	visit_division (a: DIVISION)
		do
			current.composite (a)
		end

	visit_conjoin (a: CONJOIN)
		do
			current.composite (a)
		end

	visit_disjoin (a: DISJOIN)
		do
			current.composite (a)
		end

	visit_imply (a: IMPLY)
		do
			current.composite (a)
		end

	visit_equals (a: EQUALS)
		do
			current.composite (a)
		end

	visit_gt(a: GREATER_THAN)
		do
			current.composite (a)
		end

	visit_lt (a: LESS_THAN)
		do
			current.composite (a)
		end

	visit_union (a: UNION)
		do
			current.composite (a)
		end

	visit_intersection (a: INTERSECTION)
		do
			current.composite (a)
		end

	visit_difference (a: DIFFERENCE)
		do
			current.composite (a)
		end




feature -- constant
	visit_boolean (b: BOOLEAN_CONSTANT)
		do
			text := (b.boolean.out)
		end

	visit_integer (i: INTEGER_CONSTANT)
		do
			text := i.i.out
		end

	visit_nil (n: NIL_EXPRESSION)
		do
			text := n.s.out
		end

	visit_unknown (u: UNKNOWN_EXPRESSION)
		do
			text := u.s.out
		end

feature -- unary

	unary (a: UNARY)
		local
			print_right: PRETTY_PRINT
		do
			create print_right.make
			a.right.accept (print_right)
			text := "(" + a.str + print_right.text + ")"
		end

	visit_negative (a: NEGATIVE)
		do
			current.unary (a)
		end

	visit_negation (a: NEGATION)
		do
			current.unary (a)
		end

	visit_sum (a: SUM)
		do
			current.unary (a)
		end

	visit_for_all (a: FOR_ALL)
		do
			current.unary (a)
		end

	visit_exists (a: THERE_EXISTS)
		do
			current.unary (a)
		end

feature -- ENUMERATION

	enumeration (a: ENUMERATION)
		local
			m: INTEGER
			p: PRETTY_PRINT
			p2: PRETTY_PRINT
		do
			create p2.make
			create p.make

			text.append ("{")
			from m := 1
			until m = a.children.count
			loop
				a.children[m].accept (p)
				text := text + p.text
				if m < a.children.count
				then
					a.children.at (m+1).accept (p2)
					if not p2.text.is_equal ("}")
					then text.append (", ") end
				end
--				create p.make
				m := m + 1
			end
			create p.make
			a.children[m].accept (p)
			if not p.text.is_equal ("}") then text.append (p.text) end
			text.append ("}")
		end

	visit_open_set_enumeration (a: OPEN_SET_ENUMERATION)
		do
			current.enumeration (a)
		end

	visit_close_set_enumeration (a: CLOSE_SET_ENUMERATION)
		do
			text := "}"
		end

end
