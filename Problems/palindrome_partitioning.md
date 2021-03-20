# Palindrome Partitioning

## Problem

Given a string s, partition s such that every string of the partition is a palindrome.

Return all possible palindrome partitioning of s.

## Logic

Sort of like forming subsets except here we need to check if the subset of the string is a palindrome or not. If the string happens to be a palindrome we add it the set and check for the rest of the string. The push, recurse and pop structure is followed here as well. It is important to keep in mind that the push, recurse and pop approach works mostly for such subset questions. An extra function to check for palindromes needs to be used.

## Important Points

- Recursion

- Backtracking