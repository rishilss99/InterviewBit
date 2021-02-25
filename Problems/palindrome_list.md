# Palindrome List

## Problem

Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.

Expected solution is linear in time and constant in space.

## Logic

Seems simple enough if extra space can be used. However, as it needs to be done with constant space storing the elements of the linked list in another data structure is not possible. The approach involves first finding the length of the entire list. Then you iterate and reverse the list till length/2. Hence, you now have two linked lists pointers. Iterate both simulatneously checking for mismatch. If none found it is a palindrome.

## Important Points

- Linked List

- Two Pointer
