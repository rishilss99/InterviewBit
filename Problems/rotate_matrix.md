# Rotate Matrix

## Problem

You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.

Note that if you end up using an additional array, you will only receive partial score.

## Logic

This is a trivial problem if done using extra space or an auxiliary array. In place rotation requires complex array manipulation. Instead of the editorial approach wherein 4 cyclic swaps are carried out in each iteration, we go with the approach of min and max row. Starting from the min row we replace elements in the min col, then from min col to max row and finally from max row to max col. This is basically reverse cyclic swaps of the elements to achieve 90 degrees rotation. We deal with the corner elements of each subarray apart from the other elements.

## Important Points

- Arrays
