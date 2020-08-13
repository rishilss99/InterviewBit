# Max Sum Contiguous Subarray

## Problem

Find the contiguous subarray within an array, A of length N which has the largest sum.

## Logic

The problem is quite simple if we understand the possible cases properly. We realize that for the sum to be maximum it must start from a +ve integer only. For the exceptional case where all array elements are -ve we just keep updating the maximum of the -ve integers. Now for the general case of +ve and -ve integers we iterate the array and for every integer which when added to the sum variable is +ve we update the sum. Just to keep track of the maximum sum encountered we use another curr_max variable which keeps track of the maximum sum. As and when the sum becomes -ve we update the original maximum sum and reset sum and curr_max variables to 0. The editorial solution is fairly simple and without the trivial cases comparable to our solution. The crux of the problem was in understanding the cases rather than coming up with a programming solution.

## Important Points

- Array