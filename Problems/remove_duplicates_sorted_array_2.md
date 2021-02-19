# Remove Duplicates from Sorted Array II

## Problem

Remove Duplicates from Sorted Array

Given a sorted array, remove the duplicates in place such that each element can appear atmost twice and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

Note that even though we want you to return the new length, make sure to change the original array as well in place

## Logic

Classic two pointer approach. Slight change from the previous problem given that duplicates are allowed. The intuitive reaction is to use a third pointer along with the previously two, to keep track of duplicate values. However, using just a simple boolean variable we can accomodate the duplicate numbers as and when required. Other then the small twist the problem is solved in much as the previous remove the duplicates from sorted array problem.

## Important Points

- Two Pointers
