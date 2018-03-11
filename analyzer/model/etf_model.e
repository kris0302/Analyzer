note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			i := 0
			has_error := false
			create pp.make
			create tc.make
			create unknown.make
			create nil.make
			create tree.make_empty
			tree.force (unknown, tree.count+1)
			create tree_type.make_empty
			tree_type.force (0, 1)
			create eva.make

			create exp_status_prefix.make_from_string ("Expression currently specified: ")
			create exp_status.make_from_string ("?")
			create report.make_from_string ("Expression is initialized.")
			end

feature -- model attributes
	i: INTEGER
	pp: PRETTY_PRINT
	tc: TYPE_CHECK
	eva: EVALUATION
	tree: ARRAY[EXPRESSION]
	tree_type: ARRAY[INTEGER]  -- 1 means unary, 2 means binary, 3 means open set, 4 means close set, 0 means constant
	unknown: UNKNOWN_EXPRESSION
	nil: NIL_EXPRESSION

	exp_status_prefix: STRING
	exp_status: STRING
	report: STRING
	has_error: BOOLEAN


feature -- model operations
	default_update
			-- Perform update to the model state.
		do
			i := i + 1
		end

	reset
			-- Reset model state.
		do
			make
		end


feature -- Insert
	insert_constant(t: CONSTANT;str: STRING)
		local
			m: INTEGER
			n: INTEGER
			flag: BOOLEAN
			u: UNARY
			c: COMPOSITE
			en: OPEN_SET_ENUMERATION
		do
			flag := false
			if
				tree[1] = unknown
			then
				tree[1] := t
				tree_type.force (0, 1)
				else
					tree_type.force (0, tree_type.count + 1)
					from
						m := tree.count
					until
						flag = true
					loop
						if
							tree_type[m] = 1
						then
							check attached {UNARY} tree[m] as tr then
								u := tr
							end
							if
								u.children ~ "?"
							then
								if not current.is_in_set
								then
									u.set_right (t)
									u.set_children (str)
									tree[m] := u
									else
										from n := m
										until tree_type[n] = 3
										loop n := n - 1 end
										u.set_right (t)
										u.set_children (str)
										tree[m] := u
										check attached {OPEN_SET_ENUMERATION} tree[n] as tr then en := tr end
										en.set_next (create {UNKNOWN_EXPRESSION}.make, "?")
										tree[m] := en
								end

								flag := true
							end
						elseif
							tree_type[m] = 2
						then
							check attached {COMPOSITE} tree[m] as tr then
								c := tr
							end
							if
								c.children.at (1) ~ "?" or c.children.at (2) ~ "?"
							then
								if
									c.children.at (1) ~ "?"
								then
									c.set_left (t)
									c.children.put (str, 1)
									c.set_right (unknown)
									c.children.put ("?", 2)

									tree[m] := c
									else
										if not current.is_in_set
										then
											c.set_right (t)
											c.children.put (str, 2)
											tree[m] := c
											current.find_next_nil
											else
												from n := m
												until tree_type[n] = 3
												loop n := n - 1 end
												c.set_right (t)
												c.children.put (str, 2)
												tree[m] := c
												check attached {OPEN_SET_ENUMERATION} tree[n] as tr then en := tr end
												en.set_next (create {UNKNOWN_EXPRESSION}.make, "?")
												tree[n] := en
										end

								end
								flag := true
							end
							elseif (tree_type[m]=3 or (tree_type[m]=0 and tree_type[m-1]=3) or (tree_type[m]=0 and tree_type[m-1]=1) or (tree_type[m]=0 and tree_type[m-1]=0))
									and current.is_in_set
							then

								current.set_and_expand_set (t, str)
								flag := true


						end

						m := m - 1
					end

					tree.force (t, tree.count + 1)

			end
		end

		insert_binary_expression(e: COMPOSITE;str: STRING)
			do
				if
					tree[1] ~ unknown
				then
					tree_type.force (2, 1)
					else
						tree_type.force (2, tree_type.count+1)
				end
				current.set_next_unknown_binary_unary_set (e, str)
			end

		insert_unary_operation(e: EXPRESSION; str: STRING)
			do
				if
					tree[1] ~ unknown
				then
					tree_type.force (1, 1)
					else
						tree_type.force (1, tree_type.count+1)
				end
				current.set_next_unknown_binary_unary_set (e, str)
			end

		insert_open_set_enumeration(str: STRING)
			do
				if
					tree[1] ~ unknown
				then
					tree_type.force (3, 1)
					else
						tree_type.force (3, tree_type.count+1)
				end
				current.set_next_unknown_binary_unary_set (create {OPEN_SET_ENUMERATION}.make_open_set_enumeration, str)
			end

		insert_close_set_enumeration(str: STRING)
			local
				m : INTEGER
				op: OPEN_SET_ENUMERATION
				n: INTEGER
				flag: BOOLEAN
			do
				flag := false
				create op.make_open_set_enumeration
				if
					current.is_in_set
				then
					tree.force (create {CLOSE_SET_ENUMERATION}.make_close_set_enumeration, tree.count + 1)
					tree_type.force (4, tree_type.count + 1)
					from m := tree.count
					until flag = true
					loop

					if tree_type[m] = 3
					then check attached {OPEN_SET_ENUMERATION} tree[m] as tr then op := tr end
						if
							op.children_type[1].is_equal ("?")
						then
							report := "Error: (Set enumeration must be non-empty)."
							elseif
								not op.children_type[op.children_type.count].is_equal ("}")
								then
								op.set_last (create {CLOSE_SET_ENUMERATION}.make_close_set_enumeration,"}")
