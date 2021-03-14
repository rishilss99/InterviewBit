# Min Stack

## Problem

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

1.push(x) – Push element x onto stack.
2.pop() – Removes the element on top of the stack.
3.top() – Get the top element.
4.getMin() – Retrieve the minimum element in the stack.

Note that all the operations have to be constant time operations.

## Logic

Maintain two stacks and simulate the operations accordingly. At first it seems difficult to keep track of the minimum elements. But understand that the minimum stack is filled with elements such that min(minimum stack top, current element). Which translates to that if the current element is larger than the already inserted minimum stack top element that it will continue to be the minimum element even when that particular element is popped off. We require 2N space for this. A more memory efficient approach involves using a shorter stack that keeps track of the only single minimum elements as minimum elements are likely to remain the same many elements in the stack. 

## Important Points

- Stack
