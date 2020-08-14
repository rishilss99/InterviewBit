# Set Matrix Zeros

## Problem

Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0.

Note: This will be evaluated on the extra memory used. Try to minimize the space and time complexity.

## Logic

This question is a trade-off between space complexity. As you strive to reduce time complexity you end up using more space and as you reduce space complexity you end up using more iterations. Since, the problem belongs to the segment on space recycle the focus is on space complexity. The possible solutions have space complexities from O(MxN), O(M+N) and O(1). I could come up with the O(M+N) approach we goes as : As we iterate the entire matrix first we use 2 hashsets to keep track of all rows and columns which contain a 0 element. On the 2nd iteration of the entire matrix if the current row or current column of an element belongs to the either of the hashsets we immediately set the element to 0. The editorial solution of O(1) is quite a smart one and perfectly suits the theme of the problem. As per the solution we use the 1st row and 1st column of the matrix to keep track of which row and columns have to be set to 0. This way we only need to use 2 additional boolean variables to keep track of the 1st row and 1st column whether they have 0 elements or not. On the 2nd iteration we set the matrix elements as 0 depending on the first row and column values. 

## Important Points

- Arrays