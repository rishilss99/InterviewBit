# Generate All Parantheses

## Problem

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([]" are not.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

## Logic

Classic stack implementation problem. As you iterate through just check if the opening braces have a corresponding close brace. In case of mismatch or empty stack the balancing is invalid and hence return false. 

## Important Points

- Stack