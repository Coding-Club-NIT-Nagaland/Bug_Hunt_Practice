def count_passing(grades):
    count = 0
    for grade in grades:
        if grade >= 50:
            count += 1
    return count

# --- Main execution ---
grades = [40, 50, 51, 80, 100]
num_passed = count_passing(grades)

print(f"Expected Output: 3")
print(f"Actual Output:   {num_passed}")