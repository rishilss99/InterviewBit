# Pretty Print

## Problem

Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

## Logic

Seems complicated at first given the unknown values of 2 integers to be found. However, the logarithm property leads to converting it to a problem of finding a mantissa that is an integer. If no mantissa till the square root of the number has an integer value then we can conclude that no such integers exist.

## Important Points

- Math

- Logarithm