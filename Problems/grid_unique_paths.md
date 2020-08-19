# Grid Unique Paths

## Problem

A robot is located at the top-left corner of an A x B grid (marked ‘Start’ in the diagram below).

## Logic

This is an excellent problem of combinatorics application. This problem is analogous to arranging differently colored balls from two buckets in a given number of spaces. However, we need to treat the balls as identical since only one unique ordering of row and column operation is possible. Now for arranging m+n elements the total possibilites are m+n! but since the balls are identical we need to divide it by m! and n!. We can have a more efficient implementation by calculating the factorial or min(m,n) and multiplying the values of the sum till it reaches the max(m,n)

## Important Points

- Maths