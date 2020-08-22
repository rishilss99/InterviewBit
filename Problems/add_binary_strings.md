# Add Binary Strings

## Problem

Given two binary strings, return their sum (also a binary string).

## Logic

This problem is similar to the array of different numbers arithmetic addition. An important thing to do is reverse both strings to simplify the calculations. As we iterate from the LSB in both strings we maintain a boolean variable to keep track of carry operations. Then we keep adding the corresponding binary digits to the result string. Finally we reverse and return the result string.

## Important Points

- Strings

- Bit Manipulation