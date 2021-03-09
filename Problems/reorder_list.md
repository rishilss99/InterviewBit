# Partition List

## Problem

Given a singly linked list

L: L0 → L1 → … → Ln-1 → Ln,

reorder it to:

L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → …

You must do this in-place without altering the nodes’ values.

## Logic

No simple way to do this. You have to first break the list from middle into 2 lists. Then reverse the latter half of the list. Finally merge the lists so that the nodes alternate.

## Important Points

- Linked List

