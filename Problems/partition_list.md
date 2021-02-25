# Partition List

## Problem

Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

## Logic

Much like the implementation of insertion sort for linked lists you use an auxiliary node to keep track of all nodes with values less than the pivot. What you do is you keep connecting such elements to the auxiliary node while a pointer iterates over the original list finding such elements. Quite straight-forward except for the cases where the lists starts with less than elements. Careful simulation instantly finds the loopholes that can be plugged.

## Important Points

- Linked List

