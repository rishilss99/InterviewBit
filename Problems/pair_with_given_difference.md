# Pair with Given Difference

## Problem

Given an one-dimensional unsorted array A containing N integers.

You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

Return 1 if any such pair exists else return 0.

## Logic

The naive approach would involve iterating twice over the array with a time complexity of O(N^2) checking if you find such a pair. However, as the two pointer approach advocates you can improve the time complexity to O(N) if the array is sorted. Here we first sort it and then use the two pointer approach. In the two pointer approach we use the monotonicity of the sorted array to ensure that we iterate over the array only once with a time complexity of O(N). The final time complexity comes out to be O(NLogN + N). The best approach to this problem however is to use a hash table (unordered map) to be referenced later as you iterate trying to find the required match.

## Important Points

- Two Pointers