# Question 1: The Team Selector

## Problem Statement

You are a coach trying to select "eligible" students for your coding team. You have two lists:
1.  A string of `candidates` (e.g., "abcdef").
2.  An array of `ratings` for each candidate (e.g., {10, 5, 8, 9, 4, 3}).

A candidate is considered **"eligible"** only if **both** of these conditions are true:
1.  Their skill `rating` is **strictly greater than 5**.
2.  Their name (the character) is a **vowel** ('a', 'e', 'i', 'o', 'u').

Your task is to write a function that calculates the **sum of the ratings** of all "eligible" candidates.

## Example

* `candidates` = "axbyciz"
* `ratings` = {8, 10, 3, 6, 9, 2, 7}

**Trace:**
* `'a'`, `rating = 8`: (8 > 5) is True AND `isVowel('a')` is True. -> **Eligible**. Add 8.
* `'x'`, `rating = 10`: (10 > 5) is True AND `isVowel('x')` is False. -> Not eligible.
* `'b'`, `rating = 3`: (3 > 5) is False. -> Not eligible.
* `'y'`, `rating = 6`: (6 > 5) is True AND `isVowel('y')` is False. -> Not eligible.
* `'c'`, `rating = 9`: (9 > 5) is True AND `isVowel('c')` is False. -> Not eligible.
* `'i'`, `rating = 2`: (2 > 5) is False. -> Not eligible.
* `'z'`, `rating = 7`: (7 > 5) is True AND `isVowel('z')` is False. -> Not eligible.

**Expected Output:** `8`

The buggy code will output something different. Find the bug!