# Number of 1 Bits

## Problem

Write a function that takes an unsigned integer and returns the number of 1 bits it has.

## Logic

The naive approach would be to convert the number to binary and count the ones as we go along the 32 bits. The better approach which involves the use of one of the most useful binary tricks is using x & (x-1). What this does is it removes the lowest set bit from the number. Hence, the total number of 1 bits is equal to the number of times this operation can be performed until the number drops to 0.

## Important Points

- Bit Manipulation