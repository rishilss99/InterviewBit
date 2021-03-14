# Simplify Directory Path

## Problem

Given a string A representing an absolute path for a file (Unix-style).

Return the string A after simplifying the absolute path.

Note:

Absolute path always begin with ’/’ ( root directory ).

Path will not have whitespace characters.

## Logic

The important information here is that possible syntax in a UNIX-style directory format are (..,random name,.,/). Except for the random file name the rest of the syntax are to be processed in a particular way and we can simply ignore the . if we encounter. So first we fill the stack with the absolute location. However, due to the stack structure it is in the reverse order. So using two variables we obtain the final absolute path location.

## Important Points

- Stack

- UNIX-style path