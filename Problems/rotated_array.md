# Rotated Array

## Problem

Suppose a sorted array A is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

The array will not contain duplicates.

## Logic

The linear search approach to this problem would be the naive way with a time complexity of O(N). However the linear search approach totally misses the opportunity to exploit the properties of a circularly sorted array. We can instead use the more efficient binary search which is modified according to the cicularly sorted array. The first condition of the loop checks if the first element is less than the last element in which case the array is sorted and we return the 1st element as it is. The second condition checks for the pivot which has an interesting property that the previous element is larger as well as the next element is larger than the pivot. If both condition fail we have need to shorten the search space using the current center element. If the center element is larger than high index element we have to search in the left side otherwise on the right size of the center.

## Important Points

- Binary Search

- Circularly sorted array