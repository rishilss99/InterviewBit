# First non-repeating character in a stream of characters

## Problem

Given a string A denoting a stream of lowercase alphabets. You have to make new string B.

B is formed such that we have to find first non-repeating character each time a character is inserted to the stream and append it at the end to B. If no non-repeating character is found then append '#' at the end of B.

## Logic

Create a count array of size 26(assuming only lower case characters are present) and initialize it with zero. Create a queue of char datatype. Store each character in queue and increase its frequency in the hash array. For every character of stream, we check front of the queue. If the frequency of character at the front of queue is one, then that will be the first non repeating character. Else if frequency is more than 1, then we pop that element. If queue became empty that means there are no non repeating character so we will append #.

## Important Points

- Queue

- Hashing
