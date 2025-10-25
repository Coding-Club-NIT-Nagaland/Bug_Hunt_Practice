#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Helper function to check for vowels
bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int calculateTeamPotential(string candidates, int ratings[], int size) {
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
    string candidates = "axbyciz";
    int ratings[] = {8, 10, 3, 6, 9, 2, 7};
    int size = 7;
    
    int score = calculateTeamPotential(candidates, ratings, size);
    cout << "Expected Output: 8" << endl;
    cout << "Actual Output:   " << score << endl;
    return 0;
}