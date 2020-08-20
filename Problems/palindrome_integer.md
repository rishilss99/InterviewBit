# Palindrome Integer

## Problem

Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

## Logic

Simple problem that can be solved by considering another integer and storing the values of the original integer into the new integer starting from the unit's place and iterating to the greatest decimal place. However, considering the no extra space condition a little too seriouly we went with our favorite approach of using a log10 to extract the largest decimal place value and conversely used an integer of value 10 to get the unit's place value each time. Using successive modulo and division operations we are able to return the palindrome validity of the given integer.

## Important Points

- Maths

- Logarithms