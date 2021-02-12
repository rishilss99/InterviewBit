# Reverse Bits

## Problem

Divide two integers without using multiplication, division and mod operator.

Return the floor of the result of the division.

Also, consider if there can be overflow cases. For overflow case, return INT_MAX.

Note: INT_MAX = 2^31 - 1

## Logic

The conditions make it pretty hard to find any intuitive approach. You need to think about division in a more creative way to solve this. Think about division as: Dividend = Answer * Divisor + Remainder. What you need to find here is the bit representation of the Answer instead of the quotient. Understand that the bit representation only consists of powers of 2. So actually you have to find the combination of 2's powers which would fulfill this equation. The most important bit operation here is the left-shift operator (<<) which in the absence of multiplying helps to shift the bits. All we need to do is find the right combination of shifting places that would give us the greatest number less than or equal to the dividend. The most important condition is (A < B<<\i) which gives the value of i where we can stop. This is much like successive approximation. Another important operation is finding the mantissa of the dividend which we do using log2 operation.

## Important Points

- Bit Manipulation