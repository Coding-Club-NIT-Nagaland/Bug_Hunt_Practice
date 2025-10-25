# Question 9: Check if Array is Sorted

## Problem Statement

Write a function that checks if an array of integers is sorted in **non-decreasing (ascending) order**. It should return `true` if sorted, `false` otherwise. An array with 0 or 1 elements is considered sorted.

## Example

* `arr` = {1, 2, 5, 8, 10}
* **Expected Output:** `true` (or `1`)

* `arr` = {1, 2, 5, 3, 10}
* **Expected Output:** `false` (or `0`)

The buggy code *looks* like it should work, but it contains a subtle bug that causes it to return the wrong answer for sorted arrays. Find the bug!