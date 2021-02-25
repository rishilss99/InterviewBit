# Merge Two Sorted Lists

## Problem

Merge two sorted linked lists and return it as a new list.
The new list should be made by splicing together the nodes of the first two lists, and should also be sorted.

## Logic

The two pointer apprach is the intuitive solution that comes to mind. What we have done is taken two pointers pointing to the different linked lists. Now we start with the pointer from the smaller value linked list and keep appending values as and when the next element is greater than the second pointer element. Another way to think about this is treating both lists as separate and understanding the individual address property of nodes. What we can do is take a NULL pointer as the head node and keep appending nodes from the two linked lists as they seem fit. Just a different thinking approach the result will be the same.

## Important Points

- Linked List

- Two Pointer