note
	description: "Summary description for {TYPE_CHECK}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECK

inherit
	VISITOR

create
	make

feature
	error_text: STRING
	div_error_text: STRING
	already_fully_specified: STRING
	not_fully_specified: STRING

	set_type: STRING
feature
	make
		do
			create error_text.make_empty
			create div_error_text.make_empty
			create already_fully_specified.make_empty
			create not_fully_specified.make_empty
			create set_type.make_empty
		end

feature -- binary

	composite_integer (a: COMPOSITE)
		local
			left:TYPE_CHECK
			right:TYPE_CHECK
			pp: PRETTY_PRINT
			exp: EXPRESSION
		do
			create pp.make
			check attached {EXPRESSION} a as e then exp := e end
			exp.accept (pp)
			create left.make
			create right.make
			a.left.accept (left)
			a.right.accept (right)
			if
				a.children[1].is_equal ("BOOLEAN") or a.children[2].is_equal ("BOOLEAN")
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				(not error_text.is_empty) or (not left.error_text.is_empty) or (not right.error_text.is_empty)
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end

			if
				not div_error_text.is_empty
			then
				error_text := div_error_text
			end
		end

	composite_boolean (a: COMPOSITE)
		local
			left:TYPE_CHECK
			right:TYPE_CHECK
			pp: PRETTY_PRINT
			exp: EXPRESSION
		do
			create pp.make
			check attached {EXPRESSION} a as e then exp := e end
			exp.accept (pp)
			create left.make
			create right.make
			a.left.accept (left)
			a.right.accept (right)
			if
				a.children[1].is_equal ("INTEGER") or a.children[2].is_equal ("INTEGER")
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				(not error_text.is_empty) or (not left.error_text.is_empty) or (not right.error_text.is_empty)
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end
		end

	visit_addition (a: ADDITION)
		do
			current.composite_integer (a)
		end

	visit_subtraction (a: SUBTRACTION)
		do
			current.composite_integer (a)
		end

	visit_multiplication (a: MULTIPLICATION)
		do
			current.composite_integer (a)
		end

	visit_division (a: DIVISION)
		local
			e:EVALUATION
		do
			create e.make
			current.composite_integer (a)
			a.right.accept (e)
			if
				a.children[2].is_equal ("INTEGER") and e.result_integer = 0
			then
				div_error_text := "Error (Divisor is zero)."
			end
		end

	visit_conjoin (a: CONJOIN)
		do
			current.composite_boolean (a)
		end

	visit_disjoin (a: DISJOIN)
		do
			current.composite_boolean (a)
		end

	visit_imply (a: IMPLY)
		do
			current.composite_boolean (a)
		end

	visit_equals (a: EQUALS)
	local
			left:TYPE_CHECK
			right:TYPE_CHECK
			pp: PRETTY_PRINT
			exp: EXPRESSION
		do
			create pp.make
			check attached {EXPRESSION} a as e then exp := e end
			exp.accept (pp)
			create left.make
			create right.make
			a.left.accept (left)
			a.right.accept (right)
			if
				(a.children[1].is_equal ("INTEGER") and a.children[2].is_equal ("BOOLEAN"))
				or (a.children[1].is_equal ("BOOLEAN") and a.children[2].is_equal ("INTEGER"))
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				(not error_text.is_empty) or (not left.error_text.is_empty) or (not right.error_text.is_empty)
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end
		end

	visit_gt(a: GREATER_THAN)
		do
			current.composite_integer (a)
		end

	visit_lt (a: LESS_THAN)
		do
			current.composite_integer (a)
		end

	composite_set (a: COMPOSITE)
		local
			left:TYPE_CHECK
			right:TYPE_CHECK
			pp: PRETTY_PRINT
			exp: EXPRESSION
		do
			create pp.make
			check attached {EXPRESSION} a as e then exp := e end
			exp.accept (pp)
			create left.make
			create right.make
			a.left.accept (left)
			a.right.accept (right)
			if
				(not left.set_type.is_empty) and (not right.set_type.is_empty)
				and (left.set_type.is_equal (right.set_type)) and left.set_type.is_equal ("integer_set")
			then
				else
					error_text := "Error (Expression is not type-correct)."
			end

			if
				(not error_text.is_empty) or (not left.error_text.is_empty) or (not right.error_text.is_empty)
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end
		end

	visit_union (a: UNION)
		do
			current.composite_set (a)
		end

	visit_intersection (a: INTERSECTION)
		do
			current.composite_set (a)
		end

	visit_difference (a: DIFFERENCE)
		do
			current.composite_set (a)
		end

feature -- constant
	visit_boolean (b: BOOLEAN_CONSTANT)
