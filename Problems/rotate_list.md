# Rotate List

## Problem

Given a list, rotate the list to the right by k places, where k is non-negative.

## Logic

The approach involves first finding the length of the entire list. Once you reach the end of the list you connect it to the start forming a closed loop linked list. Now using an empirical formula you know at which element the linked list needs to be terminated as per the number of rotations. Iterate towards the attained node and de-link the previous node to get the final result.

## Important Points

- Linked List
