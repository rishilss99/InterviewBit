# Convert to Palindrome

## Problem

Given a string A consisting only of lowercase characters, we need to check whether it is possible to make this string a palindrome after removing exactly one character from this.

If it is possible then return 1 else return 0.

## Logic

Two pointer approach is the best way to solve this problem. The first pointer starts from the beginning of the string and the second pointer starts from the end of the string. As both pointer move towards each other we check if the corresponding characters are equal or not. Once, we encounter an inequality we first skip a character from  the left pointer and check if the equality condition is satisfied. If not then we go for the right pointer to check if the equality is satisfied. If both conditions fail we know that corresponding string can not be converted to a palindrome by removing a single character.

## Important Points

- String

- Two pointers