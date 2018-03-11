note
	description: "Summary description for {VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR

feature
	visit_boolean (b: BOOLEAN_CONSTANT)
	deferred
	end

	visit_integer (i: INTEGER_CONSTANT)
	deferred
	end

	visit_addition (a: ADDITION)
	deferred
	end

	visit_subtraction (s: SUBTRACTION)
	deferred
	end

	visit_multiplication (m: MULTIPLICATION)
	deferred
	end

	visit_division (d: DIVISION)
	deferred
	end

	visit_conjoin (c: CONJOIN)
	deferred
	end

	visit_disjoin (d: DISJOIN)
	deferred
	end

	visit_imply (i: IMPLY)
	deferred
	end

	visit_equals (e: EQUALS)
	deferred
	end

	visit_gt (g: GREATER_THAN)
	deferred
	end

	visit_lt (l: LESS_THAN)
	deferred
	end

	visit_union (u:UNION)
	deferred
	end

	visit_intersection (i:INTERSECTION)
	deferred
	end

	visit_difference (d:DIFFERENCE)
	deferred
	end


	visit_unknown (u: UNKNOWN_EXPRESSION)
	deferred
	end

	visit_nil (n: NIL_EXPRESSION)
	deferred
	end

	visit_negative (n: NEGATIVE)
	deferred
	end

	visit_negation (n: NEGATION)
	deferred
	end

	visit_sum (s: SUM)
	deferred
	end

	visit_for_all (f: FOR_ALL)
		deferred
		end

	visit_exists( e: THERE_EXISTS)
		deferred
		end

	visit_open_set_enumeration(e: OPEN_SET_ENUMERATION)
	deferred
	end

	visit_close_set_enumeration(e: CLOSE_SET_ENUMERATION)
	deferred
	end


end
