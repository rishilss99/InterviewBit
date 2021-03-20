# Subset

## Problem

Given a set of distinct integers, S, return all possible subsets.

Note:
1)Elements in a subset must be in non-descending order.
2)The solution set must not contain duplicate subsets.
3)Also, the subsets should be sorted in ascending ( lexicographic ) order.
4)The list is not necessarily sorted.

## Logic

Classic recursion example. This is a very important base code for all problems wherein you need to find subsets. While iterating you push something, then you recurse and then you pop. Sorting at the beginning is important to fulfil the ascending order condition.

## Important Points

- Recursion

- Backtracking