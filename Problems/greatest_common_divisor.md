# Greatest Commmon Divisor

## Problem

Given 2 non negative integers m and n, find gcd(m, n)

GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer.

## Logic

We solved this problem using the most efficient iteration of finding factors that we know however the best suited approach for finding the GCD of two numbers is the euclidean algorithm. It is based on the fact that if GCD(a,b) divides a and b then GCD(a,b) also divides a-b. This gives the recursive case while the base case is when the smaller number is a factor of the larger number.

## Important Points

- Euclidean Algorithm