#include <stdio.h>
#include <string.h>

// Helper function to check for vowels
int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int calculateTeamPotential(const char* candidates, int ratings[], int size) {
    int teamPotentialScore = 0;
    for (int i = 0; i < size; i++) {
        char currentCandidate = candidates[i];
        int currentRating = ratings[i];
        
        if (currentRating > 5 || isVowel(currentCandidate)) {
            teamPotentialScore += currentRating;
        }
    }
    return teamPotentialScore;
}

int main() {
    const char* candidates = "axbyciz";
    int ratings[] = {8, 10, 3, 6, 9, 2, 7};
    int size = 7;
    
    int score = calculateTeamPotential(candidates, ratings, size);
    printf("Expected Output: 8\n");
    printf("Actual Output:   %d\n", score);
    return 0;
}