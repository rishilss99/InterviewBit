# Sudoku

## Problem

Write a program to solve a Sudoku puzzle by filling the empty cells.
Empty cells are indicated by the character '.'
You may assume that there will be only one unique solution.

## Logic

Classic backtracking. Never forget. One important thing to remember is to capture the answer once is it reached using another array as the final answer goes back to the original array once achieved. Also you change the element if it is actually valid and not change and check. The order of the condition and change needs to be kept in mind. Don't fiddle to much with the is_valid function and try to be correct instead of concise for the function.

## Important Points

- Recursion

- Backtracking