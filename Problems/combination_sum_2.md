# Combination Sum II

## Problem

Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

Each number in C may only be used once in the combination.

## Logic

The only difference with regards to the first such problem is the menace of repeated elements which leads to multiple duplicate subsets. The most important line of code in this problem is the if(i>index && A[i-1]==A[i]) condition which eliminates the duplicate sets entirely. Rest of the code remains the same as the first version.

## Important Points

- Recursion

- Backtracking