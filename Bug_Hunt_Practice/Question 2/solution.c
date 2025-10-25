#include <stdio.h>

int findMax(int arr[], int size) {
    int maxVal = 0; 
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int numbers[] = {-10, -5, -3, -8};
    int size = 4;
    
    int max = findMax(numbers, size);
    printf("Expected Output: -3\n");
    printf("Actual Output:   %d\n", max);
    return 0;
}