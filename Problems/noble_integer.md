# Noble Integer

## Problem

Given an integer array A, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p.

## Logic

This is quite clearly a sorting based array question. We need to sort the array and check the condition where the size of the array minus the position of element in the sorted array equals the value of the element. The important thing to be considered is the case of repeating integers. We find a much better approach to be the use of in-built map data structure. We insert element in the map in pairs of {element,count}. Hence, we obtain a map with unique elements and their corresponding occurences in the array. Since a map is sorted on insertion we do not need to sort the map unlike the case of vectors. Now as we iterate over the elements of the map we maintain a sum of occurences of previous elements. The check for the noble integer is whether A.size() - sum equals the value of the current key of the map.

## Important Points

- Array

- Sorting