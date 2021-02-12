# Number of 1 Bits

## Problem

Given an integer A, count and return the number of trailing zeroes.

## Logic

Again the naive approach would involve dividing the number until you finally stumble over remainder 1. However, the better approach is using the x & ~(x-1) trick. Using this formula we can get the first set bit of the number. Now, the number of trailing zeroes is just the log2 of the number. For example, if x = 4 we have log2(4) as 2 which is the number of trailing zeroes in this case.

## Important Points

- Bit Manipulation