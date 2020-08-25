# Power of 2

## Problem

Find if Given number is power of 2 or not.
More specifically, find if given number can be expressed as 2^k where k >= 1.

## Logic

Since, the problem involves powers of 2 greater than 64 we can't solve it using simple power calculations. We need to simulate the division operation of 2 using a recursive loop for this problem. We stop when the string hits the character 2. Another base case of the recursion checks if the string ends with an odd integer in which case we immediately return 0. If both the base cases fail we create an auxiliary string containing the quotient of the division. The quotient is passed again to the recursive loop till it hits one of the base cases.

## Important Points

- String

- Base conversion