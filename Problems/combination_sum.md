# Combination Sum

## Problem

Given a set of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

The same repeated number may be chosen from C unlimited number of times.

Note:
1)All numbers (including target) will be positive integers.
2)Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
3)The combinations themselves must be sorted in ascending order.
CombinationA > CombinationB iff (a1 > b1) OR (a1 = b1 AND a2 > b2) OR … (a1 = b1 AND a2 = b2 AND … ai = bi AND ai+1 > bi+1)
4)The solution set must not contain duplicate combinations.

## Logic

When we have a fixed number of elements to consider we might look into two pointer or three pointer approaches. However, in this case any number of elements can be considered and that too an infinite number of times which calls for a recursive approach. There are some subtle things to be careful about especially when calling the recursive function take care that the new start is updated to i. To avoid repeating subsets we root out the duplicate elements at the start itself.

## Important Points

- Recursion

- Backtracking