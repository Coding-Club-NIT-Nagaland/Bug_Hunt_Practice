def reverse_array(arr):
    size = len(arr)
    
    for i in range(size):
        temp = arr[i]
        arr[i] = arr[size - 1 - i]
        arr[size - 1 - i] = temp


# --- Main execution ---
my_list = [1, 2, 3, 4, 5]
reverse_array(my_list)

print(f"Expected Output: [5, 4, 3, 2, 1]")
print(f"Actual Output:   {my_list}")