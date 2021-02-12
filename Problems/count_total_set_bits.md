# Count Total Set Bits

## Problem

Given a positive integer A, the task is to count the total number of set bits in the binary representation of all the numbers from 1 to A.

Return the count modulo 10^9 + 7.

## Logic

The approach here is note the pattern as we go through from 1 to A. You can observe that for each position in the bit representation. The pattern repeats after 2^(i+1) for the ith postion. Hence, what we do is find an empirical formula which just takes the number and gives the find answer without any iterations through the numbers from 1 to A. The formula is something like (A/2^i) + 2*(i-1) + A%(2*i). In short the pattern helps to create an empirical formula that directly gives the answer.

## Important Points

- Bit Manipulation