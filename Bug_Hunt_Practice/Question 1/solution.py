def is_vowel(c):
    """Helper function to check for vowels"""
    return c in 'aeiou'

def calculate_team_potential(candidates, ratings):
    team_potential_score = 0
    for i in range(len(candidates)):
        current_candidate = candidates[i]
        current_rating = ratings[i]
        
        if current_rating > 5 or is_vowel(current_candidate):
            team_potential_score += current_rating
            
    return team_potential_score

# --- Main execution ---
candidates = "axbyciz"
ratings = [8, 10, 3, 6, 9, 2, 7]

score = calculate_team_potential(candidates, ratings)

print(f"Expected Output: 8")
print(f"Actual Output:   {score}")