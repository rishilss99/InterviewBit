# Square Root of Integer

## Problem

Given an integar A.

Compute and return the square root of A.

If A is not a perfect square, return floor(sqrt(A)).

DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY

## Logic

This is an excellent application of binary search not quite obvious if not thought through. We try to find the perfect square root or the floor square root of a given number. We remodel the question as a binary search scenario where we check for every midpoint if its square is equal, less or greater than the given number. After the binary search loop we check to see if the number found does not exceed the given number in which case we simply subtract 1 and return. We use a naive check approach for integer overflow at the start and end of the search. The problem can be dealt with in a much smarter way by using division instead of multiplication to avoid integer overflow. Smart approach to divide rather than multiply.5n

## Important Points

- Binary Search

- Math