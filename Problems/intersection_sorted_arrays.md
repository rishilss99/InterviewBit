# Intersection of Sorted Arrays

## Problem

Find the intersection of two sorted arrays.
OR in other words,
Given 2 sorted arrays, find all the elements which occur in both the arrays.

## Logic

Classic application of the two pointer approach. Take 2 pointers and iterate through both the arrays considering that the pointer at the smaller value is incremented and if both values are equal insert it into the result array.

## Important Points

- Two Pointers