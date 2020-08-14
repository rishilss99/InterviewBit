# Wave Array

## Problem

Given an array of integers, sort the array into a wave like array and return it,
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

## Logic

The problem seems a little intimidating at first, however the logic involved is quite simple. For the wave array all we need to do is sort the array and swap the adjacent numbers and we get the perfect required wave array. However, I went by with it in a rather memory expensive approach as I inserted the elements in a new array rather than carry out the operations in-place. The solution has a time complexity of O(Nlog(N)) thanks to the sorting operation. As mentioned in the editorial the question can be completed with O(N) by considering the median.

## Important Points

- Array

- Sorting