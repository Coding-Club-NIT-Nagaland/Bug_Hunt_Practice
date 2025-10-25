def cumulative_lengths(words):
    lengths = []
    current_sum = 0
    
    for word in words:
        lengths.append(len(word))
        current_sum += len(word)
        
    return lengths

# --- Main execution ---
words = ["hello", "world", "bug"]
result = cumulative_lengths(words)

print(f"Expected Output: [5, 10, 13]")
print(f"Actual Output:   {result}")