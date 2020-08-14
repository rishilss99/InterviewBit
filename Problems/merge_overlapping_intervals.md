# Merge Overlapping Intervals

## Problem

Given a collection of intervals, merge all overlapping intervals.

For example:

Given [1,3],[2,6],[8,10],[15,18],

return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.

## Logic

Merging intervals is a recurring theme of array based question. After not being able to do the previous problem on merging intervals, this was a fairly simple problem to tackle. First and foremost we sort the vector based on the starting point of the intervals in ascending order. Then as we iterate over the intervals we merge them if they happen to overlap and just append if they don't. An iteresting property to keep in mind is two intervals don't overlap if max(a,c) > min(b,d) for intervals {a,b} and {c,d}.

## Important Points

- Array