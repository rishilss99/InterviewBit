# Justified Text

## Problem

Given an array of words and a length L, format the text such that each line has exactly L characters and is fully (left and right) justified.
You should pack your words in a greedy approach; that is, pack as many words as you can in each line.

Pad extra spaces ‘ ‘ when necessary so that each line has exactly L characters.
Extra spaces between words should be distributed as evenly as possible.
If the number of spaces on a line do not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.
For the last line of text, it should be left justified and no extra space is inserted between words.

Your program should return a list of strings, where each string represents a single line.

## Logic

This is one of the toughest problems for strings encountered. It involves simulating the exact justification for a given string. It gets particularly tricky to keep track of all the corner cases and satisfy all the given constraints. To solve this problem we use the given test case and make our solution workable for the given test case. The spaces have to be adjusted according to the number of characters in a given line of the string. We use to pointers to keep track of all the words that are to be included in a given string line. Once we reach the last string line we leave it as it is and terminate the loop. We handle the last string line separately using another loop.

## Important Points

- String

- Text justification