# Implement Strstr

## Problem

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

## Logic

We have used the naive approach with the time complexity of O(MN) to solve the problem. However a more time efficient KMP (Knuth Morris Pratt) algorithm for pattern matching exists with the time complexity of O(M+N). In the naive approach, whenever we encounter an element in the haystack that matches the first element of the needle we iteratively traverse over the next variables trying to match the characters. If we reach the end of the needle, we conclude that the needle exists in the haystack and return true. If the matching fails we start iterating from the next element of the matched element to the needle string.

## Important Points

- Pattern matching

- String

- KMP Algorithm