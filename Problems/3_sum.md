# 3 Sum

## Problem

Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target.
Return the sum of the three integers.

Assume that there will only be one solution

## Logic

This is a if you know you know approach. The common sense is to first sort it if you want to have any chance of doing it better than the naive approach with time complexity of O(N^3). After sorting the first approach that I use involves using the two pointer trick along with binary search. How it goes about is you use the two pointer technique to move closer to the target value using two values from A. At each point you then use binary search to find the closest value matching the target value using the returning the high approach. This however ends up with a time complexity of O(N^2logN). The actual approach turns out to be not so complicated. You first sort the array and then you iterate one by one over the array. As you do so you use the two pointer approach to find the other two best-suited values from A. This ends up giving a time complexity of O(N^2). This is useful approach which you can use when you need to keep track of 3 values or 3 pointers. Gives the best possible time complexity of O(N^2).

## Important Points

- Two Pointers

- Binary Search