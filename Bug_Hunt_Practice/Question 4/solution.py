def calculate_average(arr):
    total_sum = 0
    for num in arr:
        total_sum += num
    
    if not arr:
        return 0
        
    average = total_sum // len(arr)
    return average

# --- Main execution ---
grades = [5, 10, 2]
avg = calculate_average(grades)

print(f"Expected Output: 5.666...")
print(f"Actual Output:   {avg}")