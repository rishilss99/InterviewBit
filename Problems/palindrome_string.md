# Palindrome String

## Problem

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

## Logic

The problem is primarily based on reversing a given string. One way to go over the problem is use the two pointer approach one at the start and other at the end and skipping the non-alphanumeric characters. However, the approach used by us involves using an auxiliary string in which store all the alphanumeric characters in their lower case. Then we use 2 pointers to iterate comparing the corresponding elements, in case of a mismatch straight off return 0. If the complete iteration takes place we return 1.

## Important Points

- String