# Sort Array Squares

## Problem

Given a sorted array A containing N integers both positive and negative.

You need to create another array containing the squares of all the elements in A and return it in non-decreasing order.

## Logic

Excellent application of the merging operation in merge sort. The straight-forward approach to this question is first squaring all the numbers and then sorting them with a minimum time complexity of O(nlogn). However, a much better approach of complexity O(n) involves finding the middle number between the negative and the positive integers. Then using two pointers as we iterate over the list we can simply add the respective squared elements to the new array. However, there is an associated overhead of an additional array of size n.

## Important Points

- Merge Sort
