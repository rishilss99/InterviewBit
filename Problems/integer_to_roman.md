# Integer to Roman

## Problem

Given an integer A, convert it to a roman numeral, and return a string corresponding to its roman numeral version

## Logic

We use the characteristic of the logarithm to find the 10 power of the integer. Then as we iterate from the most significant digit to the least significant digit we use a character array and its corresponding indices to extract the roman numerals. We set conditions to match and return the required roman numeral for a given integral value.

## Important Points

- String