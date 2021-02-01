# Vowel and Consonant Substrings

## Problem

Given a string A consisting of lowercase characters.

You have to find the number of substrings in A which starts with vowel and end with consonants or vice-versa.

Return the count of substring modulo 10^9 + 7.

## Logic

The most important part of this solution was realizing that you do not need to actually traverse through the whole substring to check whether it fits the mentioned condition. All you need to do is see if the first and last characters satisfy the condition. So as you iterate along the string you use an integer to keep track of vowels and consonants. Whenver you encounter a vowel you increase the consonant multiplier as all the preceeding consonants will fulfill the condition. The same thing with encountering a consonant except in this case you increment the vowel multiplier. 

## Important Points

- Strings