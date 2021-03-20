# Generate all Parentheses II

## Problem

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses of length 2*n.

For example, given n = 3, a solution set is:

"((()))", "(()())", "(())()", "()(())", "()()()"

Make sure the returned list of strings are sorted.

## Logic

Took a while to figure out that I was doing something wrong. Instead of fixating on the problem look at the particulars and try to figure out the approach. The blind application of the push, recurse and pop approach led to stupid implementations. The key was figuring that the problem was a little different then the former types. At every step of the way there is an option to either add a '(' or a ')'. Hence, we simulate the approach with one condition that the number of ')' is always less than '('. We finally return when both the braces have reached the maximum limit.

## Important Points

- Recursion

- Backtracking