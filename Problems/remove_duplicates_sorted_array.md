# Remove Duplicates from Sorted Array

## Problem

Remove duplicates from Sorted Array

Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.

Note that even though we want you to return the new length, make sure to change the original array as well in place

Do not allocate extra space for another array, you must do this in place with constant memory.

## Logic

Classic two pointer approach. One pointer i maintains the current progress in the array while another pointer j jumps ahead ignoring duplicate values. Finally resize the array with size i.

## Important Points

- Two Pointers
