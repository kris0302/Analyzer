note
	description: "Summary description for {EVALUATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EVALUATION

inherit
	VISITOR

create
	make

feature
	result_integer: INTEGER
	result_boolean: BOOLEAN
	result_set: LINKED_LIST[INTEGER_64]
	result_set_string: STRING
	re: STRING

feature
	make
		do
			create result_set.make
			create result_set_string.make_empty
			create re.make_empty
		end

feature -- binary

	composite_integer(a: COMPOSITE)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_integer := left.result_integer + right.result_integer
			end

			re := result_integer.out
		end

	visit_addition (a: ADDITION)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_integer := left.result_integer + right.result_integer
			end
			re := result_integer.out
		end

	visit_subtraction (a: SUBTRACTION)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_integer := left.result_integer - right.result_integer
			end
			re := result_integer.out
		end

	visit_multiplication (a: MULTIPLICATION)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_integer := left.result_integer * right.result_integer
			end
			re := result_integer.out
		end

	visit_division (a: DIVISION)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
			n: REAL_64
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				n := (left.result_integer / right.result_integer)
				result_integer := n.floor
				re := result_integer.out
			end
		end


	visit_conjoin (a: CONJOIN)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_boolean := left.result_boolean and right.result_boolean
			end
			re := result_boolean.out
		 end

	visit_disjoin (a: DISJOIN)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_boolean := left.result_boolean or right.result_boolean
			end re := result_boolean.out
		 end

	visit_imply (a: IMPLY)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_boolean := left.result_boolean implies right.result_boolean
			end re := result_boolean.out
		 end

	visit_equals (a: EQUALS)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				if
					a.children[1].is_equal ("BOOLEAN")
				then
					result_boolean := left.result_boolean = right.result_boolean
					else
						result_boolean := left.result_integer = right.result_integer
				end

			end re := result_boolean.out
		 end

	visit_gt(a: GREATER_THAN)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_boolean := (left.result_integer > right.result_integer)
			end re := result_boolean.out
		 end

	visit_lt (a: LESS_THAN)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
			n: REAL_64
		do
			create left.make
			create right.make
			create tc.make
			check attached {EXPRESSION} a as ex then exp := ex end
			exp.accept (tc)
			a.left.accept (left)
			a.right.accept (right)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_boolean := (left.result_integer < right.result_integer)
			end re := result_boolean.out
		 end

	visit_union (a: UNION)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
			o_left: OPEN_SET_ENUMERATION
			o_right: OPEN_SET_ENUMERATION
			m: INTEGER
			n: INTEGER_CONSTANT
		do
			create left.make
			create right.make
			create tc.make
			a.left.accept (left)
			a.right.accept (right)
			a.accept (tc)

			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				check attached {OPEN_SET_ENUMERATION} a.left as a1 then o_left := a1 end
				from m := 1
				until m = o_left.children.count
				loop
					check attached {INTEGER_CONSTANT} o_left.children[m] as ic then n := ic end
					if
						not result_set.has (n.i)
					then
						result_set.force (n.i)
					end
					m := m + 1
				end
				check attached {OPEN_SET_ENUMERATION} a.right as a2 then o_right := a2 end
				from m := 1
				until m = o_right.children.count
				loop
					check attached {INTEGER_CONSTANT} o_right.children[m] as ic then n := ic end
					if
						not result_set.has (n.i)
					then
						result_set.force (n.i)
					end
					m := m + 1
				end

				result_set_string.append ("{")
			from
				m := 1
			until
				m = result_set.count
			loop
				result_set_string.append (result_set[m].out + ", ")
				m := m + 1
			end
			result_set_string.append (result_set[m].out)
			result_set_string.append ("}")

			re := result_set_string
			end
		end

	visit_intersection (a: INTERSECTION)
		local
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			exp: EXPRESSION
			o_left: OPEN_SET_ENUMERATION
			o_right: OPEN_SET_ENUMERATION
			m: INTEGER
			n: INTEGER_CONSTANT
			i: INTEGER_CONSTANT
			j: INTEGER
		do
			create left.make
			create right.make
			create tc.make
			a.left.accept (left)
			a.right.accept (right)
			a.accept (tc)

			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				check attached {OPEN_SET_ENUMERATION} a.left as a1 then o_left := a1 end
				from m := 1
				until m = o_left.children.count
				loop
					check attached {INTEGER_CONSTANT} o_left.children[m] as ic then n := ic end
					check attached {OPEN_SET_ENUMERATION} a.right as a1 then o_right := a1 end
					from j := 1
					until j = o_right.children.count
					loop
						check attached {INTEGER_CONSTANT} o_right.children[j] as ic then i := ic end

						if
							n.i=i.i and not result_set.has (n.i)
						then
							result_set.force (n.i)
						end
						j := j + 1
					end
					m := m + 1
				end
				result_set_string.append ("{")
						from
							m := 1
						until
							m = result_set.count
						loop
							result_set_string.append (result_set[m].out + ", ")
							m := m + 1
						end
						result_set_string.append (result_set[m].out)
						result_set_string.append ("}")

						re := result_set_string
						end

		end

	visit_difference (a: DIFFERENCE)
		local
			e1: EVALUATION
			e2: EVALUATION
			left: EVALUATION
			right: EVALUATION
			tc: TYPE_CHECK
			m: INTEGER
			n : INTEGER
			i: INTEGER
			a1: LINKED_LIST[INTEGER_64]
			a2: LINKED_LIST[INTEGER_64]
			int: INTERSECTION
			uni: UNION
		do
			create left.make create right.make create tc.make create e1.make create e2.make create int.make_intersection create uni.make_union
			a.left.accept (left) a.right.accept (right)
			if tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				int.set_left (a.left) int.set_right (a.right)
				int.accept (e1)
				a1 := e1.result_set

				uni.set_left (a.left) uni.set_right (a.right)
				uni.accept (e2)
				a2 := e2.result_set
				if a1.count >= a2.count
				then
					from m := 1
					until m > a2.count
					loop
						if
							a1.has (a2[m])
						then
							a1.prune_all (a2[m])
						end
						m := m + 1
					end
					re.make_empty
					re.append ("{")
					from  m := 1
					until m = a1.count
					loop
						re.append (a1[m].out)
						re.append (",")
						m := m + 1
					end
					re.append (a1[m].out)
					re.append ("}")
					else
						from m := 1
						until m > a1.count
						loop
							if
								a2.has (a1[m])
							then
								a2.prune_all (a1[m])
							end
							m := m + 1
						end
						re.make_empty
						re.append ("{")
						from  m := 1
						until m = a2.count
						loop
						re.append (a2[m].out)
						re.append (",")
						m := m + 1
						end
						re.append (a2[m].out)
						re.append ("}")
				end
			end
		end

