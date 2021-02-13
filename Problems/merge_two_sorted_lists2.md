# Merge Two Sorted Lists 2

## Problem

Given two sorted integer arrays A and B, merge B into A as one sorted array.

Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.

If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n.

## Logic

The naive approach and since we know merge sort the intuitive approach is to take a new array and add the respective elements using two pointers. However, this leads to a space overhead of another array. The smart approach is instead to start inserting elements from the tail of A. Realize how you have an intiution to add elements from the starting and shift the entire following elements as you insert elements from B. But this leads to additional time complexity due to the rearranging of elements. The approach would have to be going from the other end since in that way the time complexity of adding elements is just O(1). If it does not work from the front try from the back.

## Important Points

- Two Pointers