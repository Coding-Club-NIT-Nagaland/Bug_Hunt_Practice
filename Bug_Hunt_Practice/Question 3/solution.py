def is_palindrome(s):
    length = len(s)
    for i in range(length // 2):
        if s[i] != s[length - i - 1]:
            return False
    return True

# --- Main execution ---
text = "racecar"
result = is_palindrome(text)
print(f"Checking 'racecar'...")
print(f"Expected Output: True")
print(f"Actual Output:   {result}")

text2 = "hello"
result2 = is_palindrome(text2)
print(f"\nChecking 'hello'...")
print(f"Expected Output: False")
print(f"Actual Output:   {result2}")