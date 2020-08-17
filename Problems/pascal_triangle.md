# Pascal Triangle

## Problem

Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

## Logic

This is a simple simulation array based problem which requires basic operations to construct the pascal triangle. As we iterate over each level of the pascal triangle we find the value of element in a level is equal to the sum of previous and corresponding elements in the previous level. 

## Important Points

- Array