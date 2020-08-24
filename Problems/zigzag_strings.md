# Zigzag Strings

## Problem

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

## Logic

This is another string simulation problem for we use a vector of strings to keep track of individual row strings. To keep track of the vector index we use an auxiliary variable j that we increase and decrease using a boolean variable. This simulation of a zigzag wave using the index variable allows us to store the respective strings in the vector. We finally return the result string which is the concatenation of all the strings in the vector as per increasing index.

## Important Points

- String