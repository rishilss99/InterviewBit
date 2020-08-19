# Rearrange Array

## Problem

Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

## Logic

This is an excellent problem for array space recyle. Tried to solve using an iterative approach which passed the test cases but failed when submitted. The logic was partially correct and could only rearrange a part of the array. The elegant solution to this problem involves encoding the elements of the array such that they contain the original element as well as the new element such that both can be retrieved as needed. First, we increase each element of the array by the adding the new array element multimplied by the array size i.e., A = B + C*N. Now to retreive old element A%N = B and to get new element A/N = C. 

## Important Points

- Array

- Space Recycle