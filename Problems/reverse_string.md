# Reverse the String

## Problem

Given a string A.

Return the string A after reversing the string word by word.

NOTE:

1. A sequence of non-space characters constitutes a word.

2. Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.

3. If there are multiple spaces between words, reduce them to a single space in the reversed string.

## Logic

This problem allows for an amazing application of stack data structure for a LIFO based output. As we iterate from the back of a string we add the elements of a word in the LIFO based manner into the stack. Then as we encounter a white-space in the string we input the characters from the stack into the result string. The empty condition of the stack helps us to prevent multiple spaces between words. Once we finally hit the first element we stop the loop and use another loop to insert the elements from the stack into the result string. A final condition check is used to take of a trailing space.

## Important Points

- String

- Stack