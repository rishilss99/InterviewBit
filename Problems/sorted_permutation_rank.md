# Sorted Permutation Rank

## Problem

Given a string, find the rank of the string amongst its permutations sorted lexicographically.
Assume that no characters are repeated.

## Logic

This is an interesting problem based on application of permutation for ordering a given word in lexicographically sorted order. Since, the characters are not repeated the problem becomes much easier to navigate. First off, we store each alphabet in a given string in an initialized array. Then as we iterate over the array we check if the first element of the string matches any element in the array. For every element that does not match we add (n-i-1)! to position. After a match is found we break the loop and begin with the next string element. We keep doing so till the end of the string. In the end, the sum position that we have been accumulating gives the rank of the string.

## Important Points

- Permutation

- Array