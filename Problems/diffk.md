# Diffk

## Problem

Given an array ‘A’ of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[i] - A[j] = k, i != j.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

Try doing this in less than linear space complexity.

## Logic

The naive approach would involve iterating twice over the array with a time complexity of O(N^2) checking if you find such a pair. However, as the two pointer approach advocates you can improve the time complexity to O(N) if the array is sorted. Here we take to pointers at i=0 and j=1 and iterate keeping in mind the monotonicity of the sorted array. We know the reduced complexity as j is never reset and only keeps moving forward. Hashing will also give the same time complexity with the only overhead of additional space.

## Important Points

- Two Pointers