#include <stdio.h>

int countPassing(int grades[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (grades[i] >= 50) {
            count++;
        }
    }
    return count;
}

int main() {
    int grades[] = {40, 50, 51, 80, 100};
    int size = 5;
    
    int numPassed = countPassing(grades, size);
    printf("Expected Output: 3\n");
    printf("Actual Output:   %d\n", numPassed);
    return 0;
}