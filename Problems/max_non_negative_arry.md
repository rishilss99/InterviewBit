# Max Non Negative Subarray

## Problem

Given an array of integers, A of length N, find out the maximum sum sub-array of non negative numbers from A.

The sub-array should be contiguous i.e., a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

Maximum sub-array is defined in terms of the sum of the elements in the sub-array.

Find and return the required subarray.

NOTE:

If there is a tie, then compare with segment's length and return segment which has maximum length.
If there is still a tie, then return the segment with minimum starting index.

## Logic

A simple iteration throught the array where you sum up the +ve integers and check the constraints is sufficient to solve the problem. As we iterate over the array, we check for +ve integer if we encounter a +ve integer we continue adding it to the sum. When we enconunter a -ve integer we compare sum with the max sum. In case both max and sum are equal we go on to check the lengths and the index constraints. Solving the problem is not enough think your solution through before submitting. Make sure you consider some corner cases on your own and don't rely on test cases to make your code work properly. Frame your solution well.

## Important Points

- Arrays