# Question 8: Cumulative Word Lengths

## Problem Statement

You are given an array of `strings`. Your goal is to return a *new* array (or `vector`) of `integers`, where each element `i` is the **sum of the lengths of all strings *up to and including* index `i`**. This is also known as a running total or prefix sum.

## Example

* `words` = {"hello", "world", "bug"}

**Trace:**
* Index 0: "hello" (length 5). Total = 5
* Index 1: "world" (length 5). Total = 5 (from "hello") + 5 = 10
* Index 2: "bug" (length 3). Total = 10 (from before) + 3 = 13

**Expected Output:** `{5, 10, 13}`

The buggy code's output looks strange. It's not calculating the *cumulative* sum correctly. Find the bug!