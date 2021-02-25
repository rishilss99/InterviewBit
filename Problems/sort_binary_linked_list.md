# Sort Binary Linked List

## Problem

Given a Linked List A consisting of N nodes.

The Linked List is binary i.e data values in the linked list nodes consist of only 0's and 1's.

You need to sort the linked list and return the new linked list.

## Logic

Once again the two pointer approach yields the result. One pointer keeps track of the 0s while the other goes on trying to find 1s. As soon as a 0 is found after a 1 the values are swapped. Since it is not mentioned otherwise we are swapping the values instead of the nodes which can be done too just with care taken for adjusting the next pointers.

## Important Points

- Linked List

- Two Pointer
