# Sliding Window Maximum

## Problem

Given an array of integers A. There is a sliding window of size B which
is moving from the very left of the array to the very right.
You can only see the w numbers in the window. Each time the sliding window moves
rightwards by one position. You have to find the maximum for each window.

## Logic

Very hard problem and probably very important. Using the brute force approach we can get a time complexity of O(nw) but bringing it down to O(n) using a double-ended queue is quite a task. The pushing and popping operations need to be done depending on the particular side. The important conditions are: 1) We push in front when the new element is equal to the queue front or the queue is empty. 2) We clear the queue and push front the new element if the element is greater than the queue front. 3) Finally, if queue front is greater than the new element then we pop back till we reach a number greater than or equal to the new element and then we push back. Two pointers are used to keep track of when elements are to be popped or pushed.

## Important Points

- Double-ended Queue