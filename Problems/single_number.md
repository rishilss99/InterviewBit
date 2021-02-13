# Single Number

## Problem

Given an array of integers, every element appears twice except for one. Find that single one.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

## Logic

Done this type of question before. The important thing is that for even number of repetitions the XOR of a number comes down to 0. So if we iterate over the array XOR every element the final result is the number that does not repeat as it is present odd number of times i.e., 1.

## Important Points

- Bit Manipulation

- Bit operator