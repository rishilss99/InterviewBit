# Reverse Integer

## Problem

Reverse digits of an integer.

## Logic

This is a simple problem off the bat but the corner cases have to be handled properly. We simply take another auxiliary variable and keep adding digits from the original number to that variable while doing so we keep multiplying it with 10. The modulo and division operators are required to do the task. For dealing with the corner case of 32 bit signed integer overflow we let the auxiliary variable be a long and use INT32_MAX condition check to ascertain the overflow. The overflow check can be done in another case by using a long if condition check. To deal with negative numbers we maintain a boolean variable which multiplies the end result to one if set to true.

## Important Points

- Maths