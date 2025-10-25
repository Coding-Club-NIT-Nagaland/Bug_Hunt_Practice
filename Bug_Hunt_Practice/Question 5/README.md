# Question 5: Passing Grade Counter

## Problem Statement

You are given an array of student `grades`. Write a function to count how many students received a **"passing grade."**

A passing grade is defined as any grade **strictly greater than 50**.
(e.g., 50 is *not* a passing grade, but 51 is).

## Example

* `grades` = {40, 50, 51, 80, 100}

**Trace:**
* `40`: Fail
* `50`: Fail (not *strictly greater* than 50)
* `51`: Pass
* `80`: Pass
* `100`: Pass

**Expected Output:** `3`

The buggy code counts the wrong number of students. Find the bug!