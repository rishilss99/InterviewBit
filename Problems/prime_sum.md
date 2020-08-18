# Prime Sum

## Problem

Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

## Logic

This problem is an interesting application of co-factors and prime number properties. According to Goldbach's conjecture every +ve even number can be expressed as the sum of 2 prime numbers. We solve this problem by iterating till all numbers less than equal to N/2 and checking if they are prime using a auxiliary check_prime function. If a number happens to be prime we check if (N-i) is prime using the check_prime function. If it return true we return the answer. However, the time complexity of this approach happens to be O(N^2). We can do much better by using the Sieve of Eratosthenes method and finding the prime numbers till N in one go. Then we simply have to iterate over the list and check if the corresponding (A-i) number is present in the list. The time complexity of this approach happens to be O(NloglogN).

## Important Points

- Prime Number check

- Goldbacg's conjecture
