# Permutations

## Problem

Given a collection of numbers, return all possible permutations.

## Logic

One of the most important recursion applications. This is a shift in the general recursion problems from forming subsets to finding all the different orders in which a set can be ordered. An important thing to know is that we don't go about forming subsets in this case but instead swap elements within a given array or vector to reach to the potential solutions. It is important that you remember this approach and utilize it for such related problems. The passing of start+1 in the recursive call is an important thing to consider.

## Important Points

- Recursion

- Backtracking