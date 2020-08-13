# Maximum Absolute Difference

## Problem

You are given an array of N integers, A1, A2 ,…, AN. Return maximum value of f(i, j) for all 1 ≤ i, j ≤ N.
f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.

## Logic

Couldn't solve the problem on my own. The logic behind the solution is great. Using the properties of mod i.e., |x|. We come across two cases that give the value of f(i,j). 1) f(i,j) = (A[i] - i) - (A[j] - j) 2) f(i,j) = (A[i] + i) - (A[j] + j). So what we can simply do is make two arrays, A[i]+i and A[i]-i which we iterate over and find the maxmium and minimum values. Finally we return the answer which is the maximum of both these differences. Since we are already iterating over all the elements we don't need to create two arrays we can just keep track of the max. and min. values in both arrays using 2 max. and 2 min. variables.

## Important Points

- Array
