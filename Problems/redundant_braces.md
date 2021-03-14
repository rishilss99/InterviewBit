# Redundant Braces

## Problem

Given a string A denoting an expression. It contains the following operators ’+’, ‘-‘, ‘*’, ‘/’.

Chech whether A has redundant braces or not.

Return 1 if A has redundant braces, else return 0.

Note: A will be always a valid expression.

## Logic

The check for a redundant brace is whether it contains a variable ('a') and an operator ('+'). If it does it is not redundant if not it is redundant. When we encounter '(' we push 0 onto the stack. Now incase we encounter a variable we pop and push +1. Then if an operator is encountered we pop and push +1. Finally we pop when we encounter ')' in case the top element is less than 2, meaning it only encountered the '(' brace or either of the variable or the operator, we immediately return 1. Else continue with the iteration.

## Important Points

- Stack

- Expressions