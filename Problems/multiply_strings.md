# Multiply Strings

## Problem

Given two numbers represented as strings, return multiplication of the numbers as a string.

 Note: The numbers can be arbitrarily large and are non-negative.
Note2: Your answer should not have leading zeroes. For example, 00 is not a valid answer. 
For example,
given strings "12", "10", your answer should be “120”.

## Logic

Following the pattern of preceeding problems, this problem also requires the simulation of a mathematical procedure. In this case the operation is multiplication of two numbers. But for multiplication we also need to simulate the addition of 2 numbers using strings. Hence, we need to simultaneously multiply and add as we iterate along both the strings. We treat one as a fixed number string and for the other extract digits starting from its unit's place.

## Important Points

- Strings

- Multiplication Simulation