# Maximum Continuous Series of 1s

## Problem

You are given with an array of 1s and 0s. And you are given with an integer M, which signifies number of flips allowed.
Find the position of zeros which when flipped will produce maximum continuous series of 1s.

For this problem, return the indices of maximum continuous series of 1s in order.

## Logic

This problem follows the same logic as the maximum 1s after modification one. You have to realize that instead of trying to find the longest subsegment of 1s you are looking for the maximum subsegment that can accomodate at most M 0s. The only difference is that once done you need to insert the values from i to j inside an array to be returned.

## Important Points

- Two Pointers