--								op.set_next (create {CLOSE_SET_ENUMERATION}.make_close_set_enumeration,"}")
								find_next_nil
								flag := true

                                if m > 1
                                then
								from n := m - 1
								until tree_type[n] = 3 or tree_type[n] = 4 or n = 1
								loop n := n - 1
								end
								if
									tree_type[n] = 3
								then
								check attached {OPEN_SET_ENUMERATION} tree[n] as tr then op := tr end
								if not op.children_type[op.children_type.count].is_equal ("}")
								then
									op.set_next (create {UNKNOWN_EXPRESSION}.make, "?")
									tree[n] := op
								end
								else
									if tree_type[1]=3 then 	check attached {OPEN_SET_ENUMERATION} tree[1] as tr then op := tr end
										if not op.children_type[op.children_type.count].is_equal ("}")
								then
									op.set_next (create {UNKNOWN_EXPRESSION}.make, "?")
									tree[1] := op
								end
									end
								end

							end

						end
					end
					m := m - 1
					 end
					else
						report := "Error (Set enumeration is not being specified). "
				end
			end

feature --output
	print_out_expression
		do
			create pp.make
			tree[1].accept (pp)
			exp_status := pp.text
		end

	type_check_query
		do
			create tc.make
			tree[1].accept (tc)
			if
				not tc.already_fully_specified.is_empty
			then
				report := tc.already_fully_specified
				has_error := true
				else
					report := "OK"
			end
		end

	type_check_command
		do
			create tc.make
			tree[1].accept (tc)
			if
				(not tc.error_text.is_empty) and tc.not_fully_specified.is_empty
			then
				report := tc.error_text
				has_error := true
						elseif
							not tc.not_fully_specified.is_empty
						then
							report := tc.not_fully_specified
					else
						report := exp_status + " is type-correct."
			end
		end

	evaluation
		do
			create tc.make
			tree[1].accept (tc)
			if
				not tc.not_fully_specified.is_empty
			then
				report := tc.not_fully_specified
				elseif
					(not tc.error_text.is_empty) and tc.not_fully_specified.is_empty
				then
					report := tc.error_text
					elseif
						(not tc.div_error_text.is_empty) and tc.not_fully_specified.is_empty
					then
						report := tc.div_error_text
					else
						tree[1].accept (eva)
						report := eva.re
			end

		end


feature -- Auxiliary queries, commands
		set_next_unknown_binary_unary_set (e:EXPRESSION;str: STRING)
			local
				m: INTEGER
				flag: BOOLEAN
				c: COMPOSITE
				u: UNARY
			do
				flag := false
				if
					tree[1] ~ unknown
				then
					tree[1] := e
					else
						from
							m := tree.count
						until
							flag = true
						loop
							if
								tree_type[m] = 2
							then
								check attached {COMPOSITE} tree[m] as tr then
									c := tr
								end

								if
									c.children.at (1) ~ "?"
								then
									c.children.put (str, 1)
									c.set_left (e)
									c.set_status_left ("else")
									tree[m] := c
									flag := true
									elseif
										c.children.at (2) ~ "?"
									then
										c.children.put (str, 2)
										c.set_right (e)
										c.set_status_right ("else")
										tree[m] := c
										flag := true
								end
								elseif
									tree_type[m] = 1
								then
									check attached {UNARY} tree[m] as tr then
										u := tr
									end

									if
										u.children ~ "?"
									then
										u.set_right (e)
										u.set_children (str)
										u.set_status ("else")
										tree[m] := u
										flag := true
									end
									elseif
										tree_type[m] = 3 and current.is_in_set
									then
										current.set_and_expand_set (e,str)
										flag := true
							end

							m := m -1
						end
						tree.force (e, tree.count + 1)
				end
			end

		find_next_nil -- find and change the nil to unknwon when there is no unknown
			local
				m: INTEGER
				flag: BOOLEAN
				c: COMPOSITE
			do
				flag := false
				from
					m := tree.count
				until
					flag = true or m = 0
				loop
					if
						tree_type[m] = 2
					then
						check attached {COMPOSITE} tree[m] as tr then
							c := tr
						end
						if
							c.children.at (2) ~ "nil" and c.children.at (1) /= "?"
						then
							c.set_right (unknown)
							c.children.put ("?", 2)
							tree[m] := c
							flag := true
						end


					end
					m := m - 1
				end
			end


		is_in_set: BOOLEAN
			local
				m: INTEGER
				flag: BOOLEAN
				n: INTEGER
			do
				n := 0
				flag := false
				Result := false
				from
					m := tree.count
				until
					flag = true or m = 0
				loop
					if
						tree_type[m] = 3
					then
						n := n + 1
						elseif
							tree_type[m] = 4
						then
							n := n - 1
					end

					if (tree_type[m] = 3 and n = 1) then flag := true Result := true end
					m := m - 1
				end
			end

		set_and_expand_set (e: EXPRESSION;str: STRING)
			local
				m: INTEGER
				flag: BOOLEAN
				op: OPEN_SET_ENUMERATION
			do
				flag := false
				from
					m := tree.count
				until
					flag = true
				loop
					if
						tree_type[m] = 3
					then
						check attached {OPEN_SET_ENUMERATION} tree[m] as ose then
							op := ose
						end

						op.set_last (e, str)
						if
							tree_type[tree_type.count] /= 4 and tree_type[tree_type.count] /= 1 and tree_type[tree_type.count] /= 2
							and tree_type[tree_type.count] /= 3
						then
							op.set_next (create {UNKNOWN_EXPRESSION}.make,"?")

						end
						tree[m] := op
						flag := true
					end
					m := m -1
				end
			end

		set_report(s: STRING)
			do
				report := s

			end




feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
--			Result.append ("System State: default model state ")
--			Result.append ("(")
--			Result.append (i.out)
--			Result.append (")")

			Result.append (exp_status_prefix + exp_status + "%N" + "  Report: " + report)



		end

end




