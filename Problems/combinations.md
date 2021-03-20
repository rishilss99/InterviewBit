# Combinations

## Problem

Given two integers n and k, return all possible combinations of k numbers out of 1 2 3 ... n.

Make sure the combinations are sorted.

To elaborate,

Within every entry, elements should be sorted. [1, 4] is a valid entry while [4, 1] is not.
Entries should be sorted within themselves.

## Logic

Straightforward forming subsets implementation the only catch here is that we have to limit the subset when it reaches the size k. Observe the subtle change in the value i+1 being passed to the recursive function.

## Important Points

- Recursion

- Backtracking