--		local
--			pp: PRETTY_PRINT
		do
--			create pp.make
--			b.accept (pp)
--			if
--				pp.text.has ('?')
--			then
--				not_fully_specified := "Error (Expression is not yet fully specified)."
--				else
--					already_fully_specified := "Error (Expression is already fully specified)."
--			end
		end

	visit_integer (i: INTEGER_CONSTANT)

		do

		end

	visit_nil (n: NIL_EXPRESSION)
		do

		end

	visit_unknown (u: UNKNOWN_EXPRESSION)
		do

		end

feature -- unary

	unary_integer(a: UNARY)
		local
			right: TYPE_CHECK
			pp: PRETTY_PRINT
		do
			create right.make
			create pp.make
			a.right.accept (right)
			a.right.accept (pp)
			if
				a.children.is_equal ("BOOLEAN")
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				(not error_text.is_empty) or (not right.error_text.is_empty)
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end

		end

	visit_negative (a: NEGATIVE)
		do
			current.unary_integer (a)
		end

	visit_negation (a: NEGATION)
		local
			right: TYPE_CHECK
			pp: PRETTY_PRINT
		do
			create right.make
			create pp.make
			a.right.accept (right)
			a.right.accept (pp)
			if
				a.children.is_equal ("INTEGER")
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				(not error_text.is_empty) or (not right.error_text.is_empty)
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end

		end

	visit_sum (a: SUM)
		local
			right: TYPE_CHECK
			pp: PRETTY_PRINT
		do
			create right.make
			create pp.make
			a.right.accept (right)
			a.right.accept (pp)
			if
				right.set_type.is_empty or (not right.set_type.is_equal ("integer_set"))
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				(not error_text.is_empty) or (not right.error_text.is_empty)
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end

		end

	visit_for_all (a: FOR_ALL)
		local
			right: TYPE_CHECK
			pp: PRETTY_PRINT
			flag: BOOLEAN
			op: OPEN_SET_ENUMERATION
		do
			create op.make_open_set_enumeration
			flag := false
			create right.make
			create pp.make
			a.right.accept (right)
			a.right.accept (pp)
			if
				right.set_type.is_empty or (not right.set_type.is_equal ("boolean_set"))
			then
				error_text := "Error (Expression is not type-correct)."
				flag := true
			end

			if
				flag = false
			then
				check attached {OPEN_SET_ENUMERATION} a.right as o then op := o end
				if op.children.count < 3 then error_text := "Error (Expression is not type-correct)."
				end
			end

			if
				(not error_text.is_empty) or (not right.error_text.is_empty)
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end

		end


	visit_exists (a: THERE_EXISTS)
		local
			right: TYPE_CHECK
			pp: PRETTY_PRINT
			flag: BOOLEAN
			op: OPEN_SET_ENUMERATION
		do
			create op.make_open_set_enumeration
			flag := false
			create right.make
			create pp.make
			a.right.accept (right)
			if
				right.set_type.is_empty or (not right.set_type.is_equal ("boolean_set"))
			then
				error_text := "Error (Expression is not type-correct)."
				flag := true
			end

			if
				flag = false
			then
				check attached {OPEN_SET_ENUMERATION} a.right as o then op := o end
				if op.children.count < 3 then error_text := "Error (Expression is not type-correct)."
				end
			end

			if
				(not error_text.is_empty) or (not right.error_text.is_empty)
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end

		end


feature --enumeration
	visit_open_set_enumeration (a: OPEN_SET_ENUMERATION)
		local
			m: INTEGER
			right: TYPE_CHECK
			pp: PRETTY_PRINT
			ev: EVALUATION
		do
			create right.make
			create pp.make
			create ev.make

			from m := 1
			until m > a.children_type.count
			loop
				a.children[m].accept (right)
				a.children[m].accept (pp)
				a.children[m].accept (ev)
				if
					ev.re.is_integer and (set_type.is_empty or set_type.is_equal ("integer_set"))
				then
					set_type := "integer_set"
					elseif
						ev.re.is_boolean and (set_type.is_empty or set_type.is_equal ("boolean_set"))
					then
						set_type := "boolean_set"
						elseif a.children_type[m].is_equal ("{") or a.children_type[m].is_equal ("}") then


							set_type := "mix_set"
				end

				m := m + 1
			end

			if
				set_type.is_equal ("mix_set")
			then
				error_text := "Error (Expression is not type-correct)."
			end

			if
				pp.text.has ('?')
			then
				not_fully_specified := "Error (Expression is not yet fully specified)."
				else
					already_fully_specified := "Error (Expression is already fully specified)."
			end
		end

	visit_close_set_enumeration (a: CLOSE_SET_ENUMERATION)
		do

		end
end
