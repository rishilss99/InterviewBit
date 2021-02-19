# Container With Most Water

## Problem

Given n non-negative integers a1, a2, ..., an,
where each represents a point at coordinate (i, ai).
'n' vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0).

Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Your program should return an integer which corresponds to the maximum area of water that can be contained (Yes, we know maximum area instead of maximum volume sounds weird. But this is 2D plane we are working with for simplicity).

## Logic

Understand that finding the maximum area requires a height component and a length component. Since, the length is the difference between the pointer positions starting from separate ends makes the most sense. That ensures that you have the maximum length. Now as you iterate you are technically looking the maximum height from the postions of the two pointer and the corresponding area. So basically you iterate from the maximum length towards finding the maximum height and in doing so you stumble a value of area that is the maximum. Obviously the time complexity is O(N).

## Important Points

- Two Pointers
