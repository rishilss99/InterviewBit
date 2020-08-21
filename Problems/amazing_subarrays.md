# Amazing Subarrays

## Problem

You are given a string S, and you have to find all the amazing substrings of S.

Amazing Substring is one that starts with a vowel (a, e, i, o, u, A, E, I, O, U).

## Logic

The problem looks intimidating at first glance. However the logic is pretty straight forward, for each vowel encountered in the string, their will be n-i substrings where i is the 0-based index of the vowel. Hence, using the logic we iterate over the entire string adding the number of substrings for each vowel as and when encountered.

## Important Points

- Strings