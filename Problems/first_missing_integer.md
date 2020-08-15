# First Missing Integer

## Problem

Given an unsorted integer array, find the first missing positive integer.

Example:

Given [1,2,0] return 3,

[3,4,-1,1] return 2,

[-8, -7, -6] returns 1

Your algorithm should run in O(n) time and use constant space.

## Logic

For problems with missing/duplicate integers within a given range dynamic boolean array is serving me quite well. Since the given numbers are clearly within the range [1,N+1] where N is the size of the array we can easily use the dynamic boolean array to keep track of the positive integers as and when they are encountered. However, as the question mentions we need to use constant space and although a boolean array uses 1/4th the space of a regular array the space complexity is definitely O(N). A recurring theme in array questions encountered has been space recycle where we use the array/matrix given to store information which is used during a 2nd pass through the array/matrix. Similarly for the given question we can reuse the given array to keep track of elements, when we encounter an integer within the given possible range we swap it with the integer at the actual postion in the array. This ensures we are able to maintain O(N) time complexity and constant space usage.

## Important Points

- Array

- Space Recycle