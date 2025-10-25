# Question 7: Find the First 'A'

## Problem Statement

Write a function that searches a string for the **first occurrence** of the character 'a' (lowercase). The function should return the **index** of that character. If 'a' is not found, it should return -1.

## Example

* `text` = "banana"
* **Trace:** The first 'a' is at index 1.
* **Expected Output:** `1`

* `text` = "rhythm"
* **Expected Output:** `-1`

The buggy code finds an 'a', but it doesn't always find the *first* one. Find the bug!