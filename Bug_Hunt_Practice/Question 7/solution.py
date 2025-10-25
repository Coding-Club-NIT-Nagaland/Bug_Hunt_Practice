def find_first_a(s):
    found_index = -1
    
    for i in range(len(s)):
        if s[i] == 'a':
            found_index = i
            
    return found_index

text = "banana"
index = find_first_a(text)

print(f"Expected Output: 1")
print(f"Actual Output:   {index}")