feature -- constant
	visit_boolean (b: BOOLEAN_CONSTANT)
		do
			result_boolean := b.boolean
			re := result_boolean.out
		end

	visit_integer (i: INTEGER_CONSTANT)
		do
			result_integer := i.i.to_integer_32
			re := result_integer.out
		end

	visit_nil (n: NIL_EXPRESSION)
		do

		end

	visit_unknown (u: UNKNOWN_EXPRESSION)
		do

		end

feature -- unary
	visit_negative (a: NEGATIVE)
		local
			right: EVALUATION
			tc: TYPE_CHECK

		do
			create right.make create tc.make
			a.right.accept (right)
			a.accept (tc)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_integer := 0 - right.result_integer
			end

			re := result_integer.out
		end

	visit_negation (a: NEGATION)
		local
			right: EVALUATION
			tc: TYPE_CHECK
		do
			create right.make create tc.make
			a.right.accept (right)
			a.accept (tc)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				result_boolean := right.result_boolean and FALSE
			end

			re := result_boolean.out
		end

	visit_sum (a: SUM)
		local
			right: EVALUATION
			e2: EVALUATION
			tc: TYPE_CHECK
			op: OPEN_SET_ENUMERATION
			m: INTEGER
			n: INTEGER
		do
			create right.make create tc.make create e2.make
			a.right.accept (right)
			a.accept (tc)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				n := 0
				check attached {OPEN_SET_ENUMERATION} a.right as o then op := o end
				from m := 1
				until m = op.children.count
				loop
					op.children[m].accept (e2)
					n := n + e2.result_integer
					m := m + 1
				end
				result_integer := n
			end

			re := result_integer.out
		end

	visit_for_all (a: FOR_ALL)
		local
			right: EVALUATION
			e: EVALUATION e2: EVALUATION
			tc: TYPE_CHECK
			op: OPEN_SET_ENUMERATION
			m: INTEGER
			r: BOOLEAN
		do
			create right.make create op.make_open_set_enumeration
			create tc.make create e.make create e2.make
			a.right.accept (right)
			a.accept (tc)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				check attached {OPEN_SET_ENUMERATION} a.right as o then op := o end
				op.children[1].accept (e) op.children[2].accept (e2)
				r := e.result_boolean and e2.result_boolean
				from m := 3
				until m = op.children.count
				loop
					create e.make
					op.children[m].accept (e)
					r := r and e.result_boolean
					m := m + 1
				end
			end
			re := r.out
		end

	visit_exists (a: THERE_EXISTS)
		local
			right: EVALUATION
			e: EVALUATION e2: EVALUATION
			tc: TYPE_CHECK
			op: OPEN_SET_ENUMERATION
			m: INTEGER
			r: BOOLEAN
		do
			create right.make create op.make_open_set_enumeration
			create tc.make create e.make create e2.make
			a.right.accept (right)
			a.accept (tc)
			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				check attached {OPEN_SET_ENUMERATION} a.right as o then op := o end
				op.children[1].accept (e) op.children[2].accept (e2)
				r := e.result_boolean or e2.result_boolean
				from m := 3
				until m = op.children.count
				loop
					create e.make
					op.children[m].accept (e)
					r := r or e.result_boolean
					m := m + 1
				end
			end
			re := r.out
		end


feature -- enumeration
	visit_open_set_enumeration (a: OPEN_SET_ENUMERATION)
		local
			tc: TYPE_CHECK
			pp: PRETTY_PRINT
			right: EVALUATION
			m: INTEGER
		do
			create pp.make
			create right.make
			create tc.make
			a.accept (tc)

			if
				tc.error_text.is_empty and tc.div_error_text.is_empty
			then
				from m:= 1
				until m > a.children.count
				loop
					a.children[m].accept (right)
					m := m + 1
				end
				a.accept (pp)
				re := pp.text
			end

		end

	visit_close_set_enumeration (a: CLOSE_SET_ENUMERATION)
		do

		end
end
