# Remove Nth Node from List End

## Problem

Given a linked list, remove the nth node from the end of list and return its head.

## Logic

The intuitive approach is to first find the length of the entire list and then remove the (length-n)th node. This has a time complexity of O(N) but requires two iterations over the list. The better approach which employs two pointers is to first take a pointer and move it by n. Then take another pointer at the start. Now move both pointers till the first pointer reaches the end. Now the second pointer is pointing to the node that is to be removed. This requires only one iteration.

## Important Points

- Linked List
