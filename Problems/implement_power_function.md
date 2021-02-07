# Implement Power Function

## Problem

Implement pow(x, n) % d.

In other words, given x, n and d,

find (xn % d)

Note that remainders on division cannot be negative.
In other words, make sure the answer you return is non negative.

## Logic

Not exactly binary search but a more efficient approach towards computing the powers of a number. When computing a power of a number we often go multiplying one by one leading to a time complexity of O(N). A more efficient approach involves multiplying the numbers when possible in powers of 2. Hence, for 5^4 you would finish the operation in 2 multiplications instead of the normal 4 multiplications. Another important inference from this problem is that the modulo of two numbers is the same before and after the multiplications i.e., (a%c * b%c) = (ab) % c. Modulo operation is distributive for multiplication.
 
## Important Points

- Binary search