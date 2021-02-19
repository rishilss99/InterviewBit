# Counting Subarrays!

## Problem

Given an array A of N non-negative numbers and you are also given non-negative number B.

You need to find the number of subarrays in A having sum less than B. We may assume that there is no overflow.

## Logic

Again the mindset required to understand actually wnats to find elements with sum less than B. So what you do is use to pointers and keep track of the sum. For each element added you get the corresponding length of the new array as the increase in the subarrays. If you add a 5th element to a 4 element array you get 5 new subarrays from all combinations. Using this property all we need to do is keep track of two pointers until the sum exceeds B. Once it does move i if it helps if not start over from the next element.

## Important Points

- Two Pointers
