# Length of Last Word

## Problem

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

## Logic

Since, this problem requires us to find the last word we start iterating the string from the end. The first loop is used to find the maximum index of the string which is not a white-space. Once we find the maximum non white-space index we start iterating till we encounter characters keeping track of the length. Finally we return the length of the last word.

## Important Points

- String
