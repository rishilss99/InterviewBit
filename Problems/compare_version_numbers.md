# Compare Version Numbers

## Problem

Compare two version numbers version1 and version2.

If version1 > version2 return 1,
If version1 < version2 return -1,
otherwise return 0.

You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.

Here is an example of version numbers ordering:

## Logic

Since, we need to compare version numbers from strings we need to store the digits till '.' is encountered and then compare the two numbers. The approach involves traversing over both version numbers till we encounter a '.' and then compare and return accordingly. However, a lot of corner cases need to be considered like integer overflow and returning when digits are being repeated. 

## Important Points

- String
