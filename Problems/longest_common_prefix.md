# Longest Common Prefix

## Problem

Given the array of strings A,
you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
and S2.

For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".

## Logic

We initiaally assume the first string to be the longest common prefix. Then as we iterate over the array of strings we compare the current common prefix with the strings and erase the prefix elements that do not match the current string. After completely iterating over the array we return the finally obtained longest common prefix.

## Important Points

- String
