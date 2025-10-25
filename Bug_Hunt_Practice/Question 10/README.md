# Question 10: Sum of Even Numbers

## Problem Statement

Write a function that calculates the **sum of only the even numbers** in an array of integers.

## Example

* `arr` = {1, 2, 3, 4, 5, 6}

**Trace:**
* `1`: Odd
* `2`: Even -> Sum = 2
* `3`: Odd
* `4`: Even -> Sum = 2 + 4 = 6
* `5`: Odd
* `6`: Even -> Sum = 6 + 6 = 12

**Expected Output:** `12`

The buggy code calculates a sum, but it's the sum of the *wrong numbers*. Find the bug!