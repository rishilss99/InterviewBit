# Search Bitonic Array

## Problem

Given a bitonic sequence A of N distinct elements, write a program to find a given element B in the bitonic sequence in O(logN) time.

NOTE:

A Bitonic Sequence is a sequence of numbers which is first strictly increasing then after a point strictly decreasing.

## Logic

Looking at the time complexity constraint we know that this needs to be done in someway using binary search. However, since there is no monotonicity in the array we can't directly apply binary search. The first step is rather to search for the bitonic element using binary search. Once we find the bitonic element we know that on the LHS of the element the array is sorted in increasing order and on the RHS of the element the array is sorted in the decreasing order. Hence, we can apply binary search on the respective sub-arrays to find the required number.

## Important Points

- Binary Search

