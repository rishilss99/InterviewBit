# Power of 2

## Problem

Given an integer array A of size N.

You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.

If it exists return 1 else return 0.

## Logic

Kind of got the logic but had to look at the solution to know how to properly implement it. The crux is that any number that is a perfect peak would be greater than the maximum of the LHS and would be smaller than the minimum of the RHS. Now the tricky part is to find a way to record the minimums and maximums for each index of the array so that it can be checked whether the particular element is the perfect peak or not. The way to solve is to use 2 additional arrays to keep track of the minimum and maximum values just before and after an element. After doing so just iterate over the actual array checking if the given element satifies the perfect peak condition.

## Important Points

- Arrays