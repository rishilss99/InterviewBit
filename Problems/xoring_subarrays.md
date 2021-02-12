# Reverse Bits

## Problem

Given an integer array A of size N.

You need to find the value obtained by XOR-ing the contiguous subarrays, followed by XOR-ing the values thus obtained. Determine and return this value.

## Logic

The naive and stupid approach involves iterating twice over the array finding all the subarrays and XOR-ing as you go along. Save the results in a new array and then XOR them. The actual solution is looking at the properties of XOR i.e., it is commutative and the identity property. So no matter what length but if the same number gets XOR-ed anywhere in the sequence you can be sure that the number is nulled out. Another important thing to remember is that each element in the contiguous subarray appears (i+1)x(N-i) times. So if this values turns out to be even then that element gets nulled out. So considering the possibilites you will see that for an array of even length the answer will always be 0. As each element appears even times in the solution. The only possibility is when the length N is odd and the ith index is even in which case the element appears odd number of times and can be effectively considered to be a part of the solution. Pretty cool going down from naive O(N^2) to O(N).

## Important Points

- Bit Manipulation

- Bit operator