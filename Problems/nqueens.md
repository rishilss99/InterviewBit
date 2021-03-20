# NQueens

## Problem

The n-queens puzzle is the problem of placing n queens on an n×n chessboard such that no two queens attack each other.

## Logic

Classic backtracking. Never forget. We iterate over the columns and recurse over the rows. The most important thing is the checking part of the inserted queen. Is it valid horizontally, vertically and diagonally or not. Though a slight mistake in the code might be checking the entire board instead of the current instance.

## Important Points

- Recursion

- Backtracking