# Count and Say

## Problem

1 is read off as one 1 or 11.
11 is read off as two 1s or 21.

21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

## Logic

Since, the given pattern for a value n can not be generated directly we need to generate new patterns based on previously stored patterns. For each value of n, we iterate over the previous pattern and generate a new pattern stored in an auxiliary variable. At the end of the new pattern generation we reassign the auxiliary variable to the original string variable. At the end of the iteration we return the result string.

## Important Points

- String