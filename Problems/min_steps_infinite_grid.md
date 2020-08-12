# Spiral Order Matrix I

## Problem

You are in an infinite 2D grid where you can move in any of the 8 directions.

You are given a sequence of points and the order in which you need to cover the points.. Give the minimum number of steps in which you can achieve it. You start from the first point.

## Logic

To solve this problem iterate over the entire list of coordinates one element at a time. Previous coordinates are x_0, y_0 and current coordinates are x_1, y_1. We use a helper recursive function that does the traversal. If both coordinates are equal we simply return 0. If both coordinates are unequal we traverse diagonally. If one of the elements is unequal we return the absolute difference plus the current number of steps. This is a sort of complex approach for a very straightforward question. If you break down the problem further all you need to do is return the maximum of the absolute differences of both the coordinates.

## Important Points

- Arrays