# Spiral Order Matrix I

## Problem

Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

## Logic

To solve this problem we use 4 variables to mark the minimum row, minimum column, maximum row and maximum row to be iterated. Since, there are 4 directions in order to be traversed for a spiral order traversal we use another variable dir which is updated according to the direction to be traversed. Using nested loops controlled by the 4 variables we are able to obtain the spiral order traversal of the 2D matrix.

## Important Points

- Arrays