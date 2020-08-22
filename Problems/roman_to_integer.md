# Roman to Integer

## Problem

Given a string A representing a roman numeral.
Convert A into integer.

A is guaranteed to be within the range from 1 to 3999.

## Logic

We start iterating from the MSB of the roman numeral using a map for mapping the values from the roman numeral to integral values. The only important consideration as we iterate is that we have to check the adjacent roman numeral. If the following roman numeral is greater than the current roman numeral we have to subtract else in all other cases we add the integral value.

## Important Points

- Strings
