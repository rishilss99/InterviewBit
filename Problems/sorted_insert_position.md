# Sorted Insert Position

## Problem

Given a sorted array A and a target value B, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

## Logic

Classic binary search but there is an important catch here. The intuitive solution that comes to mind is to first search for the number using binary search and if you don't find the element then iterate through the array looking for the least element in the array greater than the required number. However, the important thing to consider is that the low variable actually holds the position of the least element greater than the number. Hence, instead of iterating you can simply return the low variable if you don't encounter the required number in the array.

## Important Points

- Binary Search
