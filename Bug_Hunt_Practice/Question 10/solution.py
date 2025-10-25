def sum_of_evens(arr):
    total_sum = 0
    for num in arr:
        if num % 2 == 1:
            total_sum += num
    return total_sum

my_list = [1, 2, 3, 4, 5, 6]
result = sum_of_evens(my_list)

print(f"Expected Output: 12")
print(f"Actual Output:   {result}")