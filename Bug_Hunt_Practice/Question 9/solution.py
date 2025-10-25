def is_sorted(arr):
    if len(arr) < 2:
        return True
    
    sorted_flag = True
    for i in range(len(arr) - 1):
        if arr[i] > arr[i+1]:
            sorted_flag = False
        else:
            sorted_flag = True
            
    return sorted_flag


list1 = [1, 2, 5, 3, 10] # Not sorted
list2 = [1, 2, 5, 8, 10] # Sorted

result1 = is_sorted(list1)
print(f"Checking {list1}...")
print(f"Expected Output: False")
print(f"Actual Output:   {result1}")

result2 = is_sorted(list2)
print(f"\nChecking {list2}...")
print(f"Expected Output: True")
print(f"Actual Output:   {result2}")