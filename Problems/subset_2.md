# Subset II

## Problem

Given a collection of integers that might contain duplicates, S, return all possible subsets.

Note:
1)Elements in a subset must be in non-descending order.
2)The solution set must not contain duplicate subsets.
3)The subsets must be sorted lexicographically.

## Logic

Exactly the same code as the first version of the problem except for the if(i>index && A[i] == A[i-1]) condition which is important to remove duplicate subsets from the answer.

## Important Points

- Recursion

- Backtracking