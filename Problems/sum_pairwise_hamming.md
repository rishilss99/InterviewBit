# Sum of pairwise Hamming Distance

## Problem

Hamming distance between two non-negative integers is defined as the number of positions at which the corresponding bits are different.

Given an array A of N non-negative integers, find the sum of hamming distances of all pairs of integers in the array. Return the answer modulo 1000000007.

## Logic

The naive and obvious solution seems to iterate using a double loop over all the elements and adding the respective hamming distances twice. This approach has a time complexity of O(N^2logA) where A is the maximum number in the list. This is an inefficient approach which is straight off rejected. The more efficient approach involves the logic that the elements can be broken down into 32 bits and counting the number of 1s and 0s for each bit. Once we build 32 arrays for each bit place we realize the count of hamming distance for each bit place is just the product of the number of 0s and number of 1s. Following this logic we create an array if 32 integers and as we iterate over the given vector of integers we break down each element and store its corresponding bit value in the array place. Finally we sum up the product of 1s and 0s multiplied by 2 for the inverse pair and return the answer.

## Important Points

- Hamming Distance