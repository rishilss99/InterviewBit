# Evaluate Expression

## Problem

Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, /. Each operand may be an integer or another expression.

## Logic

Just have to simulate the approach as you iterate over the array. After every two numbers the operator will operate on the topmost and second topmost elements of the stack. After evaluating the top numbers push the result into the stack. Code looks big due to the boilerplate which can be avoided by using the switch conditions or a more generalized code.

## Important Points

- Stack

- Expressions