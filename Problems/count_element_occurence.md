# Count Element Occurence

## Problem

Given a sorted array of integers, find the number of occurrences of a given target value.
Your algorithm’s runtime complexity must be in the order of O(log n).
If the target is not found in the array, return 0

## Logic

This problem is focuesd on searching for a given number in a sorted array. The naive approach would be of linear search of time complexity O(N). Since, this sorted array it provides an opportunity to utilize binary search with a time complexity of O(logN). However, the intuitive approach to first find the element and then iterate towards the left and right from the index counting the occurences of the digit will also have a time complexity of O(N) in the worst case. The search will be O(logN) but the counting of duplicate elements will again be O(N). The most efficient approach to this problem involves finding the first and last occurences of a number using the binary search approach. We use a helper function that is able to find the first or the last occurence of a number. Then we call the functions twice to find the respective indices of the first and last occurences. Finally we return the last index - first index + 1 as the count of the element in the sorted array.

## Important Points

- Binary Search