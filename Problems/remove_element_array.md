# Remove Element from Array

## Problem

Remove Element

Given an array and a value, remove all the instances of that value in the array.
Also return the number of elements left in the array after the operation.
It does not matter what is left beyond the expected length.

## Logic

Classic two pointer approach. Iterate through the array keeping track of actual elements to be included and another pointer to go through the elements one by one. Whenever the second pointer encounters the unwanted value swap and move along.

## Important Points

- Two Pointers
