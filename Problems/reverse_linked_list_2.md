# Reverse Linked List 2

## Problem

Reverse a linked list from position m to n. Do it in-place and in one-pass.

For example:

Given 1->2->3->4->5->NULL, m = 2 and n = 4,

return 1->4->3->2->5->NULL.

## Logic

Use an auxiliary node to keep track of the list in case m = 1. Now use the count approach from the given m to keep track of nodes as they are reversed. It is important to keep track of the m-1 node as it needs to modified once the entire subsegment has been reversed.

## Important Points

- Linked List

