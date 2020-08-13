# Largest Number

## Problem

Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.

## Logic

Simple sorting in this case won't do the trick. Instead we have to write our own compare function to sort the numbers according to the highest number they can generate. We went by comparing to numbers starting from the most significant digit to the least significant digit and figuring out the sorting. Since, the comparison can be between numbers of different lengths we need to take care that we determine the larger number in terms of the concatenated number that can be generated. The recurring of digits is a major issue that needs to be considered in the compare function. However, a much efficient solution as given in the editorial involves simple concatenation of the two numbers and determining in which case we get a larger number. Could figure out the logic but not the most efficient programming implementation.

## Important Points

- Array