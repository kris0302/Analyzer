
In this project, you are asked to complete, under the Eiffel Testing Framework (ETF), the design and
implementation of: 1) a small expression language; and 2) its three associated functionalities (i.e., pretty
printing, type checking, and evaluation).

The context-free grammar of the small expression language that you will design and implement is defined as
follows:
Expression ::= IntegerConstant
| BooleanConstant
| LPAREN BinaryOp RPAREN
| LPAREN UnaryOp RPAREN
| SetEnumeration
IntegerConstant ::= DIGIT+
BooleanConstant ::= TRUE
| FALSE
BinaryOp ::= Expression PLUS Expression
| Expression MINUS Expression
| Expression TIMES Expression
| Expression DIVIDES Expression
| Expression AND Expression
| Expression OR Expression
| Expression IMPLIES Expression
| Expression EQUAL Expression
| Expression GT Expression
| Expression LT Expression
| Expression UNION Expression
| Expression INTERSECT Expression
| Expression DIFFERENCE Expression
UnaryOp ::= NEGATIVE Expression
| NEGATION Expression
| SUM Expression
| FORALL Expression
| EXISTS Expression
SetEnumeration ::= LBRACE Expression (COMMA Expression)
∗ RBRACE


 Pretty Printing
Given an expression that is syntactically correct, with respect to the above grammar, your implemented
pretty printer should write it out as a string. Pay attention to the following details:
• Each unary or binary operation is surrounded by a matching pair of round parentheses
• Each set enumeration is not surrounded by a matching pair of round parentheses.
• Each unary operator is followed by a single space.
• Each binary operator is preceded by a single space and followed by a single space.
For example: (- 10), (+ {1}), ({True} \ {False}), etc.


Type Checking
Given an expression that is syntactically correct, with respect to the above grammar, your implemented type
checker should decide whether or not it is type-correct. An expression is considered as type-correct if and
only if each (unary or binary) operator is applied to operand(s) of the right type.
Here are example expressions that are both syntactically correct and type-correct:
• (1 + 2)
• (+ {1, 2, 3})
• (&& {True, False})
• (|| {True, False})
• ({1, 2, 3} \/ {2})
• ({1, 2, 3} \ {2})
Here are example expressions that are syntactically correct but not type-correct:
• (1 + True)
• (3 + {1, 2, 3})
• (+ {1, 2, True})
• (&& {1, 2})
• (|| True)
• ({1, 2, 3} \/ {True, False, True})


 Evaluation
Given an expression that is both syntactically and type-correct, with respect to the above grammar, your
implemented evaluator should aim to simplify the expression by evaluating parts that can be evaluated.
Here are example of evaluating type-correct expressions:
• (1 + 2) evaluates to 3
• (+ {1, 2, 3}) evaluates to 6
• (&& {True, False}) evaluates to False [ generalized and ]
• (|| {True, False}) evaluates to True [ generalized or ]
• ({1, 2, 3} \/ {2}) evaluates to {1, 2, 3}
6
• ({1, 2, 3} \ {2}) evaluates to {1, 3}
• {1, 2, 3, 4} evaluates to {1, 2, 3, 4}
In the above last example, there are no members in the set enumeration that can be further simplified, so
the evaluation result is simply the original set enumeration.
