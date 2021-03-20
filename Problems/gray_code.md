# Gray Code

## Problem

The gray code is a binary numeral system where two successive values differ in only one bit.

Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.

There might be multiple gray code sequences possible for a given n.
Return any such sequence.

## Logic

Well learnings from the generate parentheses 2 and permutations problems help to solve this beauty of the question. It is required to find all the possiblities of a binary system but in a particular order. The trick is to use the recursion tree and a manageable example to track the subtle changes that need to be made for each recursive call. The code looks immaculate at the current stage but the thinking process started from a bunch of binary digits that is recursively modified to get the desired sequence. 

## Important Points

- Recursion

- Backtracking