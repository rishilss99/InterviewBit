# List Cycle

## Problem

Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

Try solving it using constant additional space.

## Logic

The two pointer apprach is the intuitive solution that comes to mind. Formally known as Floyd's cycle finding algorithm you use two pointers. One iterates twice as fast as the other, if a cycle exists both pointers are bound to coincide at one pointer or other. You can even find an empirical formula to find the point of coincidence. However, instead of that what we do is once we find that a cycle exists. We use both the pointers to find the length of the cycle. One pointer stays still while the other iterates till it meets the first pointer. Hence, the length of the cycle is found. Once we find the length of the cycle we use the same Nth node from end trick to find the first element of the cycle. One pointer starts from the start and other after the N nodes where N is the length of the cycle. The first node where the two pointers meet is the starting point of the cycle.

## Important Points

- Linked List

- Floyd's Cycle Finding algorithm