# Maximum Ones after Modification

## Problem

Given a binary array A and a number B, we need to find length of the longest subsegment of ‘1’s possible by changing at most B ‘0’s.

## Logic

This problem involves more of a thinking shift rather then change in approach. Instead of focussing on finding the longest subsegment of 1 by changing 0s focus on finding the longest subsegment with atmost 0 Bs. As soon as you start thinking in terms of finding a subsegment with atmost B 0s the approach works instantly. To pointers to keep track of the starting and ending of the subsegment. The second pointer j keeps moving forward till it exceeds the limit. As soon as it does so i increments and tries to bring the number of zeroes within limits.

## Important Points

- Two Pointers
