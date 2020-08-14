# Find Duplicate in Array

## Problem

Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.

## Logic

Apparently there is a specified worst case space complexity which prevents us from using the hashset approach. However, since we know that the elements will be within a certain range we can use a dynamic boolean array. We need to use the dynamic boolean array since we need to define the size of the static boolean array before hand. The duplicate finding is approach is similar to the hashset approach with the only difference that we are using 1/4 th the space required due to the boolean array. This problem is actually to be solved as mentioned by the editorial solution using the bucketing approach wherein we use the square root of the n to form buckets which helps us save on space by O(sqrt(n)).

## Important Points

- Array