# Repeat Missing Number Array

## Problem

You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

## Logic

Given the properties of elements in the array we see that the values of the repeating and missing element can be deduced using the sum of positive integers and square of sum of positive integers formula. We compute the actual sum of elements and the sum of square of elements present in the array. Since, we know the direct mathematical formula of the both sums we are able to come up with 2 linear equations with 2 variables which gives the required missing and repeating elements. This is the most space and time efficient approach. Another approach involves reusing the given array to mark the elements in-place and swapping if not present. Basically it involves space recycle to find the element that is recurring followed by the same sum of integers approach to find the missing element.

## Important Points

- Array