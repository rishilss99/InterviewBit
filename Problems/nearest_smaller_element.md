# Nearest Smaller Element

## Problem

Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

More formally,

    G[i] for an element A[i] = an element A[j] such that 
    j is maximum possible AND 
    j < i AND
    A[j] < A[i]    
Elements for which no smaller element exist, consider next smaller element as -1.

## Logic

One of the clever stack problems. It is important how you push and pop. An important observation is that whenever you encounter an element smaller than the stack top then it will be the nearest smaller element for all the other following array elements. So you can go ahead and pop the elements till you reach the smallest pushed element in the stack. The observation that the current pushed element will be the nearest smaller one is very important.

## Important Points

- Stack
