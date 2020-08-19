# Excel Column Number

## Problem

Given a column title A as appears in an Excel sheet, return its corresponding column number.

## Logic

This is an interesting application of base conversion. Here we are dealing with a base of 26 as we have 26 alphabets. The problem simply involves finding the decimal value of a given string of alphabets. We use the logic of base conversion and solve to the problem. We start from the last element and power = 0 and as we move forward along the string we keep incrementing the power as if moving from LSB to MSB.

## Important Points

- Array