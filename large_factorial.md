# Large Factorial

## Problem

Given a number A. Find the fatorial of the number.

Problem Constraints
1 <= A <= 100

## Logic

We deal with this problem by using a helper function which we visit as we go from 2 to the value of A whose factorial is to be found. In the helper function we take the input array and multiply and store all values by the given factorial number and store in the array. Then we iterate each array element modifying it according to the carry generated so that each element is less than 10. Once, we arrange the carry values we return the final array which is reassigned to the original array and on the next iteration of n till it reaches A the process continues. Finally we store the reversed array in the string which is returned.

## Important Points

- Arrays