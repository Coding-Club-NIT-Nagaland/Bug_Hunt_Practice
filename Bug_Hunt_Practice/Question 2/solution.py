def find_max(arr):
    max_val = 0 
    
    for num in arr:
        if num > max_val:
            max_val = num
    return max_val

# --- Main execution ---
numbers = [-10, -5, -3, -8]
max_num = find_max(numbers)

print(f"Expected Output: -3")
print(f"Actual Output:   {max_num}")