# Minimum Parentheses

## Problem

Given a string A of parantheses ‘(‘ or ‘)’.

The task is to find minimum number of parentheses ‘(‘ or ‘)’ (at any positions) we must add to make the resulting parentheses string valid.

An string is valid if:

1.Open brackets must be closed by the corresponding closing bracket.
2.Open brackets must be closed in the correct order.

## Logic

Whenever I encounter such a problem where things need to be done in a particular opening and closing order I go for stacks. The approach invvolves keeping a track of the opening parentheses using a stack that is filled when a '(' is encountered and poped when a ')' is encountered. The stack should be enough to keep track of unclosed '(' but for keeping track of ')' a separate count variable is used that get incremented if the stack is already empty meaning no open '(' exists.

## Important Points

- Strings

- Stack