# Balanced Parantheses!

## Problem

Given a string A consisting only of '(' and ')'.

You need to find whether parantheses in A is balanced or not ,if it is balanced then return 1 else return 0.

## Logic

Classic stack problem. Push into the stack when you encounter a '(' and pop when you encounter a ')'. It is unbalanced if the final stack is not empty or if you need to pop when the stack is empty.

## Important Points

- Stack
