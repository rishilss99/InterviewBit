# Letter Phone

## Problem

Given a digit string, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below.

## Logic

Classic recursion implementation where we iterate in an orderly manner to keep adding elements to the answer. Due to the repetitive nature of the problem and the associated mapping required we create a map to keep track of the strings to be used.

## Important Points

- Recursion

- Hashing