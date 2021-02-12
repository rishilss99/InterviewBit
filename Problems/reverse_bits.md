# Reverse Bits

## Problem

Reverse the bits of an 32 bit unsigned integer A.

## Logic

The naive approach is to shift bits using to pointers. XORing the respective bits would let us know if both the bits are different. If they are then we can again XOR to get the inverted result. The better approach which works in O(number of 1 bits) involes the binary tricks : x & (x-1) and x & ~(x-1). We can use the 2nd trick to extract the lowest bit and then use log to multiply it to its inverted position. The 1st trick is just used to clear the lowest set bit once it has been extracted.

## Important Points

- Bit Manipulation

- Logarithm